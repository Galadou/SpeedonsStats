#include "Speedons.hpp"

void count_line(char **argv, std::ofstream &outfile)
{
	int i = 0;
	std::string str;
	std::ifstream file(argv[1]);

	if (!file)
		throw std::invalid_argument("Error opening file");
	while (std::getline(file, str))
		i++;
	file.close();
	outfile << "Nombre de message dans le chat: " << i << std::endl;
}

void count_pepog(char **argv, std::ofstream &outfile)
{
	std::string str;
	std::ifstream file(argv[1]);
	int nb_PepoG = 0;

	if (!file)
		throw std::invalid_argument("Error opening file");
	while (std::getline(file, str))
	{
		size_t pos = 0;
		while ((pos = str.find("PepoG", pos)) != std::string::npos)
		{
			nb_PepoG++;
			pos++;
		}
	}
	file.close();
	outfile << "Nombre de PepoG total: " << nb_PepoG << std::endl;
}

void count_rire(char **argv, std::ofstream &outfile)
{
	std::string str;
	std::ifstream file(argv[1]);
	int nb_Rire = 0;

	if (!file)
		throw std::invalid_argument("Error opening file");
	while (std::getline(file, str))
	{
		size_t pos = 0;
		while ((pos = str.find("KEKW", pos)) != std::string::npos)
		{
			nb_Rire++;
			pos++;
		}
		pos = 0;
		while ((pos = str.find("LUL", pos)) != std::string::npos)
		{
			nb_Rire++;
			pos++;
		}
	}
	file.close();
	outfile << "Nombre de Rire total: " << nb_Rire << std::endl;
}

void count_gg(char **argv, std::ofstream &outfile)
{
	std::string str;
	std::ifstream file(argv[1]);
	int nb_gg = 0;

	if (!file)
		throw std::invalid_argument("Error opening file");
	while (std::getline(file, str))
	{
		size_t pos = 0;
		while ((pos = str.find("gg", pos)) != std::string::npos)
		{
			nb_gg++;
			pos++;
		}
		pos = 0;
		while ((pos = str.find("GG", pos)) != std::string::npos)
		{
			nb_gg++;
			pos++;
		}
		pos = 0;
		while ((pos = str.find("gG", pos)) != std::string::npos)
		{
			nb_gg++;
			pos++;
		}
		pos = 0;
		while ((pos = str.find("Gg", pos)) != std::string::npos)
		{
			nb_gg++;
			pos++;
		}
	}
	file.close();
	outfile << "Nombre de GG total: " << nb_gg << std::endl;
}

void count_love(char **argv, std::ofstream &outfile)
{
	std::string str;
	std::ifstream file(argv[1]);
	int nb_love = 0;

	if (!file)
		throw std::invalid_argument("Error opening file");
	while (std::getline(file, str))
	{
		size_t pos = 0;
		while ((pos = str.find("<3", pos)) != std::string::npos)
		{
			nb_love++;
			pos++;
		}
		pos = 0;
		while ((pos = str.find("Love", pos)) != std::string::npos)
		{
			nb_love++;
			pos++;
		}
		pos = 0;
		while ((pos = str.find("Heart", pos)) != std::string::npos)
		{
			nb_love++;
			pos++;
		}
		pos = 0;
		while ((pos = str.find("COEUR", pos)) != std::string::npos)
		{
			nb_love++;
			pos++;
		}
		pos = 0;
		while ((pos = str.find("heart", pos)) != std::string::npos)
		{
			nb_love++;
			pos++;
		}
	}
	file.close();
	outfile << "Nombre d'amour total: " << nb_love << std::endl;
}

void nbNoteViewers(char **argv, std::ofstream &outfile)
{
	std::string str;
	std::ifstream file(argv[1]);
	int nb_note = 0;

	if (!file)
		throw std::invalid_argument("Error opening file");
	while (std::getline(file, str))
	{
		if (str.find("PepoG") != std::string::npos)
			nb_note++;
		else if (str.find("PEPOG") != std::string::npos)
			nb_note++;
		else if (str.find("pepog") != std::string::npos)
			nb_note++;
		else if (str.find("Pepog") != std::string::npos)
			nb_note++;
		else if (str.find("pepoG") != std::string::npos)
			nb_note++;
		else if (str.find("PeepoG") != std::string::npos)
			nb_note++;
		else if (str.find("note") != std::string::npos)
			nb_note++;
		else if (str.find("NOTE") != std::string::npos)
			nb_note++;
		else if (str.find("Note") != std::string::npos)
			nb_note++;
		else if (str.find("gom4rtLecture") != std::string::npos)
			nb_note++;
		else if (str.find("mynG") != std::string::npos)
			nb_note++;
		else if (str.find("zugNerd") != std::string::npos)
			nb_note++;
		else if (str.find("milio1Learn") != std::string::npos)
			nb_note++;
		else if (str.find("iitzG") != std::string::npos)
			nb_note++;
	}
	file.close();
	outfile << "Nombre de Note retenue par les viewers: " << nb_note << std::endl;
}

static size_t count_occurrences(const std::string& str, const std::string& substr)
{
	size_t count = 0;
	size_t pos = 0;

	while ((pos = str.find(substr, pos)) != std::string::npos) {
		++count;
		pos += substr.length();
	}
	return (count);
}

void nbEmoteNote(char **argv, std::ofstream &outfile)
{
	std::string str;
	std::ifstream file(argv[1]);
	int nb_note = 0;

	if (!file)
		throw std::invalid_argument("Error opening file");
	while (std::getline(file, str))
	{
		nb_note += count_occurrences(str, "PepoG");
		nb_note += count_occurrences(str, "PEPOG");
		nb_note += count_occurrences(str, "Pepog");
		nb_note += count_occurrences(str, "pepog");
		nb_note += count_occurrences(str, "PeepoG");
		nb_note += count_occurrences(str, "note");
		nb_note += count_occurrences(str, "NOTE");
		nb_note += count_occurrences(str, "Note");
		nb_note += count_occurrences(str, "gom4rtLecture");
		nb_note += count_occurrences(str, "mynG");
		nb_note += count_occurrences(str, "zugNerd");
		nb_note += count_occurrences(str, "milio1Learn");
		nb_note += count_occurrences(str, "iitzG");
	}
	file.close();
	outfile << "Nombre d'Emote note toal: " << nb_note << std::endl;
}

static void find_and_count_words(const std::string& line, std::string target, std::map<std::string, int> &wordCount)
{
	std::istringstream stream(line);  // Flux pour diviser la ligne en mots
	std::string word;

	// Parcours de chaque mot dans la ligne
	while (stream >> word)
	{
		// Chercher la lettre cible dans le mot
		if (word.find(target) != std::string::npos)
		{
			// Incrémenter le compteur pour ce mot
			wordCount[word]++;
		}
	}
}

void topEmoteNote(char **argv, std::ofstream &outfile)
{
	std::string str;
	std::string result;
	char *buf;
	std::ifstream file(argv[1]);
	std::map<std::string, int> wordCount;
	int nb_note = 0;
	int i = 0;

	if (!file)
		throw std::invalid_argument("Error opening file");
	while (std::getline(file, str))
	{
		i = 0;
		buf = (char*)str.c_str();
		while (*buf != '"')
			buf++;
		buf++;
		while (buf[i] != '"')
			i++;
		result = std::string(buf, buf + i);
		find_and_count_words(result, "PepoG", wordCount);
		find_and_count_words(result, "PEPOG", wordCount);
		find_and_count_words(result, "Pepog", wordCount);
		find_and_count_words(result, "pepog", wordCount);
		find_and_count_words(result, "Peepog", wordCount);
		find_and_count_words(result, "pepoG", wordCount);
		find_and_count_words(result, "PeepoG", wordCount);

		find_and_count_words(result, "note", wordCount);
		find_and_count_words(result, "NOTE", wordCount);
		find_and_count_words(result, "Note", wordCount);

		find_and_count_words(result, "gom4rtLecture", wordCount);
		find_and_count_words(result, "mynG", wordCount);
		find_and_count_words(result, "zugNerd", wordCount);
		find_and_count_words(result, "milio1Learn", wordCount);
		find_and_count_words(result, "iitzG", wordCount);

	//	find_and_count_words(result, "mynG", wordCount);

	}
	file.close();

	std::vector<std::pair<std::string, int>> sorted_viewers(wordCount.begin(), wordCount.end());

	std::sort(sorted_viewers.begin(), sorted_viewers.end(),
	[](const std::pair<std::string, int>& a, const std::pair<std::string, int>& b)
	{
		return a.second > b.second;  // Trier par valeur (second)
	});
	outfile << std::endl << "Top 5 Emote de note:" << std::endl;

	int count = 0;
	for (const auto& entry : sorted_viewers)
	{
		if (count == 5) break; // Limiter à 5
		outfile << "Emote: " << entry.first << ", Nombre de fois: " << entry.second << std::endl;
		count++;
	}
}
