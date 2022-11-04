#include <iostream>

int main(int argc, char **argv)
{
	if (argc < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
		for (int i_str = 1; i_str < argc; i_str++)
			for (int i_char = 0; argv[i_str][i_char]; i_char++)
				putchar(toupper(argv[i_str][i_char]));
	std::cout << std::endl;
	return 0;
}
