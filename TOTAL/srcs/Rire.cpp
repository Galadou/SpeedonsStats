#include "../Total.hpp"

void count_rire(std::string &str, Total &total)
{
	size_t pos = 0;
	while ((pos = str.find("KEKW", pos)) != std::string::npos)
	{
		total.nb_rire++;
		pos++;
	}
	pos = 0;
	while ((pos = str.find("LUL", pos)) != std::string::npos)
	{
		total.nb_rire++;
		pos++;
	}
	pos = 0;
	while ((pos = str.find("ahah", pos)) != std::string::npos)
	{
		total.nb_rire++;
		pos += 4;
	}
}