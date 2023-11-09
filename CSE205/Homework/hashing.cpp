#include <iostream>
using namespace std;

int main(){

    int index = -1;
    int size = 10;
    int k, key;
    int hashtable[size];

    cin>>k;

    for(int i=0;i<=size;i++){
        hashtable[i] = -1;
    }

    for(int i = 1;i<=k;i++){
        cin>>key;
        index = key%size;
        if(hashtable[index] = -1){
            hashtable[index] = key;
        } else{
            break;
        }
    }
    return 0;
}