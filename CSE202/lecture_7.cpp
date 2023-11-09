// --------------------------Freind Function--------------------------------

// #include<iostream>
// using namespace std;
// class example{
//     int x;
//     public:
//         void input(){
//             cout<<"Enter x: "<<endl;
//             cin>>x;
//         }
//         friend void accessing(example);// prototyping freind function.
// };
// // Defining freind function.
// void accessing(example obj){// accepting object as argument.
//     cout<<"Accessing private member of the class: "<<obj.x<<endl;
// }
// int main(){
//     example e;
//     e.input();
//     accessing(e);
//     return 0;
// }

// *************One freind to one class****************************

// #include<iostream>
// using namespace std;

// class example{
//     int x, y;
//     public:
//         void input(){
//             cout<<"Enter x and y: "<<endl;
//             cin>>x;
//             cin>>y;
//         }
//         friend int accessing(example);// prototyping freind function.
// };

// // Defining freind function.

// int accessing(example obj){// accepting object as argument.
//     if(obj.x < obj.y)
//     return obj.x;
//     else 
//     return obj.y;
// }

// int main(){

//     example e;
//     e.input();
//     int ans=accessing(e);
//     cout<<ans<<endl;

//     return 0;
// }


// *********************more than one freind to the same class******************************

// #include<iostream>
// using namespace std;

// class example{
//     int x, y;
//     public:
//         void input(){
//             cout<<"Enter x and y: "<<endl;
//             cin>>x;
//             cin>>y;
//         }
//         friend void add(example);// prototyping freind function.
//         friend void product(example);// prototyping freind function.
// };

// // Defining freind function.

// void add(example obj){// accepting object as argument.
//     cout<<"Sum is: "<<obj.x+obj.y<<endl;
// }
// void product(example obj){
//     cout<<"Product is: "<<obj.x*obj.y<<endl;
// }

// int main(){

//     example e;
//     e.input();
//     add(e);
//     product(e);
//     return 0;
// }

// *********************Common freind for more than one class**********************

// #include<iostream>
// using namespace std;
// class B;
// class A{
//     int x;
//     public:
//         void input(){
//             cout<<"Enter x: "<<endl;
//             cin>>x;
//         }
//         friend void add(A,B);// prototyping freind function.
// };
// class B{
//     int y;
//     public:
//         void input(){
//             cout<<"Enter y: "<<endl;
//             cin>>y;
//         }
//         friend void add(A,B);// prototyping freind function.
// };
// // Defining freind function.
// void add(A a,B b){// accepting object as argument.
//     cout<<"Addition is: "<<a.x+b.y<<endl;
// }
// int main(){
//     A a1;
//     B b1;
//     a1.input();
//     b1.input();
//     add(a1,b1);
//     return 0;
// }


// --------------------------Freind Class------------------------------
// All members functions of a freind class are by default freinds to the class for which it is acting as a freind.
// It is possible to have more than one freind classes to the same class.

// #include<iostream>
// using namespace std;
// class B;
// class A{
//     int x;
//     public:
//         void input(){
//             cout<<"Enter x: "<<endl;
//             cin>>x;
//         }
//         friend class B;
// };
// class B{
//     public:
//         void task1(A obj){
//             cout<<"Square of private data member x: "<<obj.x*obj.x<<endl;
//         }
//         void task2(A obj){
//             cout<<"Cube of private data member x: "<<obj.x*obj.x*obj.x<<endl;
//         }
// };
// int main(){
//     A a;
//     a.input();
//     B b;
//     b.task1(a);
//     b.task2(a);
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class B;
// class C;
// class A{
//     int x;
//     public:
//         void input(){
//             cout<<"Enter x: "<<endl;
//             cin>>x;
//         }
//         friend class B;
//         friend class C;
// };
// class B{
//     public:
//         void task1(A obj){
//             cout<<"Square of private data member x: "<<obj.x*obj.x<<endl;
//         }
// };
// class C{
//     public:
//         void task2(A obj){
//             cout<<"Cube of private data member x: "<<obj.x*obj.x*obj.x<<endl;
//         }
// };
// int main(){
//     A a;
//     a.input();
//     B b;
//     b.task1(a);
//     C c;
//     c.task2(a);
//     return 0;
// }

// ---------------------------Manipulators-------------------------

//  1. Manipulators taking arguments.
//  2. Manipulators without argument.

// Manipulators taking arguments:-

//  <iomanip>--->Header file
//  setw()-->will take integer argument (used to format the output in right justified manner)
//  setfill()-->will take character argument (used to fill the empty spaces with character)
//  setprecision()-->will take integer argument (used to control the precision of output, by setting no. of digits to display after decimal point.)
//  setbase()-->will take integer argument (takes octal, decimal and hexadecimal)


// #include<iostream>
// #include<iomanip>
// using namespace std;

// int main(){
//     int a=1;
//     int b=12;
//     int c=121;
//     int d=1212;
//     cout<<setw(4)<<setfill('0')<<a<<endl;
//     cout<<setw(4)<<b<<endl;
//     cout<<setw(4)<<c<<endl;
//     cout<<setw(4)<<d<<endl;
//     return 0;
// }


// #include<iostream>
// #include<iomanip>
// using namespace std;

// int main(){
//     float a=34.5258;
//     cout<<fixed<<setprecision(2)<<a; // to get the O/P with 6 digits of precision.
//     return 0;
// }


// #include<iostream>
// #include<iomanip>
// using namespace std;

// int main(){
//     int a=15;
//     cout<<setbase(8)<<a<<endl; // to get the O/P with 6 digits of precision.
//     cout<<setbase(10)<<a<<endl; // to get the O/P with 6 digits of precision.
//     cout<<setbase(16)<<a<<endl; // to get the O/P with 6 digits of precision.
//     return 0;
// }

// Manipulators without arguments:-

    // hex-->to represent o/p in hexadecimal format
    // oct-->to represent o/p in octal format
    // dec-->to represent o/p in decimal format
    // endl-->for newline
    // ends-->to append null character('\0') at the end of string
    // ws-->to ignore leading white spaces in the input
    // scientific-->to represent o/p in scientific notation

#include<iostream>
using namespace std;

int main(){
    char str[20];
    cout<<"enter string";
    cin>>ws;
    cin.getline(str,20);
    cout<<str;
    return 0;
}