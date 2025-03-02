#include "../Total.hpp"

void count_gg(std::string &str, Total &total)
{
	size_t pos = 0;

	while ((pos = str.find("gg", pos)) != std::string::npos)
	{
		total.nb_gg++;
		pos++;
	}
	pos = 0;
	while ((pos = str.find("GG", pos)) != std::string::npos)
	{
		total.nb_gg++;
		pos++;
	}
	pos = 0;
	pos = 0;
	while ((pos = str.find("Gg", pos)) != std::string::npos)
	{
		total.nb_gg++;
		pos++;
	}
}