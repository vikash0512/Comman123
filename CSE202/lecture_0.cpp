// #include<iostream>
// using namespace std;

// int main(){
//     cout<<"Hello World!"<<endl; /*Cout is insertion operator*/

    // int a, b;
    // a=3;
    // b=5;
    // // cout<<a<<" "<<b<<endl;
    // cout<<"a"<<":"<<a<<","<<"b"<<":"<<b;

//    int a=4, b=5, temp;
//    temp=a;
//    a=b;
//    b=temp;
    // a=a+b;
    // b=a-b;
    // a=a-b;

//     a=a*b;
//     b=a/b;
//     a=a/b;

//    cout<<"\nValue of a and b after swapping are: "<<a<<" "<<b;


    // int a,b;
    // cout<<"\nEnter Values of a nad b..."<<endl;
    // cin>>a>>b;
    // a=a+b;
    // b=a-b;
    // a=a-b;
    // cout<<"\nValue of a and b after swapping are: "<<a<<" "<<b;

    // Airthmetic Operations.

    // int a,b;
    // cout<<"Enter a and b "<<endl;
    // cin>>a>>b;
    // cout<<"a+b= "<<a+b<<endl;
    // cout<<"a-b= "<<a-b<<endl;
    // cout<<"a*b= "<<a*b<<endl;
    // cout<<"a/b= "<<a/b<<endl;
    // cout<<"a%b= "<<a%b<<endl;

//     int squr,rect,len,wid,side;
//     float rad,circ;
//     cout<<"Enter the radius"<<endl;
//     cin>>rad;
//     cout<<"Enter the side of square"<<endl;
//     cin>>side;
//     cout<<"Enter the length of rectangle"<<endl;
//     cin>>len;
//     cout<<"Enter the width of rectangle"<<endl;
//     cin>>wid;
//     squr=side*side;
//     rect=len*wid;
//     circ=3.14*rad*rad;
//     cout<<"Area of circle: "<<circ<<endl;
//     cout<<"Area of square: "<<squr<<endl;
//     cout<<"Area of rectangle: "<<rect<<endl;

//     cout<<"Sum of all areas: "<<circ+squr+rect<<endl;

    
//     return 0;
// }


// #include <iostream> 
// #include <cstdio> 
// #include <cstring> 
// #include <cstdlib> 
// using namespace std; 
// struct n  
// {// node declaration { 
//    int p; 
//    int info; 
//    struct n *l; 
// }; 
// class Priority_Queue { 
//    private: 
//       //Declare a front pointer f and initialize it to NULL. 
//       n *f; 
//    public: 
//       Priority_Queue(){ //constructor { 
//          f = NULL; 
//       } 
//       void insert(int i, int p) { 
//          n *t, *q; 
//          t = new n; 
//          t->info = i; 
//          t->p = p; 
//          if (f == NULL || p < f->p) { 
//             t->l= f; 
//             f = t; 
//          } else { 
//             q = f; 
//             while (q->l != NULL && q->l->p <= p) 
//                q = q->l; 
//                t->l = q->l; 
//                q->l = t; 
//          } 
//       } 
//       void del() { 
//          n *t; 
//          if(f == NULL) //if queue is null 
//             cout<<"Queue Underflow\n"; 
//          else { 
//             t = f; 
//             cout<<"Deleted item is: "<<t->info<<endl; 
//             f = f->l; 
//             free(t); 
//          } 
//       } 
//       void show() {//print queue { 
//          n *ptr; 
//          ptr = f; 
//          if (f == NULL) 
//             cout<<"Queue is empty\n"; 
//          else { 
//             cout<<"Queue is :\n"; 
//             cout<<"Priority Item\n"; 
//             while(ptr != NULL) { 
//                cout<<ptr->p<<" "<<ptr->info<<endl; 
//                ptr = ptr->l; 
//             } 
//          } 
//       } 
// }; 
// int main() { 
//    int c, i, p; 
//    Priority_Queue pq; 
//    do{ //perform switch opeartion { 
//       cout<<"1.Insert\n"; 
//       cout<<"2.Delete\n"; 
//       cout<<"3.Display\n"; 
//       cout<<"4.Exit\n"; 
//       cout<<"Enter your choice : "; 
//       cin>>c; 
//       switch(c) { 
//          case 1: 
//             cout<<"Input the item value to be added in the queue : "; 
//             cin>>i; 
//             cout<<"Enter its priority : "; 
//             cin>>p; 
//             pq.insert(i, p); 
//             break; 
//          case 2: 
//             pq.del(); 
//             break; 
//          case 3: 
//             pq.show(); 
//             break; 
//          case 4: 
//             break; 
//          default: 
//          cout<<"Wrong choice\n"; 
//       } 
//    } 
//    while(c != 4); 
//    return 0; 
// }

#include<iostream>
using namespace std;

class Base{
    public:
    Base(){
        cout<<"Base Constructor called"<<endl;
    }
    ~Base(){
        cout<<"Base destructor called"<<endl;
    }
};

class Derived : public Base{
    public:
    Derived(){
        cout<<"Derived COnstructor called"<<endl;
    }
    ~Derived(){
        cout<<"Derived Destructor called"<<endl;
    }
};

class AnotherDerived : public Base{
    public:
    AnotherDerived(){
        cout<<"AnotherDerived COnstructor called"<<endl;
    }
    ~AnotherDerived(){
        cout<<"AnotherDerived Destructor called"<<endl;
    }
};

int main(){
    AnotherDerived obj;

    return 0;
}