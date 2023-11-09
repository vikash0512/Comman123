#include<iostream>
using namespace std;

int main(){
    float m, cm;
    
    cout<<"Enter the length in meter"<<endl;
    cin>>m;
    cm=100*m;
    cout<<"The length in centimeter is: "<<cm<<endl;

    cout<<"Enter the length in centimeter"<<endl;
    cin>>cm;
    m=cm/100;
    cout<<"The length in meter is: "<<m<<endl;
    



    return 0;
}