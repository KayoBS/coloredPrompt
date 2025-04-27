#include <string>
#include "printwe.hpp"

void printWarning( string arg )
{
	std::cout << "\e[1;33mWARNING:";
	std::cout << arg << "\e[0m";
}
