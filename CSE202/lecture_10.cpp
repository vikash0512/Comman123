// -----------------Pointer to objects-----------------------------

// #include<iostream>
// using namespace std;
// class A
// {
// int x;
// public:
// void getdata()
// {
// cout<<"\n Enter value for x:"<<endl;
// cin>>x;
// }
// void showdata()
// {
// cout<<"\n Entered value is:"<<x<<endl;
// }
// };
// int main()
// {
// A obj1;
// A *ptr;
// ptr=&obj1;//Pointer to object
// ptr->getdata();
// ptr->showdata();
// (*ptr).getdata();
// (*ptr).showdata();
// }

// #include<iostream>
// using namespace std;
// class example{
//     int x;
//     public:
//     void getdata(int a){
//         x = a;
//     }
//     void show(){
//         cout<<"Value of x: "<<x<<endl;
//     }
// };
// int main(){
//     int n;
//     cout<<"Enter the number of objects: "<<endl;
//     cin>>n;
//     example *p = new example[n];
//     example *d = p;
//     example *flag = p;

//     int a;
//     for(int i = 0;i<n;i++){
//         cout<<"enter value: "<<endl;
//         cin>>a;
//         p->getdata(a);
//         p++;
//     }
//     for(int i=0;i<n;i++){
//         d->show();
//         d++;
//     }
//     delete[]flag; //deallocation of memory.

//     return 0;
// }


// ------------------------Pointer to Data Member--------------------------------
    // 1. When a pointer stores the address of Class's data member , it is said to be pointer to data member.
    // 2. Value of Class's data member will be accessed through pointer outside of the class.

// #include<iostream>
// using namespace std;
// class Test{
//     public:
//     int x;
//     void show_data();
// };
// void Test::show_data(){
//     cout<<"x = "<<x<<endl;
// }
// int main(){
//     // Test t; // object is created at compile time.
//     int Test::*ptr=&Test::x;
//     // t.*ptr = 20; // .* = member dereferencing operator.
//     // t.show_data();
//     Test *tp = new Test;
//     tp->*ptr = 80;
//     tp->show_data();
//     (*tp).*ptr = 70;
//     tp->show_data();
//     return 0;
// }

// this pointer: It is inbuilt pointer to object which points towards current object. It is by default passed implicit argument hidden to all non static member functions. when we print 'this' it will print the address of invoking object. As invoking object is changed, address hold by 'this' will be changed and it will hold the address of current invoking object.

// #include<iostream>
// using namespace std;

// class Test{

//     int x;

//     public:

//     void setX(int x){
//         this->x=x;  // 'this' pointer is used to distinguish among local parameter of a function and class's data member if they both have same name.
//     }

//     void print(){
//         cout<<"x = "<<x<<endl;
//         cout<<"Address of current object: "<<this<<endl;
//     }

// };

// int main(){

//     Test obj, obj1, obj2;

//     int x = 20;
//     int x1 = 30;
//     int x2 = 40;

//     obj.setX(x);
//     obj.print();

//     obj1.setX(x1);
//     obj1.print();

//     obj2.setX(x2);
//     obj2.print();

//     return 0;

// }


// #include<iostream>
// using namespace std;

// int main(){
//     int arr[20];
//     int n, max;
//     cout<<"enter the size of array"<<endl;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<"Array is: "<<endl;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     max = arr[0];
//     for(int i=0;i<n;i++){
//         if(arr[i]>max){
//             max = arr[i];
//         }
//     }
//     cout<<"\nLargest element from the array is: "<<max<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class Largest{
//     int arr[20];
//     int n, max;
//     public: 
//     void getdata(int a){
//         n = a;
//         cout<<"Enter array elements"<<endl;
//         for(int i=0;i<n;i++){
//             cin>>arr[i];
//         }
//     }
//     int maximum(){
//         max = arr[0];
//         for(int i = 0;i<n;i++){
//             if(arr[i]>max){
//                 max=arr[i];
//             }
//         }
//         return max;
//     }
// };
// int main(){
//     Largest obj;
//     int val;
//     cout<<"enter value"<<endl;
//     cin>>val;
//     obj.getdata(val);
//     cout<<"Largest element is: "<<obj.maximum()<<endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// class LinearSearch {
//     int* data;
//     int size;
// public:
//     LinearSearch(int arr[], int length) : data(arr), size(length) {}
//     int incrementalLinearSearch(int target) {
//         for (int i = 0; i < size; ++i) {
//             if (data[i] == target) {
//                 return i;
//             }
//         }
//         return -1;
//     }
// };
// int main() {
//     int numbers[10];
//     int n;
//     cout<<"enter the size of array"<<endl;
//     cin>>n;
//     for(int i=0;i<n;i++){
//     cin>>numbers[i];
//     }
//     int length = sizeof(numbers) / sizeof(numbers[0]);
//     LinearSearch search(numbers, length);
//     int target;
//     cout<<"Enter target"<<endl;
//     cin>>target;
//     int result = search.incrementalLinearSearch(target);
//     if (result != -1) {
//         cout << "Element " << target << " found at index " << result << endl;
//     } else {
//         cout << "Element " << target << " not found." << endl;
//     }
//     return 0;
// }

// #include<iostream> 
// using namespace std; 
// class task  
// { 
// 	int a[100],n,max,min; 
// 	public: 
// 		void input() 
// 		{ 
// 			cout<<"\nEnter value of n:"; 
// 			cin>>n; 
// 			cout<<"\nEnter array elements:"; 
// 			for(int i=0;i<n;i++) 
// 			{ 
// 				cin>>a[i]; 
// 			} 
// 		} 
// 		void swapping() 
// 		{  
// 		    cout<<"\nArray before swapping\n"; 
// 		    for(int i=0;i<n;i++) 
// 		    { 
// 		    	cout<<a[i]<<" "; 
// 			} 
// 		    int s_index=0,l_index=0,temp; 
// 			max=a[0]; 
// 			min=a[0]; 
// 			for(int i=1;i<n;i++) 
// 			{ 
// 				if(a[i]>max) 
// 				{ 
// 					max=a[i]; 
// 					l_index=i; 
// 				} 
// 				else if(a[i]<min) 
// 				{ 
// 					min=a[i]; 
// 					s_index=i; 
// 				} 
// 			} 
// 			temp=a[l_index]; 
// 			a[l_index]=a[s_index]; 
// 			a[s_index]=temp; 
// 			cout<<"\nArray after swapping\n"; 
// 		    for(int i=0;i<n;i++) 
// 		    { 
// 		    	cout<<a[i]<<" "; 
// 			} 
// 		} 
// }; 
// int main() 
// { 
// 	task obj1,obj2; 
// 	obj1.input(); 
// 	obj1.swapping(); 
// 	obj2.input(); 
// 	obj2.swapping(); 
// 	return 0; 
// }


// WAP for reading and displaying 2d array elements using class and objects

// #include<iostream>
// using namespace std;
// class task{
//     int arr[20][20];
//     int r,c;
//     public:
//     void read(){
//         cout<<"enter row size"<<endl;
//         cin>>r;
//         cout<<"enter column size"<<endl;
//         cin>>c;
//         cout<<"enter 2d array elements"<<endl;
//         for(int i=0;i<r;i++){
//             for(int j=0;j<c;j++){
//                 cin>>arr[i][j];
//             }
//         }
//     }
//     void display(){
//         cout<<"2D array is: "<<endl;
//         for(int i=0;i<r;i++){
//             for(int j=0;j<c;j++){
//                 cout<<arr[i][j]<<" ";
//             }
//             cout<<endl;
//         }
//     }
// };
// int main(){
//     task obj1, obj2;
//     obj1.read();
//     obj1.display();
//     obj2.read();
//     obj2.display();
//     return 0;
// }

#include<iostream>
using namespace std;
class course{
    int x,y;
    public:
    void Initialize(int xx){
        x = ++xx;
    }
    void display(){
        cout<<--x<<" ";
    }
};
int main(){
    course obj;
    obj.Initialize(20);
    obj.display();
    int* p = (int*)&obj;
    *p = 5;
    obj.display();
    return 0;
}