#include<iostream>
using namespace std;

int main(){

// -------------Fibonacci Series----------------------

    int n, f1=0, f2=1, fn=0;
    cout<<"enter the number ";
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i==1){
            cout<<f1<<endl;
            continue;
        }
        if(i==2){
            cout<<f2<<endl;
            continue;
        }
        fn = f1 + f2;
        f1 = f2;
        f2 = fn;
      cout<<fn<<endl; 
    }


    // ----------------------N'th term of Fibonacci Series--------------------

    // int f1=0, f2=1, n, i, fn;
    // cout<<"enter the number ";
    // cin>>n;
    // if(n==1){
    //     cout<<f1<<endl;
    // }
    // if(n==2){
    //     cout<<f2<<endl;
    // }

    // for(i=3;i<=n;i++){
    //     fn=f1+f2;
    //     f1=f2;
    //     f2=fn;
    // }
    // cout<<fn;

    
    return 0;
}