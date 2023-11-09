#include<iostream>
using namespace std;
// Function Prototype
// type function-name(arguments);
int sum(int a, int b);

int main(){
    
    int num1, num2;
    // Here int a and int b are actual parameters
    cout<<"Enter first number"<<endl;
    cin>>num1;
    cout<<"Enter second number"<<endl;
    cin>>num2;
    cout<<"The sum is "<<sum(num1,num2)<<endl;

    return 0;
}
int sum(int a, int b){
    // Here int a and int b are formal parameters
    int c = a+b;
    return c;
}