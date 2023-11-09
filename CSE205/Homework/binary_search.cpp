// #include<iostream>
// using namespace std;

// int main(){
//     int arr[10]={2,4,6,8,10,12,14,16,18,20};
//     int lb,ub,item,loc;
//     lb=arr[0];
//     ub=arr[9];
//     cout<<"Enter the item"<<endl;
//     cin>>item;
//     int beg = lb, end = ub;
//     int mid = (beg+end)/2;
//     while(beg<=end && arr[mid]!=item){
//         if(item<arr[mid]){
//             end=mid-1;
//         }
//         else{
//             beg=mid+1;
//         }
//         mid=int(beg+end)/2;
//     }
//     if(arr[mid]==item){
//         loc=mid;  
//     }
//     else{
//         cout<<"invalid"<<endl;
//         return 0;
//     }
//      cout<<arr[loc]<<endl;

//     return 0;
// }
// // #include <iostream>
// // #include <vector>

// // int main() {
// //     std::vector<int> arr;
// //     int size, target;

// //     std::cout << "Enter the size of the sorted array: ";
// //     std::cin >> size;

// //     std::cout << "Enter a sorted array of integers: ";
// //     for (int i = 0; i < size; ++i) {
// //         int num;
// //         std::cin >> num;
// //         arr.push_back(num);
// //     }

// //     std::cout << "Enter the target value to search for: ";
// //     std::cin >> target;

// //     int left = 0;
// //     int right = size - 1;
// //     int result = -1;

// //     while (left <= right) {
// //         int mid = left + (right - left) / 2;

// //         if (arr[mid] == target) {
// //             result = mid;
// //             break;
// //         } else if (arr[mid] < target) {
// //             left = mid + 1;
// //         } else {
// //             right = mid - 1;
// //         }
// //     }

// //     if (result != -1) {
// //         std::cout << "Target value " << target << " found at index " << result << "." << std::endl;
// //     } else {
// //         std::cout << "Target value " << target << " not found in the array." << std::endl;
// //     }

// //     return 0;
// // }
#include <iostream>

int main() {
    int arr[100];
    int size, target;

    std::cout << "Enter the size of the sorted array: ";
    std::cin >> size;

    std::cout << "Enter a sorted array of integers: ";
    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }

    std::cout << "Enter the target value to search for: ";
    std::cin >> target;

    int left = 0;
    int right = size - 1;
    int result = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            result = mid;
            break;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    if (result != -1) {
        std::cout << "Target value " << target << " found at index " << result << "." << std::endl;
    } else {
        std::cout << "Target value " << target << " not found in the array." << std::endl;
    }

    return 0;
}
