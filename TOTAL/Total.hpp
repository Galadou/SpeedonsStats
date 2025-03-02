#ifndef SPEEDONS_HPP
#define SPEEDONS_HPP

#include <iostream>
#include <fstream> //pour fichier
#include <vector>
#include <map>
#include <algorithm>
#include <stdexcept>
#include <cstring>
#include <sstream>

#define MAXLINE 111082

struct Total
{
	Total();
	~Total();

	int nb_line;
	int nb_pepog;
	int nb_love;
	int nb_gg;
	int nb_achete;
	int nb_romet;
	int nb_note;
	int nb_emote;
	int nb_rire;
	std::map<std::string, int> TopEmote;
	std::map<std::string, int> TopChatter;
};

void count_line(Total &total);
void topChatter(std::string &str, Total &total);
void count_pepog(std::string &str, Total &total);
void nbNoteViewers(std::string &str, Total &total);
void count_love(std::string &str, Total &total);
void count_gg(std::string &str, Total &total);
void topEmoteNote(std::string &str, Total &total);
void count_rire(std::string &str, Total &total);
void nbEmoteNote(std::string &str, Total &total);

void	printTopChatter(Total &total, std::ofstream &outfile);
void	printTopEmote(Total &total, std::ofstream &outfile);




#endif