#include "../Total.hpp"

void count_achete(std::string &str, Total &total)
{
	size_t pos = 0;

	while ((pos = str.find("ACHETE", pos)) != std::string::npos)
	{
		total.nb_achete++;
		pos++;
	}
	pos = 0;
	while ((pos = str.find("Achete", pos)) != std::string::npos)
	{
		total.nb_achete++;
		pos++;
	}
	pos = 0;
	while ((pos = str.find("achete", pos)) != std::string::npos)
	{
		total.nb_achete++;
		pos++;
	}
	pos = 0;
	while ((pos = str.find("ACHÈTE", pos)) != std::string::npos)
	{
		total.nb_achete++;
		pos++;
	}
}