#include "../Total.hpp"

void count_miaou(std::string &str, Total &total)
{
	size_t pos = 0;

	while ((pos = str.find("MIAOU", pos)) != std::string::npos)
	{
		total.nb_miaou++;
		pos++;
	}
	pos = 0;
	while ((pos = str.find("miaou", pos)) != std::string::npos)
	{
		total.nb_miaou++;
		pos++;
	}
	pos = 0;
	while ((pos = str.find("Miaou", pos)) != std::string::npos)
	{
		total.nb_miaou++;
		pos++;
	}
}