#include "printwe.hpp"

void printError( const char* arg )
{
	std::cout << "\n\e[1;31mERROR:";
	std::cout << arg << "\e[0m";
}
