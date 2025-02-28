#include "Speedons.hpp"

int topViewers(char **argv, std::ofstream &outfile)
{
	std::ifstream file(argv[1]);
	std::string str;
	char *buf;
	std::map<std::string, int> viewers;
	std::string pseudo;
	int i = 0;

	if (!file)
		throw std::invalid_argument("Error opening file");

	while (std::getline(file, str))
	{
		buf = (char *)str.c_str();
		while (*buf != ',')
			buf++;
		buf++;
		while (buf[i] != ',')
			i++;
		pseudo = std::string(buf, buf + i);
		auto it = viewers.find(pseudo);
		if (it != viewers.end())
			it->second++;
		else
			viewers[pseudo] = 1;
		i = 0;
	}
	file.close();

	std::vector<std::pair<std::string, int>> sorted_viewers(viewers.begin(), viewers.end());

	std::sort(sorted_viewers.begin(), sorted_viewers.end(),
	[](const std::pair<std::string, int>& a, const std::pair<std::string, int>& b)
	{
		return a.second > b.second;  // Trier par valeur (second)
	});
	outfile << std::endl << "Top 5 viewers qui ont le plus parlé:" << std::endl;

	int count = 0;
	for (const auto& entry : sorted_viewers)
	{
		if (count == 5) break; // Limiter à 5
		outfile << "Pseudo: " << entry.first << ", Nombre de message: " << entry.second << std::endl;
		count++;
	}
	return (0);
}