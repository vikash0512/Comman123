#include<iostream>
using namespace std;

int main(){
    float C, F;
    cout<<"Enter the temperature in Celcius"<<endl;
    cin>>C;
    F = ((C*9.0)/5.0)+32;
    // C = (F - 32.0) * 5.0 / 9.0; // For F to C
    cout<<"The temperature in Fahrenheit is: "<<F<<endl;

    return 0;
}