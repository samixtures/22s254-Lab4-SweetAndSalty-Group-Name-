// basic file operations
#include <iostream>
#include <fstream>
#include "myFunction.h"
using namespace std;



void myFunction() {
  ifstream myfile;
  myfile.open ("readme.md");
  string mystring;
  while (getline(myfile, mystring)) {
  cout << mystring << "\n"; // pipe stream's content to standard   output
  }
  myfile.close();
}