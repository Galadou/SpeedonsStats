#include "Total.hpp"

void	printTopEmote(Total &total, std::ofstream &outfile)
{
	std::vector<std::pair<std::string, int>> sorted_viewers(total.TopEmote.begin(), total.TopEmote.end());
	std::sort(sorted_viewers.begin(), sorted_viewers.end(),
	[](const std::pair<std::string, int>& a, const std::pair<std::string, int>& b)
	{
		return (a.second > b.second);  // Trier par valeur (second)
	});
	outfile << std::endl << "Top 5 Emote de note:" << std::endl;
	
	int count = 0;
	for (const auto& entry : sorted_viewers)
	{
		if (count == 5)
		break;
		outfile << "Emote: " << entry.first << ", Nombre de fois: " << entry.second << std::endl;
		count++;
	}
}

void	printTopChatter(Total &total, std::ofstream &outfile)
{
	std::vector<std::pair<std::string, int>> sorted_viewers(total.TopChatter.begin(), total.TopChatter.end());

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
}