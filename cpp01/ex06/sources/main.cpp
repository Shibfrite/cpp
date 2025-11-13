#include"Harl.hpp"

int main(int argc, char **argv)
{
	Harl	harl;

	if (argc != 2)
	{
		std::cout << "Arg error" << std::endl;
		return (FAILURE);
	}
	harl.complain(argv[1]);
	return (SUCCESS);
}
