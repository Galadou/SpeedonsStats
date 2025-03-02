#include "../Total.hpp"

static void find_and_count_words(const std::string& line, std::string target, Total &total)
{
	std::istringstream stream(line);  // Flux pour diviser la ligne en mots
	std::string word;

	while (stream >> word)
	{
		if (word.find(target) != std::string::npos)
			total.TopEmote[word]++;
	}
	std::istringstream stream2(line);  // Flux pour diviser la ligne en mots
	while (stream2 >> word)
	{
		if (word.find("SingsNote") != std::string::npos)
			total.TopEmote[word]--; //on enleve cette emote qui est une note de musique
	}
}

void topEmoteNote(std::string &str, Total &total)
{
	std::string result;
	char *buf;
	int i = 0;

	if (str.find("\"") == std::string::npos)
		return;
	buf = (char*)str.c_str();
	while (*buf != '"')
		buf++;
	buf++;
	while (buf[i] != '"')
		i++;
	result = std::string(buf, buf + i);
	find_and_count_words(result, "PepoG", total);
	find_and_count_words(result, "PEPOG", total);
	find_and_count_words(result, "Pepog", total);
	find_and_count_words(result, "pepog", total);
	find_and_count_words(result, "Peepog", total);
	find_and_count_words(result, "pepoG", total);
	find_and_count_words(result, "PeepoG", total);

	find_and_count_words(result, "note", total);
	find_and_count_words(result, "NOTE", total);
	find_and_count_words(result, "Note", total);

	find_and_count_words(result, "gom4rtLecture", total);
	find_and_count_words(result, "mynG", total);
	find_and_count_words(result, "zugNerd", total);
	find_and_count_words(result, "milio1Learn", total);
	find_and_count_words(result, "iitzG", total);
}