// // ******************************************Functions********************************************
// User defined:
//     1. Function returning no value and not taking any parmeter.[I/P + O/P-->Function definition]
//     2. Function returning value but taking no parameter.
//     3. Function returning no value but taking parameter.
//     4. Function returning value and taking parameter as well.

// Function parts:
//     1. Function decalaration.
//     2. Function definition.
//     3. Function calling.

// ------------------------------No returning value and no parameter---------------------------------
// #include<iostream>
// using namespace std;
// void add(); //Function declaration.
// int main(){
//     for(int i=1;i<=3;i++){
//         add();//Function calling.
//     }
//     return 0;
// }
// void add(){//Function definition.
//     int a,b;
//     cout<<"enter two numbers"<<endl;
//     cin>>a>>b;
//     cout<<"Addition of two numbers: "<<a + b<<endl;
// }


// ----------------------------returning value but no parameter-------------------------------------
// #include<iostream>
// using namespace std;
// int add(); //Function declaration.
// int main(){
    
//        cout<< add();//Function calling.
    
//     return 0;
// }
// int add(){//Function definition.
//     int a,b;
//     cout<<"enter two numbers"<<endl;
//     cin>>a>>b;
//     return a+b;//returning value.
// }


// -----------------------------returning no value but taking parameters------------------------------

// #include<iostream>
// using namespace std;
// void add(int,int);
// int main(){
//     int a, b;
//     cout<<"Enter two numbers."<<endl;
//     cin>>a>>b;
//     add(a,b);
//     return 0;
// }

// void add(int x, int y){
//     cout<<"Addition of two numbers: "<<x+y<<endl;
// }

// ----------------------------------returning value and taking parameter as well---------------------------

// #include<iostream>
// using namespace std;
// int add(int, int);
// int main(){
//     int a,b;
//     cout<<"enter two numbers"<<endl;
//     cin>>a>>b;
//     cout<<add(a,b)<<endl;
//     return 0;
// }
// int add(int x, int y){
//     return x+y;
// }

// ---------------------------------Prime or Composite--------------------------------
// #include<iostream>
// using namespace std;
// bool isPrime(int n);
// int main(){
//     int n;
//     bool ans;
//     cout<<"Enter the number"<<endl;
//     cin>>n;
//     ans=isPrime(n);
//     if(ans==true){
//         cout<<"Prime"<<endl;
//     } else{
//         cout<<"Composite"<<endl;
//     }
//     return 0;
// }

// bool isPrime(int x){
//     for(int i=2;i<=x/2;i++){
//         if(x%i==0){
//             return false;
//         }
//     }
//     return true;
// }

// -------------------------------------------Functions with default arguments--------------------------
// Default arguments are assigned with default value such that if values are not passed during function call then defult arguments will be taken.
// If value are passed during function call then dafualt value are overwritten with passed value.
// Default arguments are assigned with values from right to left direction.
// We can't skip any arguments while moving from right to left direction.
// Trailing arguments are provided with default values.

// #include<iostream>
// using namespace std;
// int funct(int a, int b, int c=12){
//     return a+b+c;
// }
// int main(){
//     cout<<funct(1,2);
//     return 0;
// }



// -----------------------------Function Overloading-------------------------------
// Compile time polymorphism.
// Same function name will be used with different implementations.
// Arguments/Parameters are differnet.
// Decision regarding which function to call will be taken as per argument passed to the function.
// Functions are overloaded on the basis of different arguments.
// Arguments are different in three ways:-
//  1. Count of arguments.
//  2. Types of arguments.
//  3. Sequence of arguments.
// NOTE: Functions are never overloaded on the basis of different return type only.

// #include<iostream>
// using namespace std;
// int area(int);
// int area(int,int);
// float area(float);
// float area(float,float);

// int main(){
//     int length, breadth, side;
//     float radius, base, height;
//     cout<<"enter side"<<endl;
//     cin>>side;
//     cout<<"Area of square is: "<<area(side)<<endl;
//     cout<<"Enter length and breadth"<<endl;
//     cin>>length>>breadth;
//     cout<<"Area of rectangle: "<<area(length,breadth)<<endl;
//     cout<<"Enter radius"<<endl;
//     cin>>radius;
//     cout<<"Area of circle: "<<area(radius)<<endl;
//     cout<<"enter base and height"<<endl;
//     cin>>base>>height;
//     cout<<"Area of triangle: "<<area(base,height)<<endl;
//     return 0;
// }

// int area(int x){
//     return x*x;
// }
// int area(int x,int y){
//     return x*y;
// }
// float area(float x){
//     return 3.14*x*x;
// }
// float area(float x,float y){
//     return 0.5*x*y;
// }



// -------------------------------Overloading Member Functions of the class------------------------------

// #include<iostream>
// using namespace std;
// class shape{
//     public:
//     int area(int x){
//     return x*x;
// }
// int area(int x,int y){
//     return x*y;
// }
// float area(float x){
//     return 3.14*x*x;
// }
// float area(float x,float y){
//     return 0.5*x*y;
// }
// };
// int main(){
//     shape obj;
//     int length, breadth, side;
//     float radius, base, height;
//     cout<<"enter side"<<endl;
//     cin>>side;
//     cout<<"Area of square is: "<<obj.area(side)<<endl;
//     cout<<"Enter length and breadth"<<endl;
//     cin>>length>>breadth;
//     cout<<"Area of rectangle: "<<obj.area(length,breadth)<<endl;
//     cout<<"Enter radius"<<endl;
//     cin>>radius;
//     cout<<"Area of circle: "<<obj.area(radius)<<endl;
//     cout<<"enter base and height"<<endl;
//     cin>>base>>height;
//     cout<<"Area of triangle: "<<obj.area(base,height)<<endl;
//     return 0;
// }

// ----------------------------------Argument/Parameter passing mechanism----------------------------------------
    // 1. Call by Value.
    // 2. Call by Address(Pointer).
    // 3. Call by Reference.



    // ---------------------Call by Value-----------------------

// Changes are never reflected back because entire work is done on duplicate copies of actual arguments.
// Values of actual argument are copied to formal arguments.
// It can take more time and space as duplicate values are created.
// Original values are safe.
// We can pass variables, constant and expresssion as actual argument.

// #include<iostream>
// using namespace std;
// void call_by_value(int,int);
// int main(){
//     int a=10,b=12;
//     call_by_value(a,b);
//     cout<<a<<" "<<b<<endl;
//     return 0;
// }
// void call_by_value(int x,int y){
//     x=x+1;
//     y=y+1;
//     cout<<x<<" "<<y<<endl;
// }


// ------------------------Call by Address-------------------------

// Changes are reflected back because entire work is done on original arguments.
// Address of variables are passed as actual arguments.
// Pointers will be formal arguments.
// Originals values are never safe.
// Less time and space will be consumed as compared to call by value as no duplicate copies are created.

// #include<iostream>
// using namespace std;
// void call_by_Address(int*,int*);
// int main(){
//     int a=10,b=12;
//     call_by_Address(&a,&b);
//     cout<<a<<" "<<b<<endl;
//     return 0;
// }
// void call_by_Address(int *x,int *y){
//     *x=*x+1;
//     *y=*y+1;
// }

// ------------------------Call by References-------------------------

// Reference variable: It is alias (another name) of already existing variable.

// #include<iostream>
// using namespace std;
// void swap1(int&,int&);
// int main(){
//     int a =10, b=12;
//     cout<<"Values of a and b before swapping. "<<a<<" "<<b<<endl;
//     swap1(a,b);
//     cout<<"Values of a and b after swapping. "<<a<<" "<<b<<endl;
//     return 0;
// }
// void swap1(int &r1, int &r2){
//     int temp =r1;
//     r1=r2;
//     r2=temp;
// }