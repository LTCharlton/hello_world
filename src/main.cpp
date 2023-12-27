#include <iostream>
#include <string>

using namespace std;
#include "string_tools.h"

int num;
struct shirt{
        string color;
        int count;

};
int main()
{
    string_tools test;

    test.doStuff();
   
    //Its been awhile since I last played around with pointers in C++ so I'm just playing around with it
    shirt *graphic_t = new shirt;
    graphic_t->color = "blue";
    graphic_t->count = 5;

    char *ctest = new char;
    cin >> ctest;
    cout << graphic_t->color << endl;
    cin >> num;
return 0;
}
