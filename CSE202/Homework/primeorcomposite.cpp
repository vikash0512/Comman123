#include<iostream>
using namespace std;

int main(){
    int n, count=0;
    cout<<"enter a positive number"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
    if(count==1){
        cout<<"Non prime"<<endl;
    }
    else if(count==2){
        cout<<"Prime number"<<endl;
    }
    else{
        cout<<"Non prime"<<endl;
    }


    return 0;
}