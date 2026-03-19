#include "Harl.hpp"

void Harl::debug(void) {
	std::cout << "I love having extra bacon..." << std::endl;
}

void Harl::info(void) {
	std::cout << "I cannot believe adding extra bacon costs more money..." << std::endl;
}

void Harl::warning(void) {
	std::cout << "I think I deserve to have some extra bacon for free..." << std::endl;
}

void Harl::error(void) {
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	int i = 0;

	while (i < 4 && levels[i] != level)
		i++;

	switch (i) {
		case 0:
			std::cout << "[ DEBUG ]" << std::endl;
			this->debug();
		case 1:
			std::cout << "[ INFO ]" << std::endl;
			this->info();
		case 2:
			std::cout << "[ WARNING ]" << std::endl;
			this->warning();
		case 3:
			std::cout << "[ ERROR ]" << std::endl;
			this->error();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}