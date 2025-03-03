#include "../Total.hpp"

void count_romet(std::string &str, Total &total)
{
	size_t pos = 0;

	while ((pos = str.find("romet", pos)) != std::string::npos)
	{
		total.nb_romet++;
		pos++;
	}
	pos = 0;
	while ((pos = str.find("ROMET", pos)) != std::string::npos)
	{
		total.nb_romet++;
		pos++;
	}
	pos = 0;
	while ((pos = str.find("Romet", pos)) != std::string::npos)
	{
		total.nb_romet++;
		pos++;
	}
}