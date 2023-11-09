// ----------------------Selection sort-------------------------
// #include <iostream>
// using namespace std;
// int main() {
//     int n=5;
//     int arr[5]={10,6,4,3,5};
//     for (int i = 0; i < n - 1; ++i) {
//         int min = i;
//         for (int j = i + 1; j < n; ++j) {
//             if (arr[j] < arr[min]) {
//                 min = j;
//             }
//         }
//         if (min != i) {
//             int temp = arr[i];
//             arr[i] = arr[min];
//             arr[min] = temp;
//         }
//     }
//     for (int i = 0; i < n; ++i) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }

// -----------------------------Insertion sort---------------------------

// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout << "Enter n: ";
//     cin >> n;
//     int arr[n];
//     cout << "Enter " << n << " elements: ";
//     for (int i = 0; i < n; ++i) {
//         cin >> arr[i];
//     }
//     for (int i = 1; i < n; ++i) {
//         int key = arr[i];
//         int j = i - 1;
//         while (j >= 0 && arr[j] > key) {
//             arr[j + 1] = arr[j];
//             j = j - 1;
//         }
//         arr[j + 1] = key;
//     }
//     int target;
//     cout<<"Enter the target: ";
//     cin >> target;
//     int left = 0;
//     int right = n - 1;
//     int result = -1;
//     while (left <= right) {
//         int mid = left + (right - left) / 2;
//         if (arr[mid] == target) {
//             result = mid;
//             break;
//         } else if (arr[mid] < target) {
//             left = mid + 1;
//         } else {
//             right = mid - 1;
//         }
//     }
//     if (result != -1) {
//         cout <<"Target index is: "<< result << endl;
//     } else {
//         cout << "Target " << target << " not found." << endl;
//     }
//     return 0;
// }


// ----------------------------WAP to reverse a string -------------------

#include <iostream>
using namespace std;
int main() {
    char a[20]; 
    char b[20];
    int n;
    cout<<"Enter the size of string"<<endl;
    cin>>n; 
    cout << "Enter a string: ";
    for(int i=0;i<n;++i){
        cin>>a[i];
    }
    int length = n;
    for (int i = 0; i < length; ++i) {
        b[i] = a[length - 1 - i];
    }
cout << "Reversed: " << b << endl;
    return 0;
}
