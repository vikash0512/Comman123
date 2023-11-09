#include<iostream>
using namespace std;

int main(){
    int n, digit, rev=0;
    cout<<"enter the number ";
    cin>>n;
    do{
        digit=n%10;
        rev=(rev*10) + digit;
        n=n/10;
    }
    while(n!=0);

    cout<<"Reverse of the number is "<<rev<<endl;
    return 0;
}