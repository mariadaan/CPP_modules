#include "sed.hpp"

/* replace all occurences of s1 in line by s2 */
void replaceLine(std::string &line, std::string &s1, std::string &s2)
{
	std::size_t s1_index = line.find(s1);
	while (s1_index != -1 && s1_index!=std::string::npos)
	{
		line.erase(s1_index, s1.length());
		line.insert(s1_index, s2);
		s1_index = line.find(s1, s1_index + 1);
	}
}

/* replace all occurences of s1 in file by s2 */
int replaceFile(std::string &filename, std::string &s1, std::string &s2)
{
	std::string line;
	std::ifstream ini_file(filename.c_str());
	std::ofstream out_file((filename + ".replace").c_str());
	if (ini_file && out_file)
	{
		while (getline(ini_file, line))
		{
			replaceLine(line, s1, s2);
			out_file << line << std::endl;
		}
	}
	else
	{
		std::cout << "Can not read file" << std::endl;
		return (0);
	}
	ini_file.close();
	out_file.close();
	return (1);
}
