// ------------------------------------------------String----------------------------------------------------

// Declaration,initialization and various ways to generate strings in C++
// #include<iostream>
// using namespace std;

// int main(){
//     string a = "Hello World!";
//     string b(a);
//     string c = b;
//     string d;
//     d = a;
//     string e;
//     cout<<"Enter string"<<endl;
//     getline(cin,e);
//     cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e;    
//     return 0;
// }


// Traversing string object in c++
// #include<iostream>
// using namespace std;

// int main(){
//     string a;
//     int count = 0;
//     cout<<"Enter string value"<<endl;
//     getline(cin,a);
//     for(int i=0;i<a.length();i++){
//         cout<<a[i]<<" ";
//         count++;
//     }
//     cout<<endl;
//     cout<<"Number of character: ";
//     cout<<count;
//     return 0;
// }

//Replacing space character with another character 
// #include<iostream> 
// using namespace std; 
// int main() 
// { 
// 	string a; 
// 	char ch; 
// 	int count=0; 
// 	cout<<"\nEnter string:"; 
// 	getline(cin,a); 
// 	cout<<"\nEnter character for replacement: "; 
// 	cin>>ch; 
// 	for(int i=0;i<a.length();i++) 
// 	{ 
// 		if(a[i]==' ') 
// 		{ 
// 			a[i]=ch; 
// 		} 
// 	} 
// 	cout<<"\nUpdated string is: "<<a; 
// 	return 0; 
// }


//Lowercase to uppercase logic 
// #include<iostream> 
// using namespace std; 
// int main() 
// { 
// 	string a; 
// 	char ch; 
// 	int count=0; 
// 	cout<<"\nEnter string:"; 
// 	getline(cin,a); 
// 	for(int i=0;i<a.length();i++) 
// 	{ 
// 		if(a[i]>=97 && a[i]<=122) 
// 		{ 
// 			a[i]=a[i]-32; 
// 		} 
// 	} 
// 	cout<<"\nString in uppercase characters: "<<a; 
// 	return 0; 
// }

// Uppercase to lowercase
// #include<iostream> 
// using namespace std; 
// int main() 
// { 
// 	string a; 
// 	char ch; 
// 	int count=0; 
// 	cout<<"\nEnter string:"; 
// 	getline(cin,a); 
// 	for(int i=0;i<a.length();i++) 
// 	{ 
// 		if(a[i]>=65 && a[i]<=90) 
// 		{ 
// 			a[i]=a[i]+32; 
// 		} 
// 	} 
// 	cout<<"\nString in uppercase characters: "<<a; 
// 	return 0; 
// }


// #include<iostream>
// using namespace std;
// class example{
//     string a;
//     int count = 0;
//     public:
//         void input(){
//             cout<<"Enter the string value"<<endl;
//             getline(cin,a);
//         }
//         int counting(){
//             for(int i=0;i<a.length();i++){
//                 if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'){
//                     count++;
//                 }
//             }
//             return count;
//         }
// };
// int main(){
//     example obj[3];
//     for(int i=0;i<3;i++){
//         obj[i].input();
//         cout<<"Number of vowels: "<<obj[i].counting()<<endl;
//     }

//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     string s1("12345");
//     string s2("abcdefghijkl");
//     cout<<"\n Using append with 1 parameter: ";
//     s1.append(s2);
//     cout<<s1<<endl;
//     //s1(12345abcdefghijkl) after append
//     cout<<"\n Using append with 3 parameters: ";
//     s1.append(s2,2,3);
//     cout<<s1<<endl;
//     //s1(12345abcdefghijklcde) after append
//     s1.append("abcd",2);
//     cout<<s1<<endl;
//     string s3("Hello");
//     string s4("World");
//     string s5("Yes");
//     string s6("Programming");
//     s3.insert(1,s4);
//     cout<<"\n Using insert function:";
//     cout<<s3<<endl;
//     //s3(HWorldello)
//     s3.insert(1,s4,0,2);
//     cout<<"\n Using insert function:";
//     cout<<s3<<endl;
//     //s3(HWoWorldello)
//     s3.insert(1,"check",2);
//     cout<<"\n Using insert function:";
//     cout<<s3<<endl;
//     s4.replace(1,3,s5);
//     cout<<"\n Using replace function:";
//     cout<<s4<<endl;
//     //s4(WYesd)
//     s4.replace(1,3,s6,0,3);
//     cout<<"\n Using replace function:";
//     cout<<s4<<endl;
//     //s4(WProd)
//     s4.replace(1,2,"abcd",2);
//     cout<<"\n Using replace function:";
//     cout<<s4<<endl;
//     s6.erase(1,6);
//     cout<<"\n Using erase function:";
//     cout<<s6<<endl;
//     //s6(Pming)
//     s6.erase(1);
//     cout<<"\n Using erase function:";
//     cout<<s6<<endl;
//     //s6(P)
//     s6.erase();
//     cout<<"\n Using erase function:";
//     cout<<s6<<endl;//Nothing will be displayed
//     cout<<s6.length()<<endl;
//     s6.clear();
//     cout<<"Output after clear()"<<s6.length();
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//    string s1 = "arlcome";
//    string s2 = "wearweea";
//    cout<<s2.find("wear")<<endl;
//    cout<<s2.rfind("we")<<endl;
//    cout<<s2.find_last_of('e')<<endl;
//    cout<<s2.find_first_of('e')<<endl;
//    cout<<s2.at(0)<<endl;
//    s1.swap(s2);
//    cout<<s1<<" "<<s2<<endl;
//    //s1(wearweea),s2(arlcome)--After swap
//    s2.resize(3);
//    cout<<s2;//arl
//    return 0;
// }

// #include<iostream>
// using namespace std;
//  int main()
// {
//    string s1 = "welcome";
//    string s2,s3;
//    s2=s1.substr(2,2);
//    cout<<s2;
//    s3=s1.substr(4);
//    cout<<endl<<s3;
//    return 0;
// }

// #include<iostream> 
// using namespace std; 
// int main() 
// { 
//    string s1 = "acme"; 
//    string s2 = "zbcrome"; 
//    cout<<s1.compare(s2)<<endl; 
//    cout<<s1.compare(2,2,s2,5,2)<<endl; 
//    cout<<s1.compare(1,2,s2,1,2); 
//    return 0; 
// }

// #include<iostream> 
// using namespace std; 
// int main() 
// { 
//     string str="welcome"; 
//     string str1; 
// 	cout << "Size = " << str.size() << endl; 
// 	cout << "Length = " << str.length() << endl; 
// 	cout << "Max Size = " << str.max_size() << endl; 
// 	cout << "Empty:  "<< (str1.empty() ? "yes" : "no") << endl; 
//     return 0; 
// }

// #include<iostream> 
// using namespace std; 
// int main() 
// { 
// string s1("Hello"); 
// cout<<s1<<endl; 
// string s2(s1); 
// cout<<s2<<endl; 
// string s3,s4="Bye"; 
// cout<<s2[0]; 
// if(s1==s2) 
// { 
// cout<<"\n Equal"; 
// } 
// cout<<"\n Enter string:"; 
// getline(cin,s3); 
// cout<<s3<<endl; 
// if(s1>s4) 
// { 
// 	cout<<"s1 is greater"; 
// } 
// else  
// { 
// 	cout<<"s4 is greater"; 
// } 
// }


// --------------------------------Constructors & Deconstructors----------------------------------

// Constructors:
//     It is a member function of class which has same name as that of class.
//     It is automatically invoked when object of the class is created.
//     It should be defined in the public section of class.
//     It has no return type(not even void).
//     It can take parameter also (hence constructor overloading is allowed).
//     It is used to initiallize members of the class.
//     It cannot be static in nature.

// Types: 
//     1. Dafault Constructors (will never take parameters)
//     2. Paramaterised (will take parameter int he main function and these will be assigned to data members)
//     3. Copy Constructor
//     4. Dynamic Constructors

// Dafault Constructor:

// #include<iostream>
// using namespace std;
// class abc_default{
//     int x, y;
//     public:
//     abc_default(){
//         x = 2;
//         y = 3;
//     }
//     void display(){
//         cout<<"values: "<<x<<" "<<y<<endl;
//     }
// };
// int main(){
//     abc_default obj;
//     obj.display();
//     return 0;
// }

// Parameterised Constructor:

// #include<iostream>
// using namespace std;

// class abc_parameter{
//     int x, y;
//     public:
//     abc_parameter(int a, int b){
//         x = a;
//         y = b;
//     }
//     void display(){
//         cout<<"The values of x and y: "<<x<<" "<<y<<endl;
//     }
// };
// int main(){
//     abc_parameter obj1(2,4), obj2(6,9); // Implicit initialization
//     abc_parameter obj3 = abc_parameter(5,10); // Explicit initialization
//     obj1.display();
//     obj2.display();
//     obj3.display();
//     return 0;
// }

// Copy Constructor: 
//  1. It's the type of constructor which initialize new object with the same value as already existing object is leaving.
//  2. So, it will create a new object which acts like a copy of existing object.
//  3. It will always take obkects as arguments.
//  4. Object will be passed by reference approach.
//  5. If we pass object by value, then compiler will give error.

// #include<iostream>
// using namespace std;
// class example{
//     int x, y;
//     public:
//     example(int a, int b){
//         x = a;
//         y = b;
//     }
//     example(example &obj){
//         x = obj.x;
//         y = obj.y;
//     }
//     void display(){
//         cout<<"The values of x and y: "<<x<<" "<<y<<endl;
//     }
// };
// int main(){
//     example obj1(2,5);
//     obj1.display();
//     example obj2(obj1);
//     obj2.display();
//     example obj3 = obj2;
//     obj3.display();

//     return 0;
// }


// Dynamic Constructor: 
//  1. It is type of constructor which helps in the DMA process inside class definition.

#include<iostream>
using namespace std;
class Student{
    int roll_no, marks;
    public:
    Student(){
        roll_no = 0;
        marks = 0;
    }
    Student(int r, int m = 0){
        roll_no = r;
        marks = m;
    }
    void display(){
        cout<<"Roll no.: "<<roll_no<<endl;
        cout<<"Marks: "<<marks<<endl;
    }
};
int main(){
    Student s1;
    s1.display();
    Student s2(3);
    s2.display();
    Student s3(5,98);
    s3.display();
    return 0;
}