#include <iostream>

// int main(int argc, char **argv)
// {
// 	if (argc < 4)
// 		std::cout << "please enter 3 arguments: filename s1 s2";
// 	return 0;
// }

// C++ Program to demonstrate
// copying the content of a .txt file
#include <fstream>
#include <iostream>

int main()
{
	std::string line;
	// For writing text file
	// Creating ofstream & ifstream class object
	std::ifstream ini_file("testtekst.txt"); // This is the original file
	std::ofstream out_file("copy.txt");
	if (ini_file && out_file)
	{

		while (getline(ini_file, line))
		{
			out_file << line << "\n";
		}
		std::cout << "Copy Finished \n";
	}
	else
	{
		// Something went wrong
		printf("Cannot read File");
	}
	// Closing file
	ini_file.close();
	out_file.close();
	return 0;
}
