
#include "Total.hpp"


static void printAll(Total &total, std::ofstream &outfile)
{
	outfile << "Nombre de GG total: " << total.nb_gg << std::endl;
	outfile << "Nombre de message dans le chat: " << total.nb_line << std::endl;
	outfile << "Nombre d'amour total: " << total.nb_love << std::endl;
	outfile << "Nombre de PepoG total: " << total.nb_pepog << std::endl;
	outfile << "Nombre d'Emote note toal: " << total.nb_emote << std::endl;
	outfile << "Nombre de Note retenue par les viewers: " << total.nb_note << std::endl;
	outfile << "Nombre de Rire total: " << total.nb_rire << std::endl;
	outfile << "Nombre de ACHETE: " << total.nb_achete << std::endl;
	outfile << "Nombre de ROMET: " << total.nb_romet << std::endl;
	outfile << "Nombre de MIAOU: " << total.nb_miaou << std::endl;
	outfile << "Nombre de WEEE: " << total.nb_wee << std::endl;

	printTopChatter(total, outfile);
	printTopEmote(total, outfile);
}


int main(int argc, char **argv)
{
	if (argc < 2)
	{
		std::cerr << "Need one file" << std::endl;
		return (1);
	}
	std::string str;
	std::ofstream outfile("Info.txt");
	Total total;
	int i = 1;

	if (!outfile)
	{
		std::cerr << "Error with open." << std::endl;
		outfile.close();
		return (1);
	}
	try
	{
		while (argv[i])
		{
			std::ifstream file(argv[i]);
			while (std::getline(file, str))
			{
				count_line(total);
				count_pepog(str, total);
				nbNoteViewers(str, total); //compte cmb de note on ete prise (ligne)
				count_love(str, total);
				count_gg(str, total);
				count_rire(str, total);
				nbEmoteNote(str, total);
				count_achete(str, total);
				count_romet(str, total);
				count_miaou(str, total);
				count_wee(str, total);
				topEmoteNote(str, total);
				topChatter(str, total);
			}
			file.close();
			i++;
		}
		printAll(total, outfile);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	outfile.close();
	return (0);
}