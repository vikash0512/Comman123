// ---------------------------------Pointers-------------------------------

// Pointer : It is a variable which will store the address of another variable.
// Declaration: <data_type> *<name_of_pointer>

// Application: 
// 1. Dynamic memory allocation (DMA)
// 2. Used to implement various data structures like linked list, trees, graphs.

// Data type of pointer and varible towards which pointer is pointing must be same.
// Multiple pointers can point towards same memory location at the same time.
// Size of any type of pointer is always equivalent to unsigned integer(4 or 8 or 12 or 16 bytes)
// Majority of compilers will allocate 8 bytes.

// #include<iostream>
// using namespace std;

// int main(){
//     int *p1;
//     char *p2;
//     float *p3;
//     double *p4;
//     cout<<sizeof(p1)<<endl;
//     cout<<sizeof(p2)<<endl;
//     cout<<sizeof(p3)<<endl;
//     cout<<sizeof(p4)<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int a,b,sum;
//     int *p1=&a, *p2=&b, *psum=&sum;
//     cout<<"Enter two numbers"<<endl;
//     cin>>*p1>>*p2;
//     *psum = *p1 + *p2;
//     cout<<"Sum is: "<<*psum<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     float radius,area;
//     float *r=&radius, *a=&area;
//     cout<<"Enter radius of the circle"<<endl;
//     cin>>*r;
//     *a = 3.14*(*r)*(*r);
//     cout<<"Area of circle is: "<<*a<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     long long fact = 1;
//     int *pn=&n;
//     long long *pfact=&fact;
//     cout<<"Enter the number: "<<endl;
//     cin>>*pn;
//     for( int i=1;i<=*pn;i++){
//         *pfact = *pfact * i;
//     }
//     cout<<"Factorial of the number is: "<<*pfact<<endl;
//     return 0;
// }

// -------------------------------------------Pointer to Pointer------------------------------------------------

// when a pointer stores the address of another pointer then it is said to be pointer to pointer notation. Also known as: Chain of Pointers or Multiple   Indirection.

// #include<iostream>
// using namespace std;

// int main(){
//     int a=10;
//     int *p1=&a, **p2=&p1;
//     cout<<a<<endl;
//     cout<<*p1<<endl;
//     cout<<**p2<<endl;
//     cout<<&p1<<endl;
//     cout<<&p2<<endl;
//     cout<<&a<<endl;
//     return 0;
// }



// ------------------------------------Types of Pointers----------------------------------

// Wild pointers-->Uninitialized pointer, can point to any random memory location, invalid to derefer cause it can produce unpredictable from the compiler(it can give any random value as random address is assigned to the variable)
// Solution(for wild pointers): Initializing pointer with some valid address value

// NULL pointers-->pointing no where, invalid to derefer (cause no address), value exists (if try to derefer compiler can show unpredictable behaviour)

// Constant pointers
    // Consatant pointer: type of pointer which will points towards only one memory location in its entire lifetime, cannot assign different address to it, is required to initialized at the time of its declaration 

    // Pointer to constant: value stored in the variable cant change but pointer can point to other varibales.

    // Constant pointer to constant: cant change the value as well as address its pointing towards.

// Void pointers
// Dangling pointers

// Out of specified types above potential problems with pointers --> Wild and Dangling pointers.

// #include<iostream>
// using namespace std;

// int main(){
//     int *ptr;
//     cout<<ptr<<endl;
//     cout<<*ptr<<endl; // Invalid Operation
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int *ptr=NULL;
//     // int *ptr=0;
//     cout<<ptr;
//     cout<<*ptr; // Invalid Operation
//     return 0;
// }


// #include<iostream>
// using namespace std;

// int main(){
//     int a=10, b=20;
//     int * const ptr=&a;
//     cout<<*ptr<<endl;
//     // ptr=&b; // compilation error
//     *ptr=100;
//     cout<<a;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int a=10, b=20;
//     const int *ptr = &a;
//     cout<<*ptr<<endl;
//     ptr=&b;
//     cout<<*ptr<<endl;
//     // *ptr = 100; // cannot modify the value of varible.
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int a=10,b=20;
//     const int * const ptr = &a;
//     cout<<*ptr<<endl;
//     // ptr=&b; //error
//     // *ptr=100; //error
//     return 0;
// }

