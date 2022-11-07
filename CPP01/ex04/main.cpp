#include "sed.hpp"

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
