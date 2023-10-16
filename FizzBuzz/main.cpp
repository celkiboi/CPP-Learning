#include <iostream>
#include "fizz_buzzer.h"

int main(void)
{
	uint32_t fizz_number;

	std::cout << "Enter a number: " << std::endl;
	std::cin >> fizz_number;

	fizz_buzzer fizz_buzz = { };
	std::cout << fizz_buzz.create_fizz_string(fizz_number);

	return 0;
}
