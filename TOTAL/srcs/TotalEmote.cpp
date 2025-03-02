#include "../Total.hpp"

static size_t count_occurrences(const std::string &str, const std::string &target)
{
	size_t count = 0;
	size_t pos = 0;

	while ((pos = str.find(target, pos)) != std::string::npos)
	{
		++count;
		pos += target.length();
	}
	pos = 0;
	while ((pos = str.find("SingsNote", pos)) != std::string::npos)
	{
		--count;
		pos += 10;
	}
	return (count);
}

void nbEmoteNote(std::string &str, Total &total)
{
	total.nb_emote += count_occurrences(str, "PepoG");
	total.nb_emote += count_occurrences(str, "PEPOG");
	total.nb_emote += count_occurrences(str, "Pepog");
	total.nb_emote += count_occurrences(str, "pepog");
	total.nb_emote += count_occurrences(str, "PeepoG");
	total.nb_emote += count_occurrences(str, "note");
	total.nb_emote += count_occurrences(str, "NOTE");
	total.nb_emote += count_occurrences(str, "Note");
	total.nb_emote += count_occurrences(str, "gom4rtLecture");
	total.nb_emote += count_occurrences(str, "mynG");
	total.nb_emote += count_occurrences(str, "zugNerd");
	total.nb_emote += count_occurrences(str, "milio1Learn");
	total.nb_emote += count_occurrences(str, "iitzG");
}