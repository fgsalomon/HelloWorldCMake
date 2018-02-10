#include <iostream>
#include <greeter.h>
#include <repeater.h>

using namespace std;

int main()
{
    Greeter greeter("Segismundo");
    Repeater repeater(greeter.greet(), 5);
    cout << repeater.repeat() << endl;
    return 0;
}
