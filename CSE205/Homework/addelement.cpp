// // // // #include<iostream>
// // // // using namespace std;

// // // // int main(){
// // // //     int a[20],size,pos,k;
// // // //     cout<<"Enter the size of array: ";
// // // //     cin>>size;
// // // //     cout<<"ENter the element: ";
// // // //     for(k=1;k<=size;k++){
// // // //         cin>>a[k];
// // // //     }

// // // //     cout<<"ENter the number you want to delete: ";
// // // //     cin>>pos;
// // // //     for(k=1;k<=size;k++){
// // // //         a[k]=a[k+1];
// // // //     }
// // // //     size--;

// // // //     cout<<"Element after deletion: ";
// // // //     for(k=1;k<=size;k++){
// // // //         cout<<endl<<a[k];
// // // //     }
// // // // }

// // // #include<iostream>
// // // using namespace std;

// // // int main(){
// // //     int a[20],size,pos,k;
// // //     cout<<"Enter the size of array: ";
// // //     cin>>size;
// // //     cout<<"ENter the element: ";
// // //     for(k=1;k<=size;k++){
// // //         cin>>a[k];
// // //     }

// // //     cout<<"ENter the number you want to delete: ";
// // //     cin>>pos;
// // //     for(k=1;k<=size;k++){
// // //         a[k]=a[k+1];
// // //     }
// // //     size--;

// // //     cout<<"Element after deletion: ";
// // //     for(k=1;k<=size;k++){
// // //         cout<<endl<<a[k];
// // //     }
// // // }

// // //--- insertion of array

// // int main(){
// //     int a[20],size,pos,num,k;
// //     cout<<"ENter the size: ";
// //     cin>>size;

// //     cout<<"ENter the element: ";
// //     for(k=0;k<size;k++){
// //         cin>>a[k];
// //     }

// //     cout<<"ENter the number you want to insert: ";
// //     cin>>num;

// //     cout<<"ENter the pos number: ";
// //     cin>>pos;

// //     for(k=size-1;k>=pos-1;k--){
// //         a[k+1]=a[k];
// //     }
// //     a[pos-1]=num;
// //     size++;

// //     for(k=0;k<size;k++){
// //         cout<<endl<<a[k];
// //     }
// // }

// int main(){
//     int a[20],size,pos,k;
//     cout<<"Enter the size of array: ";
//     cin>>size;
//     cout<<"ENter the element: ";
//     for(k=0;k<=size-1;k++){
//         cin>>a[k];
//     }


//     for(k=0;k<size-1;k++){
//         a[k]=a[k+1];
//     }
//     size--;

//     cout<<"Element after deletion: ";
//     for(k=0;k<=size-1;k++){
//         cout<<endl<<a[k];
//     }
// }