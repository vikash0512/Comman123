#include<iostream>
using namespace std;

int main(){

// -----------Switch Case------------------

    // int weeknumber;
    // cout<<"Enter Week Number"<<endl;
    // cin>>weeknumber;
    // switch (weeknumber)
    // {
    // case 1:
    //     cout<<"Monday"<<endl;
    //     break;
    // case 2:
    //     cout<<"Tuesday"<<endl;
    //     break;
    // case 3:
    //     cout<<"Wednesday"<<endl;
    //     break;
    // case 4:
    //     cout<<"Thursday"<<endl;
    //     break;
    // case 5:
    //     cout<<"Friday"<<endl;
    //     break;
    // case 6:
    //     cout<<"Saturday"<<endl;
    //     break;
    // case 7:
    //     cout<<"Sunday"<<endl;
    //     break;
    
    // default:
    //     cout<<"Invalid Week Number!"<<endl;
    //     break;
    // }

//     int i=1, sum=0;
//     while(i<=100){
//        if(i%2!==0){
//         sum=sum+1;
        
//        }
//         i=i+1;
//     }
// cout<<sum<<endl;


    // int i=1, count=0,n;
    // cout<<"enter n"<<endl;
    // cin>>n;
    // while(i<=n){
    //     if(i%7==0){
    //         count++;
    //     }
    //     i=i+1;
    // }
    // cout<<"multiples of 7: "<<count<<endl;


    // long long int fact=1;
    // int n,i=1;
    // cout<<"enter n"<<endl;
    // cin>>n;
    // if(n<0){
    //     cout<<"n is negative, factorial not possible"<<endl;
    // }
    // else{
    //     while(i<=n){
    //         fact=fact*i;
    //         i=i+1;
    //     }
    //     cout<<"Factorial of "<<n<<" is "<<fact<<endl;
    // }

    // int n,count=0;
    // cout<<"enter n"<<endl;
    // cin>>n;
    // while(n!=0){
    //     count++;
    //     n=n/10;
    // }
    // cout<<"Total digits in n: "<<count;

    int n,sum=0, rem=0;
    cout<<"enter n"<<endl;
    cin>>n;
    while(n!=0){
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    cout<<"Sum of the Total digits in n: "<<sum;
    



    return 0;
}