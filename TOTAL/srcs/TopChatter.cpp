#include "../Total.hpp"

void topChatter(std::string &str, Total &total)
{
	std::string pseudo;
	char *buf;
	int i = 0;
	
		buf = (char *)str.c_str();
		while (*buf != ',')
			buf++;
		buf++;
		while (buf[i] != ',')
			i++;
		pseudo = std::string(buf, buf + i);
		auto it = total.TopChatter.find(pseudo);
		if (it != total.TopChatter.end())
			it->second++;
		else
			total.TopChatter[pseudo] = 1;
}