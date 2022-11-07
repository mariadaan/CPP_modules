#ifndef SED_HPP
#define SED_HPP

#include <fstream>
#include <iostream>

void replaceLine(std::string &line, std::string &s1, std::string &s2);
int replaceFile(std::string &filename, std::string &s1, std::string &s2);

#endif
