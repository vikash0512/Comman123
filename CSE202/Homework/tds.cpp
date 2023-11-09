
#include<iostream>
#include<cmath>
using namespace std;

int main(){
    double income;
    cout<<"This is TDS calculator for divident\n"; 
    cout<<" enter income\n";
    cin>>income;
    double tdsrate1 = 0.05;
    double tdsrate2 = 0.20;
    double tdsrate3 = 0.30;
    double tds1 = tdsrate1 * income;
    double tds21 = income - 500000;
    double tds31 = income - 1000000;
    double tds2 = tdsrate2 * tds21 + 10000;
    double tds3= tds31 * tdsrate3 + 110000;
    if(income < 300000){
        cout<<"TDS NILL\n";
        
    }
    else if(income > 300000 && income < 500000) {
        cout<<"TDS is: "<<tds1<<"\n";
    }
    
    else if (income > 500000 && income < 1000000){
        cout<<"TDS is: "<<tds2<<"\n";
    }
    
    else if ( income > 1000000){
        cout<<"TDS is: "<<tds3<<"\n";
    }
    return 0;
}
