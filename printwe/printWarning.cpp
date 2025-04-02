#include "printwe.hpp"

void printWarning( const char* arg )
{
	std::cout << "\e[1;33mWARNING:";
	std::cout << arg << "\e[0m";
}
