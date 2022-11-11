/* Online C++ Compiler and Editor */
#include <iostream>
#include<fstream>
using namespace std;
int main()
{
   ofstream obj("my.txt",ios::app);
   ofstream obj("my1.txt",ios::ate);
   obj.seekg(0,ios::beg)
    obj.seekp(0,ios::beg)
   obj<<"modified data";
   obj<<"modified data";
   
    
    
}


  
