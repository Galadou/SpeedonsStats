#include "../Total.hpp"

void nbNoteViewers(std::string &str, Total &total)
{
	if (str.find("PepoG") != std::string::npos)
		total.nb_note++;
	else if (str.find("PEPOG") != std::string::npos)
	total.nb_note++;
	else if (str.find("pepog") != std::string::npos)
	total.nb_note++;
	else if (str.find("Pepog") != std::string::npos)
		total.nb_note++;
	else if (str.find("pepoG") != std::string::npos)
		total.nb_note++;
	else if (str.find("PeepoG") != std::string::npos)
		total.nb_note++;
	else if (str.find("note") != std::string::npos)
		total.nb_note++;
	else if (str.find("NOTE") != std::string::npos)
		total.nb_note++;
	else if (str.find("Note") != std::string::npos)
		total.nb_note++;
	else if (str.find("gom4rtLecture") != std::string::npos)
		total.nb_note++;
	else if (str.find("mynG") != std::string::npos)
		total.nb_note++;
	else if (str.find("zugNerd") != std::string::npos)
		total.nb_note++;
	else if (str.find("milio1Learn") != std::string::npos)
		total.nb_note++;
	else if (str.find("iitzG") != std::string::npos)
		total.nb_note++;
}