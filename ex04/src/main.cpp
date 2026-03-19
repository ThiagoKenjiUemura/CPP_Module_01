#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "Error: Use ./replace <filename> <s1> <s2>." << std::endl;
		return (1);
	}

	std::string filename = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];

	if (s1.empty())
	{
		std::cerr << "Error: s1 cannot be empty." << std::endl;
		return (1);
	}

	std::ifstream ifs(filename.c_str());
	if (!ifs.is_open())
	{
		std::cerr << "Error: Could not open file " << filename << std::endl;
		return (1);
	}

	std::stringstream ss;
	ss << ifs.rdbuf();
	std::string content = ss.str();
	ifs.close();

	std::string result;
	size_t pos = 0;
	size_t foundPos;

	while ((foundPos = content.find(s1, pos)) != std::string::npos)
	{
		result.append(content, pos, foundPos - pos);
		result.append(s2);
		pos = foundPos + s1.length();
	}
	result.append(content, pos);
	std::ofstream ofs((filename + ".replace").c_str());
	if (!ofs.is_open())
	{
		std::cerr << "Error: Could not create .replace file." << std::endl;
		return (1);
	}
	ofs << result;
	ofs.close();

	std::cout << "Success: " << filename << ".replace created." << std::endl;
	return (0);
}
