// ************************************Destructors********************************

/*Name of destructor is same as that of the class
Destructor's name is preceded by tilde symbol ~
A destructor is also called when the programmer explicitly deletes an object using
the delete operator
Like a constructor,a destructor is also declared in the public section
The order of invoking a destructor is the reverse of invoking a constructor
Destructor do not take any argument and hence cannot be overloaded
A destructor does not return any value
Destructor is automatically invoked when the object goes out of scope
Such as-the function ends,the program ends,a block containing local variable ends
When delete operator is called*/

// #include<iostream>
// using namespace std;
// class Sample
// {
// private:
// int x;
// public:
// Sample(int n)
// {
// x=n;
// cout<<"\n Constructor Called for object with value:"<<x;
// }
// ~Sample()
// {
// cout<<"\n Destructor Called for object with value:"<<x;
// }
// };
// int main()
// {
// Sample s1(1);
// Sample s2(2);
// Sample s3(3);
// return 0;
// }


// #include<iostream> 
// using namespace std; 
// class Sample 
// { 
// private: 
// static int num_objects; 
// static int num_objects_destroyed; 
// public: 
// Sample() 
// { 
// num_objects++; 
// } 
// ~Sample() 
// { 
// num_objects_destroyed++; 
// } 
// void show_data() 
// { 
// cout<<"\n\n Number of objects created:"<<num_objects; 
// cout<<"\n Number of objects destroyed:"<<num_objects_destroyed; 
// cout<<"\n Number of objects active:"<<num_objects-num_objects_destroyed; 
// } 
// }; 
// int Sample::num_objects=0; 
// int Sample::num_objects_destroyed=0; 
// void my_func() 
// { 
// Sample s8,s9; 
// s9.show_data(); 
// } 
// int main() 
// { 
// Sample s1,s2,s3; 
// { 
// s1.show_data();//Created:3,Destroyed:0,Active:3 
// Sample s4; 
// { 
// Sample s5; 
// s5.show_data();//Created:5,Destroyed:0,Active:5 
// } 
// } 
// s3.show_data();//Created:5,Destroyed:2,Active:3//Leaving local scope 
// my_func();//Created:7,Destroyed:2,Active:5 
// s2.show_data();//Created:7,Destroyed:4,Active:3//Leaving function scope 
// return 0; 
// }


// #include<iostream> 
// #include<string.h> 
// using namespace std; 
// class String 
// { 
// private: 
// 	char *s; 
// 	int size; 
// public: 
// 	String(char *); // constructor 
// 	~String();	 // destructor 
// }; 
// String::String(char *c) 
// { 
// 	size = strlen(c); 
// 	s = new char[size+1]; 
// 	strcpy(s,c); 
// 	cout<<"\nString is:"<<s; 
// } 
// String::~String() 
// { 
// 	delete []s; 
// 	cout<<"\n Memory freed which was allocated dynamically(Avoiding memory leak)"; 
// } 
// int main() 
// { 
//     String obj1("Hello"); 
//     return 0; 
// }