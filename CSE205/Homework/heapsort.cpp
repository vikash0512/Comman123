#include<iostream>
using namespace std;

void maxheap(int a[], int beg, int end);  

void heapify(int a[], int f, int size);

void maxheap(int a[], int beg, int end){
    for(int i = (end / 2); i >= beg; i--){  
        heapify(a, i, end);
    }
}

void heapify(int a[], int f, int size){
    int max = f, l = 2*f, r = 2*f + 1, t;

    if (l <= size && a[l] > a[max]){  
        max = l;
    }
    if (r <= size && a[r] > a[max]){  
        max = r;
    }

    if (max != f) {
        t = a[f];
        a[f] = a[max];
        a[max] = t;
        heapify(a, max, size);
    }
}

void heapsort(int a[], int size){
    int t, i;

    maxheap(a, 0, size - 1);

    for(i = size - 1; i >= 1; i--){

        t = a[0];
        a[0] = a[i];
        a[i] = t;

        heapify(a, 0, i - 1);
    }
}

int main(){

    int n;

    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    heapsort(arr, n);  

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
