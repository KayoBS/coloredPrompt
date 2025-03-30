#ifndef PRINT_ERROR_H_INCLUDED
#define PRINT_ERROR_H_INCLUDED

#include <iostream>

void printError( const char* arg )
{
	std::cout << "\n\e[1;31mERROR:";
	std::cout << arg << "\e[0m";
}

#endif
