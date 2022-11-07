#include <fstream>
#include <iostream>


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
	std::ifstream ini_file(filename);
	std::ofstream out_file(filename + ".replace");
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

int main(int argc, char **argv)
{
	if (argc < 4)
	{
		std::cout << "please enter 3 arguments: filename s1 s2" << std::endl;
		return (1);
	}
	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	int s1_len = s1.length();
	if (s1_len == 0)
	{
		std::cout << "s1 (string to replace) can not be empty" << std::endl;
		return (1);
	}
	if (!replaceFile(filename, s1, s2))
		return (1);
	return 0;
}
