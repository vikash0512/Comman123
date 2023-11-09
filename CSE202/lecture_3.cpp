// // #include<iostream>
// // using namespace std;

// // class A
// // {
// //     int x,y;
// //     public:
// //         void input()
// //         {
// //             cout<<"Enter a and y"<<endl;
// //             cin>>x>>y;
// //         }
// //         void display()
// //         {
// //             cout<<x<<" "<<y<<endl;
// //         }
// // };

// // int main(){

// //        A obj;
// //        obj.input();
// //        obj.display();

// //     return 0;
// // }
// #include<iostream>
// using namespace std;

// class rectangle{
//     int l,b;
//     public:
//         void input(){
//             cout<<"Enter length and breadth"<<endl;
//             cin>>l>>b;
//         }
//         int area(){
//             return l*b;
//         }
// };

// int main(){

//         rectangle obj1, obj2;
//         obj1.input();
//         cout<<obj1.area()<<endl;
//         obj2.input();
//         cout<<obj2.area()<<endl;

//     return 0;
// }


//---------------------- Defining member function outside of the class

// #include<iostream>
// using namespace std;

// class Rectangle{
//     int l,b;
//     public:
//         void input();
//         int area();
// };

// void Rectangle::input(){
//     cout<<"Enter lenght and breadth"<<endl;
//     cin>>l>>b;
// }
// int Rectangle::area(){
//     return l*b;
// }

// int main(){
    
//     Rectangle obj1, obj2;
//     obj1.input();
//     cout<<obj1.area()<<endl;
//     obj2.input();
//     cout<<obj2.area()<<endl;

//     return 0;
// }


// #include<iostream>
// using namespace std;

// class Rectangle{
//     int l,b;
//     public:
//         void input();
//         int area();
//         int length(){
//     return l;
// }
// int breadth(){
//     return b;
// }
// };

// void Rectangle::input(){
//     cout<<"Enter lenght and breadth"<<endl;
//     cin>>l>>b;
// }
// int Rectangle::area(){
//     return l*b;
// }


// int main(){
    
//     Rectangle obj[3];
//     for(int i=0;i<3;i++){
//         obj[i].input();
//     }
//     cout<<"Area of rectangles:"<<endl;
//     for(int i=0;i<3;i++){
//         if(obj[i].length()==0||obj[i].breadth()==0){
//             cout<<"Invalid input"<<endl;
//         }
//         else{
//         cout<<obj[i].area();
//         cout<<endl;}
//     }


//     return 0;
// }

// -----------------take class empoyee with attributes empid, name and department. read and display data of four employees

// #include<iostream>
// using namespace std;

// class employee{
//     int empid;
//     string dept;
//     string name;
//     public:
//         void input(){
//             cout<<"enter empoyee id"<<endl;
//             cin>>empid;
//             cin.ignore(); /*used to clear input buffer*/
//             cout<<"enter name"<<endl;
//             getline(cin,name); /*used to take input for string object*/
//             cout<<"enter department"<<endl;
//             getline(cin,dept);
            
//         }
       
//         void display(){
//             cout<<"ID: "<<empid<<" Name: "<<name<<" Department: "<<dept<<endl;
//         }
// };

// int main(){
    
//     employee obj[4];
//     for(int i=0;i<4;i++){
//         obj[i].input();   
//     }
//     for(int i=0;i<4;i++){
//         obj[i].display();
//     }
    

//     return 0;
// }


// #include<iostream>
// using namespace std;

// class employee{
//     int empid;
//     string dept;
//     string name;
//     public:
//         void input(){
//             cout<<"enter empoyee id"<<endl;
//             cin>>empid;
//             cin.ignore(); /*used to clear input buffer*/
//             cout<<"enter name"<<endl;
//             getline(cin,name); /*used to take input for string object*/
//             cout<<"enter department"<<endl;
//             getline(cin,dept);
            
//         }
//         string department(){
//             return dept;
//         }
//         void display(){
//             cout<<"ID: "<<empid<<" Name: "<<name<<" Department: "<<dept<<endl;
//         }
// };

// int main(){
    
//     employee obj[4];
//     for(int i=0;i<4;i++){
//         obj[i].input();   
//     }
//     for(int i=0;i<4;i++){
//         if(obj[i].department()=="HR"){
//             obj[i].display();
//         }
//     }
    

//     return 0;
// }

// Setting precision

// #include<iostream>
// #include<iomanip>
// using namespace std;

// int main(){
//     float x=124.1286365;
//     cout<<fixed<<setprecision(2)<<x<<endl;
//     return 0;
// }

// --------------------------structures in c++---------------------------------


// #include<iostream>
// using namespace std;

// struct employee{
//     private:
//     int empid;
//     string dept;
//     string name;
//     public:
//         void input(){
//             cout<<"enter empoyee id"<<endl;
//             cin>>empid;
//             cin.ignore(); /*used to clear input buffer*/
//             cout<<"enter name"<<endl;\\\\\\\\\\\\\
//             getline(cin,name); /*used to take input for string object*/
//             cout<<"enter department"<<endl;
//             getline(cin,dept);
            
//         }
       
//         void display(){
//             cout<<"ID: "<<empid<<" Name: "<<name<<" Department: "<<dept<<endl;
//         }
// };

// int main(){
    
//     employee obj[4];
//     for(int i=0;i<4;i++){
//         obj[i].input();   
//     }
//     for(int i=0;i<4;i++){
//         obj[i].display();
//     }
    

//     return 0;
// }

#include<iostream>
using namespace std;

union employee{
    private:
    int empid;
    char dept[20];
    char name[20];
    public:
        void inputdisplay(){
            cout<<"enter empoyee id"<<endl;
            cin>>empid;
            cin.ignore(); /*used to clear input buffer*/
            cout<<"ID: "<<empid<<endl;
            cout<<"enter name"<<endl;
            cin.getline(name,20); /*used to take input for string object*/
            cout<<" Name: "<<name<<endl;
            cout<<"enter department"<<endl;
            cin.getline(dept,20);
            cout<<" Department: "<<dept<<endl;
            
        }
};

int main(){
    
    employee obj[4];
    for(int i=0;i<4;i++){
        obj[i].inputdisplay();
    }
   
    return 0;
}