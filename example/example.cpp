#include<iostream>
#include"../coloredPrompt.hpp"

int main( int argc, char *argv[] )
{
  coloredPrompt cp;

  cp.printc( "\nHello world", "black" );
  cp.printc( "\nHello world", "red" );
  cp.printc( "\nHello world", "green" );
  cp.printc( "\nHello world", "yellow" );
  cp.printc( "\nHello world", "blue" );
  cp.printc( "\nHello world", "magenta" );
  cp.printc( "\nHello world", "cyan" );
  cp.printc( "\nHello world\n", "white" );

  return 0;
}
