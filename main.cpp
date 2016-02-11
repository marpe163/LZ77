//LZ77
#include <iostream>
#include <vector>
#include <string>
#include <fstream>

#include <windows.h>
#include "window.h"

using namespace std;

void open_file(ifstream& stream)
{
    char str[256];
    std::cout << "Enter the name of an existing text file: ";
    std::cin.get (str,256);    // get c-string
    stream.open(str,std::ifstream::in);     // open file
}

int main()
{
    /*
    window mywindow(6,3);
    cout << mywindow.find(2);
    mywindow.print();
    cout << "shifted out: " << mywindow.shift_left(3);
    mywindow.print();

    */

     std::ifstream file;
     open_file(file);

     char c;
     while (file.get(c))          // loop getting single characters
       std::cout << std::hex <<file;
     file.close();                // close file
     return 0;
}
