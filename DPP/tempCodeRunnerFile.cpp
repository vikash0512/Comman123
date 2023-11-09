#include <iostream>
using namespace std;

void displayHeights(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            swap(arr[i], arr[minIndex]);
            cout << "Height order of students after iteration " << i + 1 << endl;
            displayHeights(arr, n);
        }
    }
}

int main() {
    int n;
    cout << "Enter the number of students: ";
    cin >> n;
    
    int heights[n];
    cout << "Enter the heights of students: ";
    for (int i = 0; i < n; i++) {
        cin >> heights[i];
    }
    
    cout << "Student's height order before sorting:" << endl;
    displayHeights(heights, n);
    
    selectionSort(heights, n);
    
    cout << "After the final comparison of all students, the height order becomes:" << endl;
    displayHeights(heights, n);
    
    return 0;
}
