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
    // constructor
    Simple()
    {
      std::cout << constructor << "\n";
    }
    // destructor
    ~Simple()
    {
      std::cout << "Destructor\n";
    }
};

int main()
{
  Simple simple;
  return 0;
}
