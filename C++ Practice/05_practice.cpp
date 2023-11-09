// There are two types of header files: 
// 1. System header files-- It comes with the compiler.
#include<iostream>
// 2. User defined header files-- It is written by the programmer.
// #include "this.h"--> This is the syntax for user defined header files.
using namespace std;

int main(){
    int a=4, b=5;
    cout<<"Operators in C++: "<<endl;
    // Airthmatic Operators.
    cout<<"The value of a + b is "<<a+b<<endl;
    cout<<"The value of a - b is "<<a-b<<endl;
    cout<<"The value of a * b is "<<a*b<<endl;
    cout<<"The value of a / b is "<<a/b<<endl;
    cout<<"The value of a++ is "<<a++<<endl;
    cout<<"The value of a-- is "<<a--<<endl;
    cout<<"The value of ++a is "<<++a<<endl;
    cout<<"The value of --a is "<<--a<<endl;
    cout<<"The remainder value of a % b is "<<a%b<<endl;

    //
    return 0;
}