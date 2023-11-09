#include <stdio.h>

int main() {
    int arr[100];
    int size, target;

    printf("Enter the size of the sorted array: ");
    scanf("%d", &size);

    printf("Enter a sorted array of integers: ");
    for (int i = 0; i < size; ++i) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the target value to search for: ");
    scanf("%d", &target);

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
        printf("Target value %d found at index %d.\n", target, result);
    } else {
        printf("Target value %d not found in the array.\n", target);
    }

    return 0;
}
