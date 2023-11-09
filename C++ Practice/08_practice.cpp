#include<iostream>
using namespace std;

int main(){

    // cout<<"This is practice 9"<<endl;
    int age;
    cout<<"tell me your age"<<endl;
    cin>>age;
// ***************if-else ladder*************
    // if ((age<18) && (age>0)){
    //     cout<<"you can't come to party"<<endl;
    // }
    // else if(age==18){
    //     cout<<"you will get a kid pass."<<endl;
    // }
    // else if(age<1){
    //     cout<<"you are not yet born."<<endl;
    // }
    // else{
    //     cout<<"you are welcome to the party."<<endl;
    // }
// **************Switch Case*************
    switch (age)
    {
    case 18:
        cout<<"you are 18"<<endl;
        break;
    case 22:
        cout<<"you are 22"<<endl;
        break;
    
    case 2:
        cout<<"you are under 2"<<endl;
        break;
    
    default:
        cout<<"no special cases"<<endl;
        break;
    }
cout<<"done with switch case"<<endl;
    return 0;
}