#include "fizz_buzzer.h"
#include <sstream>

std::string fizz_buzzer::create_fizz_string(const uint32_t fizz_number)
{
	std::stringstream stream = { };

	if (fizz_number % 3 == 0)
		stream << "Fizz";
	if (fizz_number % 5 == 0)
		stream << "Buzz";

	return stream.str();
}