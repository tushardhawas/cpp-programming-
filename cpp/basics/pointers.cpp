#include<iostream>
using namespace std;

int main(){

    // pointer are the variable who stores address of other variable
    int a = 3;
    int* b = &a;




    int** c= &b;
    cout<<"address of a is "<<&a<<endl;
    cout<<"address of b is "<<&b<<endl;
    cout<<"adress of c is "<<***(&c)<<endl;
    cout<<"value at b is "<<b<<endl;
    cout<<"value at a is "<<*b<<endl;
    cout<<"value at a is "<<**c<<endl;





    return 0;
}