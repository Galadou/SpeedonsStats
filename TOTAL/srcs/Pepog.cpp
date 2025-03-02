#include "../Total.hpp"

void count_pepog(std::string &str, Total &total)
{
	size_t pos = 0;
	while ((pos = str.find("PepoG", pos)) != std::string::npos)
	{
		total.nb_pepog++;
		pos++;
	}
}