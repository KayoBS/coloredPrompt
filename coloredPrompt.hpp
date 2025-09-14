#ifndef COLORED_PROMPT_HPP_INCLUDED
#define COLORED_PROMPT_HPP_INCLUDED

#include <string>

class coloredPrompt
{
  private:
    void toLower( std::string* arg );

  public:
    void printc( std::string message, std::string wordcolor );
    //void printc( std::string message, std::string wordColor, std::string backgroundColor );
    //void printc( std::string message, std::string wordColor, std::string backgroundColor, bool highIntensity );
    //void printc( std::string message, std::string wordColor, std::string backgroundColor, bool highIntensity, unsigned short style );

};

#endif
