#include <iostream>
#include <fstream>
#include <string>
#include <cstring>

std::string replaceAll(std::string line, std::string s1, std::string s2)
{
	if (s1.empty())
		return (line);
	std::string result;
	size_t pos = 0;
	size_t found;
	while ((found = line.find(s1, pos)) != std::string::npos)
	{
		result.append(line.substr(pos, found - pos));
		result.append(s2);
		pos = found + s1.length();
	}
	result.append(line.substr(pos));
	return (result);
}

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
		return (1);
	}
	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::ifstream ifs(filename.c_str());
	if (!ifs)
	{
		std::cerr << "Error: " << strerror(errno) << std::endl;
		return (1);
	}
	std::ofstream ofs((filename + ".replace").c_str());
	if (!ofs)
	{
		std::cerr << "Error: " << strerror(errno) << std::endl;
		return (1);
	}
	std::string line;
	while (std::getline(ifs, line))
		ofs << replaceAll(line, s1, s2) << '\n';
	return (0);
}
