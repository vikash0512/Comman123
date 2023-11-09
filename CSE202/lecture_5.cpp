// ---------------Storage Classes----------------

// #include<iostream>
// using namespace std;

// void increament(){
//     static int a;
//     a=a+1;
//     cout<<a<<" ";
// }
// int main(){
//     increament();
//     increament();
//     increament();
//     return 0;
// }


// #include<iostream>
// using namespace std;

// class example{
//     static int count;
//     public:
//     void increment(){
//         count++;
//     }
//     static void display(){
//         cout<<"Number of objects: "<<count<<endl;
//     }
// };
// int example::count; /*Defining static variable*/

// int main(){
//     example obj1,obj2,obj3;
//     obj1.increment();
//     obj2.increment();
//     obj3.increment();
//     example::display();
//     return 0;
// }

// WAP to generate unique ID numbers.......

#include<iostream>
using namespace std;

class Uni{
    static int id;
    public:
    void increment(){
        id++;
    }
    void display(){
        cout<<"unique id numbers are: "<<id<<endl;
    }
};
int Uni::id=123000;;
int main(){
    Uni obj1,obj2,obj3;
    obj1.increment();
    obj1.display();
    obj2.increment();
    obj2.display();
    obj3.increment();
    obj3.display();
    return 0;
}