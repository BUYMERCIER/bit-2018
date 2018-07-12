// 
// main.cpp
// author: corentin mercier <corentin@mercier.link>
//

#include <iostream>
#include <string>
using namespace std; 

class Simple
{
  public:
    string constructor = "Simple";
    Simple()
    {
      std::cout << constructor << "\n";
    }
};

int main()
{
  Simple simple;
  return 0;
}
