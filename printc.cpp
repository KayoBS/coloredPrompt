#include <iostream>
#include <string>
#include "printc.hpp"

void printc( std::string message, std::string wordcolor )
{
	unsigned short color;

    switch( wordcolor )
    {
        case "Black":
			color = 30;

		case "black":
			color = 30;
			break;

		case "Red":
			color = 31;

		case "red":
			color = 31;
			break;

		case "Green":
			color = 32;

		case "green":
			color = 32;
			break;

		case "Yellow":
			color = 33;

		case "yellow":
			color = 33;
			break;

		case "Blue":
			color = 34;

		case "blue":
			color = 34;
			break;

		case "Magenta":
			color = 35;

		case "magenta":
			color = 35;
			break;

		case "Cyan":
			color = 36;

		case "cyan":
			color = 36;
			break;

		case "White":
			color = 37;

		case "white":
			color = 37;
			break;

		case "Default":
			color = 39;

		case "default":
			color = 39;
			break;

		default:
			break;
    }
		
	std::string format = "\xb1[0;" + std::to_string(color) + "m";
	std::cout << format << message;
}
void printc( std::string message, std::string wordColor, std::string backgroundColor )
{
	unsigned short wdcolor;
	unsigned short bgcolor;

    switch( wordcolor )
    {
        case "Black":
			wdcolor = 30;

		case "black":
			wdcolor = 30;
			break;

		case "Red":
			wdcolor = 31;

		case "red":
			wdcolor = 31;
			break;

		case "Green":
			wdcolor = 32;

		case "green":
			wdcolor = 32;
			break;

		case "Yellow":
			wdcolor = 33;

		case "yellow":
			wdcolor = 33;
			break;

		case "Blue":
			wdcolor = 34;

		case "blue":
			wdcolor = 34;
			break;

		case "Magenta":
			wdcolor = 35;

		case "magenta":
			wdcolor = 35;
			break;

		case "Cyan":
			wdcolor = 36;

		case "cyan":
			wdcolor = 36;
			break;

		case "White":
			wdcolor = 37;

		case "white":
			wdcolor = 37;
			break;

		case "Default":
			wdcolor = 39;

		case "default":
			wdcolor = 39;
			break;

		default:
			break;
    }

	switch( backgroundColor )
    {
        case "Black":
			bgcolor = 40;

		case "black":
			bgcolor = 40;
			break;

		case "Red":
			bgcolor = 41;

		case "red":
			bgcolor = 41;
			break;

		case "Green":
			bgcolor = 42;

		case "green":
			bgcolor = 42;
			break;

		case "Yellow":
			bgcolor = 43;

		case "yellow":
			bgcolor = 43;
			break;

		case "Blue":
			bgcolor = 44;

		case "blue":
			bgcolor = 44;
			break;

		case "Magenta":
			bgcolor = 45;

		case "magenta":
			bgcolor = 45;
			break;

		case "Cyan":
			bgcolor = 46;

		case "cyan":
			bgcolor = 46;
			break;

		case "White":
			bgcolor = 47;

		case "white":
			bgcolor = 47;
			break;

		case "Default":
			bgcolor = 49;

		case "default":
			bgcolor = 49;
			break;

		default:
			break;
    }
		
	std::string format = "\xb1[0;" + std::to_string(wdcolor) + ";" + std::to_string(bgcolor) + "m";
	std::cout << format << message;
}
void printc( std::string message, std::string wordColor, std::string backgroundColor, bool highIntensity )
{
	unsigned short wdcolor;
	unsigned short bgcolor;

    switch( wordcolor )
    {
        case "Black":
			wdcolor = 30;

		case "black":
			wdcolor = 30;
			break;

		case "Red":
			wdcolor = 31;

		case "red":
			wdcolor = 31;
			break;

		case "Green":
			wdcolor = 32;

		case "green":
			wdcolor = 32;
			break;

		case "Yellow":
			wdcolor = 33;

		case "yellow":
			wdcolor = 33;
			break;

		case "Blue":
			wdcolor = 34;

		case "blue":
			wdcolor = 34;
			break;

		case "Magenta":
			wdcolor = 35;

		case "magenta":
			wdcolor = 35;
			break;

		case "Cyan":
			wdcolor = 36;

		case "cyan":
			wdcolor = 36;
			break;

		case "White":
			wdcolor = 37;

		case "white":
			wdcolor = 37;
			break;

		case "Default":
			wdcolor = 39;

		case "default":
			wdcolor = 39;
			break;

		default:
			break;
    }

	switch( backgroundColor )
    {
        case "Black":
			bgcolor = 40;

		case "black":
			bgcolor = 40;
			break;

		case "Red":
			bgcolor = 41;

		case "red":
			bgcolor = 41;
			break;

		case "Green":
			bgcolor = 42;

		case "green":
			bgcolor = 42;
			break;

		case "Yellow":
			bgcolor = 43;

		case "yellow":
			bgcolor = 43;
			break;

		case "Blue":
			bgcolor = 44;

		case "blue":
			bgcolor = 44;
			break;

		case "Magenta":
			bgcolor = 45;

		case "magenta":
			bgcolor = 45;
			break;

		case "Cyan":
			bgcolor = 46;

		case "cyan":
			bgcolor = 46;
			break;

		case "White":
			bgcolor = 47;

		case "white":
			bgcolor = 47;
			break;

		case "Default":
			bgcolor = 49;

		case "default":
			bgcolor = 49;
			break;

		default:
			break;
    }

	if(highIntensity)
	{
		wdcolor += 40;
	}
		
	std::string format = "\xb1[0;" + std::to_string(wdcolor) + ";" + std::to_string(bgcolor) + "m";
	std::cout << format << message;
}
void printc( std::string message, std::string wordColor, std::string backgroundColor, bool highIntensity, unsigned short style )
{
	unsigned short wdcolor;
	unsigned short bgcolor;

    switch( wordcolor )
    {
        case "Black":
			wdcolor = 30;

		case "black":
			wdcolor = 30;
			break;

		case "Red":
			wdcolor = 31;

		case "red":
			wdcolor = 31;
			break;

		case "Green":
			wdcolor = 32;

		case "green":
			wdcolor = 32;
			break;

		case "Yellow":
			wdcolor = 33;

		case "yellow":
			wdcolor = 33;
			break;

		case "Blue":
			wdcolor = 34;

		case "blue":
			wdcolor = 34;
			break;

		case "Magenta":
			wdcolor = 35;

		case "magenta":
			wdcolor = 35;
			break;

		case "Cyan":
			wdcolor = 36;

		case "cyan":
			wdcolor = 36;
			break;

		case "White":
			wdcolor = 37;

		case "white":
			wdcolor = 37;
			break;

		case "Default":
			wdcolor = 39;

		case "default":
			wdcolor = 39;
			break;

		default:
			break;
    }

	switch( backgroundColor )
    {
        case "Black":
			bgcolor = 40;

		case "black":
			bgcolor = 40;
			break;

		case "Red":
			bgcolor = 41;

		case "red":
			bgcolor = 41;
			break;

		case "Green":
			bgcolor = 42;

		case "green":
			bgcolor = 42;
			break;

		case "Yellow":
			bgcolor = 43;

		case "yellow":
			bgcolor = 43;
			break;

		case "Blue":
			bgcolor = 44;

		case "blue":
			bgcolor = 44;
			break;

		case "Magenta":
			bgcolor = 45;

		case "magenta":
			bgcolor = 45;
			break;

		case "Cyan":
			bgcolor = 46;

		case "cyan":
			bgcolor = 46;
			break;

		case "White":
			bgcolor = 47;

		case "white":
			bgcolor = 47;
			break;

		case "Default":
			bgcolor = 49;

		case "default":
			bgcolor = 49;
			break;

		default:
			break;
    }

	if(highIntensity)
	{
		wdcolor += 40;
		bgcolor += 40;
	}
		
	std::string format = "\xb1[" + std::to_string(style) + ";" + std::to_string(wdcolor) + ";" + std::to_string(bgcolor) + "m";
	std::cout << format << message;
}