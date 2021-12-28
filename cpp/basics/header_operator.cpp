#include <iostream>
#include "toru.h" // we can include user header fi
using namespace std;
int main()
{

    // we are going to see here operators
    // arithimatic operator
    int a = 3;
    int b = 66;
    cout << "a + b is           " << a + b << endl;
    cout << "a - b is          " << a - b << endl;
    cout << "a x b is           " << a * b << endl;
    cout << "a / b is           " << a / b << endl;
    cout << "a % b is           " << a % b << endl;
    // relational operator
    cout << "a > b is                     " << (a > b) << endl;
    cout << "a < b is                     " << (a < b) << endl;
    cout << "a >= b is                     " << (a >= b) << endl;
    cout << "a <= b is                    " << (a <= b) << endl;
    cout << "a != b is                    " << (a != b) << endl;
    cout << "a == b is                    " << (a == b) << endl;
    // logical operator
    cout<<"a A&&b is   "<<(a&&b)<<endl;
    cout<<"a A|| b is   "<<(a||b)<<endl;
    cout<<"!(a+b)  "<<!(a+b)<<endl;
    // assignment operator
    cout<<"a=b  is   "<<(a=b)<<endl;
    cout<<"a+=b  is   "<<(a+=b)<<endl;
    cout<<"a-=b  is   "<<(a-=b)<<endl;
    cout<<"a*=b  is   "<<(a*=b)<<endl;
    cout<<"a/=b  is   "<<(a/=b)<<endl;
    cout<<"a%=b  is   "<<(a%=b)<<endl;
    return 0;
}