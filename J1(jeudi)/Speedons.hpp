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

void count_line(char **argv, std::ofstream &outfile);
int topViewers(char **argv, std::ofstream &outfile);
void count_pepog(char **argv, std::ofstream &outfile);
void nbNoteViewers(char **argv, std::ofstream &outfile);
void count_love(char **argv, std::ofstream &outfile);
void count_gg(char **argv, std::ofstream &outfile);
void topEmoteNote(char **argv, std::ofstream &outfile);
void count_rire(char **argv, std::ofstream &outfile);
void nbEmoteNote(char **argv, std::ofstream &outfile);



#endif