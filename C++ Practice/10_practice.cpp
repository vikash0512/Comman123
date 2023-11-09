#include<iostream>
using namespace std;

int main(){
    // What is a Pointer? ---------> Data type which holds the address of other data types

    int a=3;
    int* b=&a;

    // &-----> (Address of) Operator

    cout<<"The address of a is "<<&a<<endl;
    cout<<"The address of a is "<<b<<endl;

    // * -----> (Value at) Deference operator

    cout<<"The value at address b is "<<*b<<endl;

    // Pointer to pointer

    int**c=&b;
    cout<<"the address of b is "<<&b<<endl;
    cout<<"the address of b is "<<c<<endl;
    cout<<"the value at address c is "<<*c<<endl;
    cout<<"the value at address of value_at(value_at(c)) is "<<**c<<endl;
    
    return 0;
}