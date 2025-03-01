
#include "Speedons.hpp"

int main(int argc, char **argv)
{
	int nb_line;
	std::ofstream outfile("SpeedonsInfo.txt");

	if (argc != 2)
	{
		std::cout << "need 1 file" << std::endl;
		return (1);
	}

	try
	{
		count_line(argv, outfile);
		count_pepog(argv, outfile);
		nbNoteViewers(argv, outfile); //compte cmb de note on ete prise (ligne)
		count_love(argv, outfile);
		count_gg(argv, outfile);
		count_rire(argv, outfile);
		nbEmoteNote(argv, outfile);
		topEmoteNote(argv, outfile);
		topViewers(argv, outfile);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		outfile.close();
		return (-1);
	}

	outfile.close();
	return (0);
}