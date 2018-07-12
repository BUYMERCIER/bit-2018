//
// main.cpp
// author: corentin mercier
//

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Text{
  public:
    string content;
    Text(){
      // default constructor
      content = "";
    }

    Text(string filename){
      ifstream file;
      // opening the file
      file.open(filename, ios::in);
      // reading it
      file >> content;
      // closing it
      file.close();
    }

    string contents(){
      return content;
    }
};

int main(){
  Text test("text.txt");
  cout << test.contents();
  return 0;
}
