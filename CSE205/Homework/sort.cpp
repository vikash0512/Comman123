// bubble sort-----  31 12 19 6 5 13
// search 6 in this list using binary search
// delete 5 from the list 
// insertion of 10 at correct location
// print the updated list


#include<iostream>
using namespace std;

int main(){
    int arr[10] = {31, 12, 19, 6, 5, 13};
    int n = 6;

// ----------------Bubble sort of the array------------------

    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
               
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "Sorted array: "<<endl;
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " "<<endl;
    }

    // ----------------------Binary search for 6-------------------

    int target = 6;
    int Lb = 0;
    int Ub = n - 1;
    int Loc = -1;

    while (Lb <= Ub) {
        int mid = Lb + (Ub - Lb) / 2;

        if (arr[mid] == target) {
            Loc = mid;
            break;
        } else if (arr[mid] < target) {
            Lb = mid + 1;
        } else {
            Ub = mid - 1;
        }
    }

    if (Loc != -1) {
        cout << "Target value " << target << " found at index " << Loc << "." << endl;
    } else {
        cout << "Target value " << target << " not found in the array." << endl;
    }

// -------------deleting 5 from the list----------------

    --n;

    for(int i=0;i<n;i++){
        arr[i]=arr[i+1];
    }
    cout<<"Array after deletion:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    n++;
    int pos = 6, value = 10;
    for (int i=n-1;i>=pos-1;i--){
        arr[i+1]=arr[i];
        arr[pos-1]=value;
    }
    cout<<"Updated array: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
