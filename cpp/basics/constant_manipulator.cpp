#include<iostream>
#include<iomanip>
using namespace std;
  
int main(){
// ***********************constant************
    int a = 3;
    cout<<""<<a<<endl;
    // but as we delcred it a cont we can not change it again
    const int tb = 44;
    cout<<""<<tb<<endl;
    int b = 3;

    // ************manipulator************** formating we use that most common are endl and setw in iomainp**


    int ta = 3;
    int te = 44;
    long int c = 348729;

    cout<<"    "<<ta<<endl;
    cout<<"    "<<te<<endl;
    cout<<"    "<<c<<endl;
        
    cout<<"    "<<ta<<setw(4)<<endl;
    cout<<"    "<<te<<setw(4)<<endl;
    cout<<"    "<<c<<setw(4)<<endl;

    return 0;
}