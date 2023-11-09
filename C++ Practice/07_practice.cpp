#include<iostream>
#include<iomanip>
using namespace std;
int main(){

    // int a =34;
    // cout<<"the value of a was "<<a<<endl;
    // a = 45;
    // cout<<"the value of a is "<<a<<endl;

    // Constants in c++

    // const int a = 5;
    // cout<<"the value of a was "<<a<<endl;
    // a = 45; // showing error...
    // cout<<"the value of a is "<<a<<endl;

    // **********Manipulators in C++**********

    // int a=3, b=54, c=1233;
    // cout<<"the value of a is "<<a<<endl;
    // cout<<"the value of b is "<<b<<endl;
    // cout<<"the value of c is "<<c<<endl;

    // cout<<"the value of a is with setw "<<setw(4)<<a<<endl;
    // cout<<"the value of b is with setw "<<setw(4)<<b<<endl;
    // cout<<"the value of c is with setw "<<setw(4)<<c<<endl;

    // **************Operator Precedence**************

    int a=3, b=4; //c=a*5+b;
    int c = ((((a*5)+b)-45)+45);
    cout<<c;

    return 0;
}