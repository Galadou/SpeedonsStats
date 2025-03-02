#include "../Total.hpp"

void count_love(std::string &str,Total &total)
{
	size_t pos = 0;

	while ((pos = str.find("<3", pos)) != std::string::npos)
	{
		total.nb_love++;
		pos++;
	}
	pos = 0;
	while ((pos = str.find("Love", pos)) != std::string::npos)
	{
		total.nb_love++;
		pos++;
	}
	pos = 0;
	while ((pos = str.find("Love", pos)) != std::string::npos)
	{
		total.nb_love++;
		pos++;
	}
	pos = 0;
	while ((pos = str.find("Heart", pos)) != std::string::npos)
	{
		total.nb_love++;
		pos++;
	}
	pos = 0;
	while ((pos = str.find("COEUR", pos)) != std::string::npos)
	{
		total.nb_love++;
		pos++;
	}
	pos = 0;
	while ((pos = str.find("coeur", pos)) != std::string::npos)
	{
		total.nb_love++;
		pos++;
	}
	pos = 0;
	while ((pos = str.find("heart", pos)) != std::string::npos)
	{
		total.nb_love++;
		pos++;
	}
}