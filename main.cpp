#include <iostream>
#include "header.h"
using namespace std;

int main () {
    // Say HelloWorld five times
    Something box;
    box.setThing(5);//test
    cout << box.getThing() << " was set in box";
    system("pause");
    return 0;
}
