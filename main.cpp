//LZ77
#include <iostream>
#include <vector>
#include <string>
#include "window.h"

using namespace std;

int main()
{
    window mywindow(6,3);
    cout << mywindow.find(2);
    mywindow.print();
    cout << "shifted out: " << mywindow.shift_left(3);
    mywindow.print();
    return 0;
}
