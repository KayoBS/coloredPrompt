#ifndef PRINT_WARNING_H_INCLUDED
#define PRINT_WARNING_H_INCLUDED

#include <iostream>

void printWarning( const char* arg )
{
	std::cout << "\e[1;33mWARNING:";
	std::cout << arg << "\e[0m";
}

#endif
