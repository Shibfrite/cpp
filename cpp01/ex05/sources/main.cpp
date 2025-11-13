#include"Harl.hpp"

int main()
{
	Harl	harl;

	std::string complains[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; i++)
	{
		harl.complain(complains[i]);
		std::cout << std::endl;
	}
	return (SUCCESS);
}
