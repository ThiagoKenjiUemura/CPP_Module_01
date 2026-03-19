#include "Harl.hpp"

int main()
{
	Harl harl;

	std::cout << "--- Testing Harl's complaints ---" << std::endl;

	std::cout << "[DEBUG]" << std::endl;
	harl.complain("DEBUG");
	std::cout << std::endl;

	std::cout << "[INFO]" << std::endl;
	harl.complain("INFO");
	std::cout << std::endl;

	std::cout << "[WARNING]" << std::endl;
	harl.complain("WARNING");
	std::cout << std::endl;

	std::cout << "[ERROR]" << std::endl;
	harl.complain("ERROR");
	std::cout << std::endl;

	std::cout << "[INVALID LEVEL]" << std::endl;
	harl.complain("I_WANT_A_DISCOUNT");
	std::cout << std::endl;

	return 0;
}