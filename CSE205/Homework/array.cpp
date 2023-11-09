// -------------Traversing in array----------------

// #include<iostream>
// using namespace std;

// int main(){
//     int a[10]={2,4,6,8,10,12,14,16,18,20};
//     for(int i=0;i<=9;i++){
//         cout<<a[i]<<endl;
//     }
//     return 0;
// }

// -------------------------Insertion in array------------------------

// *************************At the beginning***************************

// #include<iostream>
// using namespace std;

// int main(){
//     int a[10],n,i,item;
//     cout<<"Enter the size of array"<<endl;
//     cin>>n;
//     cout<<"Enter the elements in array"<<endl;
//     for(i=0;i<n;i++){
//         cin>>a[i];
//     }
//     cout<<"Enter the element to add"<<endl;
//     cin>>item;
//     n++;
//     for(i=n;i>1;i--){
//         a[i-1]=a[i-2];
//     }
//     a[0]=item;
//     cout<<"Final array: ";
//     for(i=0;i<n;i++){
//         cout<<a[i]<<" ";
//     }
//     return 0;
// }


// -----------------------------------In the End-----------------------------------

// #include<iostream>
// using namespace std;

// int main(){
//     int a[10],n,i,item;
//     cout<<"Enter the size of array"<<endl;
//     cin>>n;
//     cout<<"Enter the elements in the array"<<endl;
//     for(i=0;i<n;i++){
//         cin>>a[i];
//     }
//     cout<<"enter the item"<<endl;
//     cin>>item;
//     n++;
//     a[n-1]=item;
//     cout<<"Final array"<<endl;
//     for(i=0;i<n;i++){
//         cout<<a[i]<<endl;
//     }
//     return 0;
// }

// --------------------------------At a specific location-------------------------

// #include<iostream>
// using namespace std;

// int main(){
//     int a[10],n,item,loc,i;
//     cout<<"enter the size of array"<<endl;
//     cin>>n;
//     cout<<"enter the elements"<<endl;
//     for(i=0;i<n;i++){
//         cin>>a[i];
//     }
//     cout<<"enter the item"<<endl;
//     cin>>item;
//     cout<<"enter the location"<<endl;
//     cin>>loc;
//     n++;
//     for(i=n-1;i>=loc-1;i--){
//         a[i+1]=a[i];
//     }
//     a[loc-1]=item;
//     cout<<"Final array"<<endl;
//     for(i=0;i<n;i++){
//         cout<<a[i];
//     }

//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     char a[10],item;
//     int n,loc,i;
//     cout << "enter the size of array" << endl;
//     cin >> n;
//     cout << "enter the elements" << endl;
//     for(i = 0; i < n; i++){
//         cin>>a[i];
//     }
//     cout << "enter the item" << endl;
//     cin>>item;
//     cout << "enter the location (index)" << endl;
//     cin>>loc;

//     if(loc >= 0 && loc < n) {
//         n++;
//         for(i = n-1; i >= loc; i--){
//             a[i] = a[i-1];
//         }
//         a[loc] = item;

//         cout << "Final array" << endl;
//         for(i = 0; i < n; i++){
//             cout << a[i] << " ";
//         }
//     } else {
//         cout << "Invalid location (index)." << endl;
//     }

//     return 0;
// }



// ---------------------deletion-------------------------

// #include <stdio.h>

// int main() {
//     int arr[100];
//     int size, loc, i;

//     printf("Enter the size of the array: ");
//     scanf("%d", &size);

//     printf("Enter the elements of the array: ");
//     for (i = 0; i < size; ++i) {
//         scanf("%d", &arr[i]);
//     }

//     printf("Enter the location (index) to delete: ");
//     scanf("%d", &loc);

//     if (loc >= 0 && loc < size) {
//         // Delete the element at the specified location
//         for (i = loc; i < size - 1; ++i) {
//             arr[i] = arr[i + 1];
//         }
//         size--;

//         printf("Array after deletion:\n");
//         for (i = 0; i < size; ++i) {
//             printf("%d ", arr[i]);
//         }
//         printf("\n");
//     } else {
//         printf("Invalid location (index).\n");
//     }

//     return 0;
// }
