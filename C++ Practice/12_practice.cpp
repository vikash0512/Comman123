#include<iostream>
using namespace std;

typedef struct employee
{
    int eId;
    char favChar;
    float salary;
} emp;

union money
{
    int rice;
    char car;
    float pounds;
};


int main(){

    // emp aditya;
    // struct employee subham;
    // struct employee abhinash;
    // aditya.eId = 1;
    // subham.eId = 2;
    // abhinash.eId = 3;
    // aditya.favChar = 'A';
    // subham.favChar = 'B';
    // abhinash.favChar = 'C';
    // aditya.salary = 200000;
    // subham.salary = 20000;
    // abhinash.salary = 2000;
    // cout<<"The values of aditya are "<<aditya.eId<<endl;
    // cout<<"The values of aditya are "<<aditya.favChar<<endl;
    // cout<<"The values of aditya are "<<aditya.salary<<endl;
    // cout<<"The values of subham are "<<subham.eId<<endl;
    // cout<<"The values of subham are "<<subham.favChar<<endl;
    // cout<<"The values of subham are "<<subham.salary<<endl;
    // cout<<"The values of abhinash are "<<abhinash.eId<<endl;
    // cout<<"The values of abhinash are "<<abhinash.favChar<<endl;
    // cout<<"The values of abhinash are "<<abhinash.salary<<endl;

    // union money m1;
    // m1.rice = 34;
    // m1.car = 'c';
    // cout<<m1.car<<endl;

    enum meal{ breakfast, lunch, dinner};
    meal m1 = dinner;
    cout<<(m1)<<endl;

    return 0;
}