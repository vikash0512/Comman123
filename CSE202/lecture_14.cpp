// ----------------------------Operator Overloading----------------------------------

// Operator overloading is a compile-time polymorphism. It is an idea of giving special meaning 
// to an existing operator in C++ without changing its original meaning.

// Syntax:

// 1. When declared inside and defined outside the class:
// return_type classname::operator#(argument list){
//     Body of the function
// }

// 2. When declared and defined inside the class:
// return_type operator#(argument list){
//     Body of the function
// }

// 3. When declared as a freind function:
// freind void operator#(class_name &obj); // declaration inside the class
// void operator#(class_name &obj){
//     Body of the function                // definition outside the class
// }

// We can not overload these operators:
// 1. Class member access operator(.,.*)
// 2. Scope resolution operator(::)
// 3. Size operator(sizeof)
// 4. Conditional operator(?:)

// Steps in process of overloading

// 1. Create a  class that defines data types that is to be used in the overloading operation.
// 2. Declare the operator function operator op() in public part of the class. It may be either member function or freind function.
// 3. Defien the operator function to implement requred operation.

// Can be invoked as:

// x.operator op(y)-->for member function
// operator op(x,y)-->for freind function

// Unary Operator Overloading:

// #include<iostream>
// using namespace std;
// class abc{
//     int x, y, z;
//     public:
//     abc(int a, int b, int c){
//         x = a;
//         y = b;
//         z = c;
//     }
//     void display(){
//         cout<<x<<" "<<y<<" "<<z<<endl;
//     }
//     void operator-(){
//         x = -x;
//         y = -y;
//         z = -z;
//     }
// };
// int main(){
//     abc s(10,-20,30);
//     cout<<"s: ";
//     s.display();
//     -s;
//     cout<<"s: ";
//     s.display();

//     return 0;
// }

// #include<iostream>
// using namespace std;
// class score{
//     int val;
//     public:
//     score(){
//         val = 0;
//     }
//     void operator++(){
//         val = val+1;
//     }
//     int show(){
//         return val;
//     }
// };
// int main(){
//     score s1, s2;
//     cout<<"Initial value of s1 object = "<<s1.show()<<endl;
//     cout<<"Initial value of s2 object = "<<s2.show()<<endl;
//     ++s1;
//     ++s1;
//     ++s2;
//     cout<<"Initial value of s1 object = "<<s1.show()<<endl;
//     cout<<"Initial value of s2 object = "<<s2.show()<<endl;

//     return 0;
// }

// #include<iostream>
// using namespace std;
// class demo{
//     int a, b;
//     public:
//     demo(){};
//     demo(int x, int y){
//         a = x;
//         b = y;
//     }
//     void show(){
//         cout<<"a: "<<a<<" "<<"b: "<<b<<endl;
//     }
//     demo operator+(demo obj){
//         demo temp;
//         temp.a = a + obj.a;
//         temp.b = b + obj.b;
//         return temp;
//     }
// };
// int main(){
//     demo obj1(10,20),obj2(30,40),obj3;
//     obj3 = obj1 + obj2;
//     obj3.show();
//     return 0;
// }


// #include<iostream>
// using namespace std;
// class demo{
//     int a,b;
//     public:
//     demo(int x, int y){
//         a = x;
//         b = y;
//     }
//     void show(){
//         cout<<"a: "<<a<<" "<<"b: "<<b<<endl;
//     }
//     friend void operator -(demo &obj);
//     };
//     void operator -(demo &obj){
//         obj.a = -obj.a;
//         obj.b = -obj.b;
//     }
// int main(){
//     demo obj(10,-20);
//     obj.show();
//     -obj;
//     obj.show();
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class demo{
//     int a, b;
//     public:
//     demo(int x, int y){
//         a = x;
//         b = y;
//     }
//     void show(){
//         cout<<"a: "<<a<<" "<<"b: "<<b<<endl;
//     }
//     friend void operator +(demo &obj1, demo &obj2);
// };
// demo operator +(demo &obj1, demo &obj2){
//     demo temp;
//     temp.a = obj1.a + obj1.a;
//     temp.b = obj1.b + obj1.b;
//     return temp;
// }
// int main(){
    
//     return 0;
// }


