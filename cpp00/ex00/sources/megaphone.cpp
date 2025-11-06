#include <iostream>

int main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (int i = 1; i < argc; ++i){
		for (char *p = argv[i]; *p; ++p)
			std::cout << (char)std::toupper((unsigned char)*p);
		if (i + 1 < argc) std::cout << ' ';
	}
	std::cout << std::endl;
	return (0);
}
