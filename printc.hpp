#ifndef PRINT_COLORED_HPP_INCLUDED
#define PRINT_COLORED_HPP_INCLUDED

#include <string>

void printc( std::string message, std::string wordcolor );
void printc( std::string message, std::string wordColor, std::string backgroundColor );
void printc( std::string message, std::string wordColor, std::string backgroundColor, bool highIntensity );
void printc( std::string message, std::string wordColor, std::string backgroundColor, bool highIntensity, unsigned short style );

#endif
