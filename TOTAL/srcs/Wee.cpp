#include "../Total.hpp"

void count_wee(std::string &str, Total &total)
{
	size_t pos = 0;

	while ((pos = str.find("wee", pos)) != std::string::npos)
	{
		total.nb_wee++;
		pos++;
	}
	pos = 0;
	while ((pos = str.find("WEE", pos)) != std::string::npos)
	{
		total.nb_wee++;
		pos++;
	}
	pos = 0;
	while ((pos = str.find("Wee", pos)) != std::string::npos)
	{
		total.nb_wee++;
		pos++;
	}
}