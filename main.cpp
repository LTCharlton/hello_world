#include <iostream>
#include <string>

using namespace std;


int num;
struct shirt{
        string color;
        int count;

};
int main()
{

   
    //Its been awhile since I last played around with pointers in C++ so I'm just playing around with it
    shirt *graphic_t = new shirt;
    graphic_t->color = "blue";
    graphic_t->count = 5;

    char *test = new char;
    cin >> test;
    cout << graphic_t->color << endl;
    cin >> num;
return 0;
}
