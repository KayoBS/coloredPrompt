#include <string>
#include "printwe.hpp"

void printError( string arg )
{
	std::cout << "\n\e[1;31mERROR:";
	std::cout << arg << "\e[0m";
}
