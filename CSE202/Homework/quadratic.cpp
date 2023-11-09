#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float a, b,c, x1,x2, discriminent, real, imaginary;
    cout<<"enter coefficients a, b ,c"<<endl;
    cin>>a>>b>>c;
    discriminent= b*b - 4*a*c;
    
    if(discriminent>0){
        x1=(-b + sqrt(discriminent)) / (2*a);
        x1=(-b - sqrt(discriminent)) / (2*a);
        cout<<"Roots are real and different."<<endl;
        cout<<"Root 1 = "<<x1<<endl;
        cout<<"Root 2 = "<<x2<<endl;

    }
    else if(discriminent==0){
        cout<<"Roots are real and same."<<endl;
        x1 = -b/(2*a);
        cout<<"Root 1 = Root 2 = "<<x1<<endl;
    }
    else{
        real=-b/(2*a);
        imaginary=sqrt(-discriminent)/(2*a);
        cout<<"Roots are compelx and different."<<endl;
        cout<<"Root 1 = "<<real<<"+"<<imaginary<<"i"<<endl;
        cout<<"Root 2 = "<<real<<"-"<<imaginary<<"i"<<endl;
    }

    return 0;
}