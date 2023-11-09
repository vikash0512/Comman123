// C++ program to illustrate
// concept of Virtual Functions

// #include <iostream>
// using namespace std;

// class base {
// public:
// 	virtual void print() { cout << "print base class\n"; }

// 	void show() { cout << "show base class\n"; }
// };

// class derived : public base {
// public:
// 	void print() { cout << "print derived class\n"; }

// 	void show() { cout << "show derived class\n"; }
// };

// int main()
// {
// 	base* bptr;
// 	derived d;
// 	bptr = &d;

// 	// Virtual function, binded at runtime
// 	bptr->print();

// 	// Non-virtual function, binded at compile time
// 	bptr->show();

// 	return 0;
// }


// #include <iostream>
// using namespace std;

// class sample{
//     public:
//     virtual void example() = 0;
//     void show(){
//         cout<<"This is sample abstract class"<<endl;
//     }
// };

// class derived1 : public sample{
//     public:
//     void example(){
//         cout<<"C++"<<endl;
//     }
// };

// int main()
// {
//     sample *ptr;
//     derived1 obj1;
//     ptr = &obj1;
//     ptr->example();
//     ptr->show();

//     return 0;
// }


// Exception Handling

// try: the try statement allows you to define a block of code to be tested for errors while it is being executed.

// throw: the throw keyword throws an exception when a problem is detected, which lets us create a custom error.

// catch: the catch statement allows you to defien a block of code to be executed if an error occurs in the try block.

// #include <iostream>
// using namespace std;

// int main()
// {
//     int a, b;
//     cout << "Enter the values of a and b" << endl;
//     cin >> a >> b;
//     int x = a - b;
//     try {
//          if ( x != 0 ) {
//              cout << "result of (a/x) = "<< a/x << endl;
//          }
//          else {
//               throw(x);
//          }
//     }
//     catch (int i) {
//          cout << "exception caught: x = "<< x << endl;
//     }
//     cout << "end" << endl;

//     return 0;
// }


// #include <iostream>
// using namespace std;

// void divide(int x, int y, int z){
//     cout << "We are inside the function" << endl;
//     if((x - y) != 0){
//         int R = z / (x - y);
//         cout << "Result = " << R << endl;
//     }
//     else {
//         throw(x - y);
//     }
// }

// int main()
// {
//     try {
//         cout << "We are inside the try block" << endl;
//         divide(10,20,30);
//         divide(10,10,20);
//     }
//     catch(int i){
//         cout << "caught the exception" << endl;
//     }
    
//     return 0;
// }


// #include <iostream>
// using namespace std;

// void test(int x){
//     try {
//         if(x == 1) {
//             throw x;
//         } else if(x == 0){
//             throw 'x';
//         } else if(x == -1){
//             throw 1.0;
//         }
//         cout << "End of try block" << endl;
//     }
//     catch(...){
//         cout<<"caught an exception"<<endl;
//     }
// };

// int main()
// {
//     cout << "testing generic catch" <<endl;

//     test(-1);
//     test(0);
//     test(1);
//     test(2);

//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Classthrow{};

// void add(){
//     int a=10, b=0;
//     if(a==0 || b==0){
//         throw Classthrow();
//     }
//     cout<<"addition: "<<a+b<<endl;
// }

// int main()
// {
//     try{
//         add();
//     }
//     catch(Classthrow &c){
//         cout<<"exception caught."<<endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// void divide(double x, double y){
//     cout<<"Inside function"<<endl;
//     try{
//         if(y==0.0){
//             throw y;
//         }
//         else{
//             cout<<"Division: "<<x/y<<endl;
//         }
//     }
//     catch(double){
//         cout<<"caught double inside function"<<endl;
//         throw;
//     }
//     cout<<"end of function"<<endl;
// }

// int main()
// {
//     cout<<"Inside main function"<<endl;
//     try{
//         divide(10.5,2.0);
//         divide(20.0,0.0);
//     }
//     catch(double){
//         cout<<"caught double inside main"<<endl;
//     }
//     cout<<"end of main"<<endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     try{
//         try{
//             throw 20;
//         }
//         catch(int n){
//             cout<<"handle partially"<<endl;
//             throw;
//         }
//     }
//     catch(int n){
//         cout<<"handle remaining"<<endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Demo{
//     public:
//     Demo(){
//         cout<<"constructor of Demo class classed"<<endl;
//     }
//     ~Demo(){
//         cout<<"destructor of Demo class called"<<endl;
//     }
// };

// int main()
// {
//     try{
//         Demo d;
//         throw 10;
//         cout<<"distructor is still alive"<<endl;
//     }
//     catch(int a){
//         cout<<"exception caught"<<endl;
//     }
//     return 0;
// }

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~TEMPLATES~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~`

// #include <iostream>
// using namespace std;

// template<class T>
// T square(T num){
//     return (num*num);
// }

// int main(){

//     int num1 = 3;
//     cout<<"Square of: "<<num1<<" = "<<square<int>(num1)<<endl;

//     float num2 = 5.6;
//     cout<<"Square of: "<<num2<<" = "<<square<float>(num2)<<endl;

//     double num3 = 123.456;
//     cout<<"Square of: "<<num3<<" = "<<square<double>(num3)<<endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// template<class T>
// T min1(T a, T b){
//     return (a<b?a:b);
// }

// int main(){

//     int x, y;
//     float p,q;

//     cout<<"enter integer value"<<endl;
//     cin>>x>>y;
//     cout<<"enter flaot value"<<endl;
//     cin>>p>>q;

//     cout<<"min of integer: "<<min1<int>(x,y)<<endl;

//     cout<<"min of float: "<<min1<float>(p,q)<<endl;

//     return 0;
// }


// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Standard Template Library~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

// Components:

//     --Containers: used to store data
//     --Algorithm
//     --Iterators

#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> v1(10);
    cout<<"size is: "<<v1.size()<<endl;

    for(int i=0;i<=9;i++){
        v1[i]=i;
    }

    for(int i=10;i<=19;i++){
        v1.push_back(i);
    }

    cout<<"size is: "<<v1.size()<<endl;

    for(int i=0;i<=19;i++){
        cout<<v1[i]<<endl;
    }

    v1.pop_back();
    v1.pop_back();

    cout<<"New size: "<<v1.size()<<endl;

    vector<int>::iterator v = v1.begin();

    while(v != v1.end()){
        cout<<"Value of v = "<<*v<<endl;
        v++;
    }

    return 0;
}