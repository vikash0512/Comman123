#include<iostream>
using namespace std;

int main(){
    int marks[] = {24, 45,32,76};
    // marks[4]=25;
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;
    // cout<<marks[4]<<endl;

    // for (int i = 0; i < 4; i++)
    // {
    //    cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
    // }
    // int i=0;
    // while (i<4)
    // {
    //     cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
    //     i++;
    // }
    
    // do{
    //     cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
    //     i++;
    // }
    // while(i<4);

    int *p = marks;
    cout<<*(p++)<<endl;
    cout<<*(p)<<endl;
    cout<<*(++p)<<endl;
    cout<<*(++p)<<endl;


    // cout<<"The value of *p "<<*p<<endl;
    // cout<<"The value of *(p+1) "<<*(p+1)<<endl;
    // cout<<"The value of *(p+2) "<<*(p+2)<<endl;
    // cout<<"The value of *(p+3) "<<*(p+3)<<endl;

    return 0;
}