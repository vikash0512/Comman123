// -------------------Recursion------------------------------
// when a function call itself again and again upto base case

#include<iostream>
using namespace std;
int factorial(int);
int main(){
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    cout<<"Factorial is: "<<factorial(n);
    return 0;
}
int factorial(int x){
    if(x<=1){
        return 1;
    } else {
        return x*factorial(x-1);
    }
}