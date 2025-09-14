#include"../../coloredPrompt.hpp"

#include<cctype>
#include<string>

void coloredPrompt::toLower( std::string* arg )
{
  for( char &c : *arg )
  {
    c = std::tolower(c);
  }
}
