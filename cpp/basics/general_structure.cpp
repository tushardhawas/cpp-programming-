#include <iostream>

using namespace std;

int global = 55;

void tom()
{
    int a;
    cout << global;
}

int main()
{
    int a = 1;
    float b = 2.67667;
    char c = 'k';

    double d = 9999999.9999999999999999;
    bool truf = true;
    global = 45;

    global = 9;
    tom();
    cout << "\nthe value in global is is " << global;

    cout << "\nthe value in integer is " << a;
    cout << "\nthe value in float is" <<b;
    cout << "\nthe value in char is" <<c;
    cout << "\nthe value in double is" <<d;
    cout << "\nthe value in boolean is" << truf<<endl;

    return 0;
}
