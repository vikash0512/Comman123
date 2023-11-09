#include<iostream>
using namespace std;

int main(){
    int q1, q2, q3, q4, q5;
    float p1, p2, p3, p4, p5, total, amount, discount, disc;

    cout<<"Enter the prices of all products"<<endl;
    cin>>p1>>p2>>p3>>p4>>p5;
    cout<<"Enter the quantities of all products"<<endl;
    cin>>q1>>q2>>q3>>q4>>q5;
    total = p1*q1 + p2*q2 + p3*q3 + p4*q4 + p5*q5;
    cout<<"Enter the discount percent"<<endl;
    cin>>disc;

        discount = disc*total/100;

    amount = total - discount;

    cout<<"Total amount of the bill is "<<total<<endl;
    cout<<"Final amount payable after discount is "<<amount<<endl;




    return 0;
}