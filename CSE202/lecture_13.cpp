// ------------------------------------------File Handling-----------------------------------------

// #include<fstream> --->Header file

// file handling classes to cover:
//     1. ofstream -> output file stream
//     2. ifstream -> input file stream
//     3. fstream  -> file stream (both)

// File Handling Modes:
//     1. ios::in -> for reading purpose
//     2. ios::out -> for writing purpose
//     3. ios::app -> for Append purpose
//     4. ios::trunc  -> for creating blank file
//     5. ios::binary -> for opening binary file
//     6. ios::ate -> for opening the file for updation purpose

// #include<iostream>
// #include<fstream>
// #include<stdlib.h>
// using namespace std;

// int main(){
//     char name[10];
//     float sal;
//     ofstream outfile("K22HZ.txt");
//     if(!outfile){
//         cout<<"File could not be opened."<<endl;
//         exit(1);
//     }
//     for(int i=0;i<3;i++){
//         cout<<"Enter the name and salary of Employee "<<i+1<<" "<<endl;
//         cin>>name>>sal;
//         outfile<<"\n"<<name<<"\t"<<sal;
//     }
//     outfile.close();
//     ifstream inpfile("K22HZ.txt");
//     if(!inpfile){
//         cout<<"File could not be created"<<endl;
//         exit(1);
//     }
//     for(int i=0;i<3;i++){
//         inpfile>>name;
//         inpfile>>sal;
//         cout<<"Employee "<<i+1<<" "<<endl;
//         cout<<name<<" "<<sal<<endl;
//     }
//     inpfile.close();


//     return 0;
// }


// #include<iostream>
// #include<fstream>
// #include<stdlib.h>
// using namespace std;

// int main(){
//     char name[10];
//     float sal;
//     ofstream outfile;
//     outfile.open("newfile.txt");
//     if(!outfile){
//         cout<<"File could not be opened."<<endl;
//         exit(1);
//     }
//     for(int i=0;i<3;i++){
//         cout<<"Enter the name and salary of Employee "<<i+1<<" "<<endl;
//         cin>>name>>sal;
//         outfile<<"\n"<<name<<"\t"<<sal;
//     }
//     outfile.close();
//     ifstream inpfile("newfile.txt");
//     if(!inpfile){
//         cout<<"File could not be created"<<endl;
//         exit(1);
//     }
//     for(int i=0;i<3;i++){
//         inpfile>>name;
//         inpfile>>sal;
//         cout<<"Employee "<<i+1<<" "<<endl;
//         cout<<name<<" "<<sal<<endl;
//     }
//     inpfile.close();

//     return 0;
// }


// #include<iostream>
// #include<fstream>
// #include<stdlib.h>
// using namespace std;

// int main(){
//     char name[10];
//     float sal;
//     fstream obj;
//     obj.open("newfile2.txt",ios::out);
//     if(!obj){
//         cout<<"File could not be opened"<<endl;
//         exit(1);
//     }
//     for(int i=0;i<3;i++){
//         cout<<"Enter the name and salary of Employee "<<i+1<<" "<<endl;
//         cin>>name>>sal;
//         obj<<"\n"<<name<<"\t"<<sal;
//     }
//     obj.close();
//     obj.open("newfile2.txt",ios::in);
//     if(!obj){
//         cout<<"File could not be opened"<<endl;
//         exit(1);
//     }
//     for(int i=0;i<3;i++){
//         obj>>name;
//         obj>>sal;
//         cout<<"\nEmployee "<<i+1<<": ";
//         cout<<name<<"\t"<<sal;
//     }
//     obj.close();

//     return 0;
// }


// #include<iostream> 
// #include<fstream> 
// #include<string.h> 
// using namespace std; 
// int main() 
// { 
//     char comment[80]; 
// char ch; 
// cout<<"\n Enter your feedback:"; 
// cin.getline(comment,80); 
// int len=strlen(comment); 
// fstream FILE; 
// FILE.open("Feedback.txt",ios::in|ios::out|ios::trunc); 
// for(int i=0;i<len;i++) 
// { 
// FILE.put(comment[i]); 
// } 
// FILE.seekg(0); 
// cout<<"\n USER'S FEEDBACK:"; 
// for(int i=0;i<len;i++) 
// { 
// FILE.get(ch); 
// cout<<ch; 
// } 
// FILE.close(); 
// }

