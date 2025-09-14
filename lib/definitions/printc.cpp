#include"../../coloredPrompt.hpp"

#include<iostream>
#include<string>
#include"../scapes.hpp"

void coloredPrompt::printc( std::string message, std::string wordColor )
{
	unsigned short color;

  toLower( &wordColor );

  if( wordColor == "black" )
    color = 30;

  else if( wordColor == "red" )
    color = 31;

  else if( wordColor == "green" )
    color = 32;

  else if( wordColor == "yellow" )
    color = 33;

  else if( wordColor == "blue" )
    color = 34;

  else if( wordColor == "magenta" )
    color = 35;

  else if( wordColor == "cyan" )
    color = 36;

  else if( wordColor == "white" )
    color = 37;

  else if( wordColor == "default" )
    color = 39;

  else
    color = 39;
		
	std::string format = SCAPE + std::to_string(color) + "m";

  std::string finalString = format + message;

  std::cout << finalString;
}
/*
void printc( std::string message, std::string wordColor, std::string backgroundColor )
{
	unsigned short wdcolor;
	unsigned short bgcolor;

  toLower( &wordColor );
  toLower( &backgroundColor );

  switch( wordColor )
  {
		case "black":
			wdcolor = 30;
			break;
		case "red":
			wdcolor = 31;
			break;
		case "green":
			wdcolor = 32;
			break;
		case "yellow":
			wdcolor = 33;
			break;
		case "blue":
			wdcolor = 34;
			break;
		case "magenta":
			wdcolor = 35;
			break;
		case "cyan":
			wdcolor = 36;
			break;
		case "white":
			wdcolor = 37;
			break;
		case "default":
			wdcolor = 39;
			break;
		default:
			break;
  }

	switch( backgroundColor )
  {
		case "black":
			bgcolor = 40;
			break;
		case "red":
			bgcolor = 41;
			break;
		case "green":
			bgcolor = 42;
			break;
		case "yellow":
			bgcolor = 43;
			break;
		case "blue":
			bgcolor = 44;
			break;
		case "magenta":
			bgcolor = 45;
			break;
		case "cyan":
			bgcolor = 46;
			break;
		case "white":
			bgcolor = 47;
			break;
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
  
  toLower( &wordColor );
  toLower( &backgroundColor );
  toLower( &highIntensity );

  switch( wordColor )
  {
		case "black":
			wdcolor = 30;
			break;
		case "red":
			wdcolor = 31;
			break;
		case "green":
			wdcolor = 32;
			break;
		case "yellow":
			wdcolor = 33;
			break;
		case "blue":
			wdcolor = 34;
			break;
		case "magenta":
			wdcolor = 35;
			break;
		case "cyan":
			wdcolor = 36;
			break;
		case "white":
			wdcolor = 37;
			break;
		case "default":
			wdcolor = 39;
			break;
		default:
			break;
  }

	switch( backgroundColor )
  {
		case "black":
			bgcolor = 40;
			break;
		case "red":
			bgcolor = 41;
			break;
		case "green":
			bgcolor = 42;
			break;
		case "yellow":
			bgcolor = 43;
			break;
		case "blue":
			bgcolor = 44;
			break;
		case "magenta":
			bgcolor = 45;
			break;
		case "cyan":
			bgcolor = 46;
			break;
		case "white":
			bgcolor = 47;
			break;
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

  switch( wordColor )
  {
		case "black":
			wdcolor = 30;
			break;
		case "red":
			wdcolor = 31;
			break;
		case "green":
			wdcolor = 32;
			break;
		case "yellow":
			wdcolor = 33;
			break;
		case "blue":
			wdcolor = 34;
			break;
		case "magenta":
			wdcolor = 35;
			break;
		case "cyan":
			wdcolor = 36;
			break;
		case "white":
			wdcolor = 37;
			break;
		case "default":
			wdcolor = 39;
			break;
		default:
			break;
  }

	switch( backgroundColor )
  {
  	case "black":
			bgcolor = 40;
			break;
		case "red":
			bgcolor = 41;
			break;
		case "green":
			bgcolor = 42;
			break;
		case "yellow":
			bgcolor = 43;
			break;
		case "blue":
			bgcolor = 44;
			break;
		case "magenta":
			bgcolor = 45;
			break;
		case "cyan":
			bgcolor = 46;
			break;
		case "white":
			bgcolor = 47;
			break;
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
*/
