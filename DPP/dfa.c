// #include <stdio.h>
// #include <string.h>

// int main() {
//     int size;
//     char words[100][100];
//     char letter;


//     scanf("%d", &size);


//     for (int i = 0; i < size; ++i) {
//         scanf("%s", words[i]);
//     }


//     scanf(" %c", &letter);

//     int count = 0;
//     for (int i = 0; i < size; ++i) {
//         if (words[i][0] == letter || words[i][0] == (letter + ('A' - 'a')) || words[i][0] == (letter - ('A' - 'a'))) {
//             count++;
//         }
//     }

//     printf("Count of words that start with '%c': %d\n", letter, count);

//     return 0;
// }

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

//     printf("Enter the location (1 to %d) to delete: ", size);
//     scanf("%d", &loc);

//     if (loc >= 1 && loc <= size) {
//         // Delete the element at the specified location
//         for (i = loc - 1; i < size - 1; ++i) {
//             arr[i] = arr[i + 1];
//         }
//         size--;

//         printf("Array after deletion:\n");
//         for (i = 0; i < size; ++i) {
//             printf("%d ", arr[i]);
//         }
//         printf("\n");
//     } else {
//         printf("Invalid location (1 to %d).\n", size);
//     }

//     return 0;
// }
// #include <stdio.h>

// int main() {
//     int arr[100];
//     int size;

//     printf("Enter the size of the array: ");
//     scanf("%d", &size);

//     if (size < 2) {
//         printf("Array size must be at least 2.\n");
//         return 1;
//     }

//     printf("Enter the elements of the array: ");
//     for (int i = 0; i < size; ++i) {
//         scanf("%d", &arr[i]);
//     }

//     int firstSmallest, secondSmallest;

//     if (arr[0] < arr[1]) {
//         firstSmallest = arr[0];
//         secondSmallest = arr[1];
//     } else {
//         firstSmallest = arr[1];
//         secondSmallest = arr[0];
//     }

//     for (int i = 2; i < size; ++i) {
//         if (arr[i] < firstSmallest) {
//             secondSmallest = firstSmallest;
//             firstSmallest = arr[i];
//         } else if (arr[i] < secondSmallest && arr[i] != firstSmallest) {
//             secondSmallest = arr[i];
//         }
//     }

//     printf("Second smallest element: %d\n", secondSmallest);

//     return 0;
// }
// #include <stdio.h>

// int main() {
//     int arr[100];
//     int size;

//     scanf("%d", &size);

//     for (int i = 0; i < size; ++i) {
//         scanf("%d", &arr[i]);
//     }

//     int firstSmallest = arr[0];
//     int secondSmallest = arr[1];

//     if (firstSmallest > secondSmallest) {

//         int temp = firstSmallest;
//         firstSmallest = secondSmallest;
//         secondSmallest = temp;
//     }

//     for (int i = 2; i < size; ++i) {
//         if (arr[i] < firstSmallest) {
//             secondSmallest = firstSmallest;
//             firstSmallest = arr[i];
//         } else if (arr[i] < secondSmallest && arr[i] != firstSmallest) {
//             secondSmallest = arr[i];
//         }
//     }

//     printf("Second smallest unique integer: %d\n", secondSmallest);

//     return 0;
// }


// #include <stdio.h>

// int main() {
//     int arr[100];
//     int n;

//     scanf("%d", &n);

//     for (int i = 0; i < n; ++i) {
//         scanf("%d", &arr[i]);
//     }

//         for (int i = 0; i < n - 1; ++i) {
//             for (int j = 0; j < n - i - 1; ++j) {
//                 if (arr[j] > arr[j + 1]) {
               
//                     int temp = arr[j];
//                     arr[j] = arr[j + 1];
//                     arr[j + 1] = temp;
//                 }
//             }
//     }

// printf("Second smallest unique integer: %d\n", &arr[1]);

//     return 0;
// }


// #include <stdio.h>
// #include <stdlib.h>

// void swap(int *a, int *b) {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// void reverse(int arr[], int start, int end) {
//     while (start < end) {
//         swap(&arr[start], &arr[end]);
//         start++;
//         end--;
//     }
// }

// void nextPermutation(int arr[], int n) {
//     int i = n - 2;
    
//     // Find the first element from the right that is smaller than its next element
//     while (i >= 0 && arr[i] >= arr[i + 1]) {
//         i--;
//     }
    
//     if (i >= 0) {
//         int j = n - 1;
        
//         // Find the rightmost element that is greater than arr[i]
//         while (j > i && arr[j] <= arr[i]) {
//             j--;
//         }
        
//         // Swap arr[i] and arr[j]
//         swap(&arr[i], &arr[j]);
//     }
    
//     // Reverse the remaining elements to get the next permutation
//     reverse(arr, i + 1, n - 1);
// }

// int main() {
//     int N;
    
//     printf("Enter the size of the array: ");
//     scanf("%d", &N);

//     int *nums = (int *)malloc(N * sizeof(int));
    
//     printf("Enter %d integers: ", N);
//     for (int i = 0; i < N; ++i) {
//         scanf("%d", &nums[i]);
//     }

//     nextPermutation(nums, N);

//     printf("Next permutation: ");
//     for (int i = 0; i < N; ++i) {
//         printf("%d ", nums[i]);
//     }
//     printf("\n");

//     free(nums);

//     return 0;
// }


// #include <stdio.h>
// int main() {
//     int s1, s2, s3;
//     scanf("%d", &s1);
//     int arr1[s1];
//     for (int i = 0; i < s1; i++) {
//         scanf("%d", &arr1[i]);
//     }
//     scanf("%d", &s2);
//     int arr2[s2];
//     for (int i = 0; i < s2; i++) {
//         scanf("%d", &arr2[i]);
//     }
//     s3 = s1 + s2;
//     int arr3[s3];
//     for (int i = 0; i < s1; i++) {
//         arr3[i] = arr1[i];
//     }
//     int k = s1;
//     for (int i = 0; i < s2; i++) {
//         arr3[k] = arr2[i];
//         k++;
//     }
//     for (int i = 0; i < s3 - 1; i++) {
//         for (int j = 0; j < s3 - i - 1; j++) {
//             if (arr3[j] > arr3[j + 1]) {
//                 int temp = arr3[j];
//                 arr3[j] = arr3[j + 1];
//                 arr3[j + 1] = temp;
//             }
//         }
//     }
//     for (int i = 0; i < s3; i++) {
//         printf("%d ", arr3[i]);
//     }

//     return 0;
// }


// #include <stdio.h>
// #include <string.h>

// int main() {
//     int size1, size2;

//     printf("Enter the size of the first array: ");
//     scanf("%d", &size1);
//     char arr1[size1][100];

//     printf("Enter %d elements for the first array:\n", size1);
//     for (int i = 0; i < size1; i++) {
//         scanf("%s", arr1[i]);
//     }

//     printf("Enter the size of the second array: ");
//     scanf("%d", &size2);
//     char arr2[size2][100];

//     printf("Enter %d elements for the second array:\n", size2);
//     for (int i = 0; i < size2; i++) {
//         scanf("%s", arr2[i]);
//     }

//     printf("Merged array with unique combinations:\n");
//     for (int i = 0; i < size1; i++) {
//         for (int j = 0; j < size2; j++) {
//             printf("%s%s ", arr1[i], arr2[j]);
//         }
//     }

//     return 0;
// }
// #include <stdio.h>

// int main() {
//     int s1, s2;

//     printf("Enter the number of elements in the first array: ");
//     scanf("%d", &s1);
//     int arr1[s1];

//     printf("Enter %d elements for the first array:\n", s1);
//     for (int i = 0; i < s1; i++) {
//         scanf("%d", &arr1[i]);
//     }

//     printf("Enter the number of elements in the second array: ");
//     scanf("%d", &s2);
//     int arr2[s2];

//     printf("Enter %d elements for the second array:\n", s2);
//     for (int i = 0; i < s2; i++) {
//         scanf("%d", &arr2[i]);
//     }

//     // Merge the arrays
//     int arr3[s1 + s2];
//     for (int i = 0; i < s1; i++) {
//         arr3[i] = arr1[i];
//     }
//     for (int i = 0; i < s2; i++) {
//         arr3[s1 + i] = arr2[i];
//     }

//     // Find the minimum ingredient
//     int x = arr3[0];
//     for (int i = 1; i < s1 + s2; i++) {
//         if (arr3[i] < x) {
//             x = arr3[i];
//         }
//     }

//     printf("Minimum ingredient required: %d\n", x);

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int n, m;

//     printf("Enter the number of elements in the first array: ");
//     scanf("%d", &n);
//     int arr1[n];

//     printf("Enter %d elements for the first array:\n", n);
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr1[i]);
//     }

//     printf("Enter the number of elements in the second array: ");
//     scanf("%d", &m);
//     int arr2[m];

//     printf("Enter %d elements for the second array:\n", m);
//     for (int i = 0; i < m; i++) {
//         scanf("%d", &arr2[i]);
//     }

//     // Merge the arrays and find the minimum ingredient
//     int i = 0, j = 0;
//     int minIngredient = arr1[0]; // Assuming the first element is the minimum

//     while (i < n && j < m) {
//         if (arr1[i] < arr2[j]) {
//             if (arr1[i] < minIngredient) {
//                 minIngredient = arr1[i];
//             }
//             i++;
//         } else {
//             if (arr2[j] < minIngredient) {
//                 minIngredient = arr2[j];
//             }
//             j++;
//         }
//     }

//     while (i < n) {
//         if (arr1[i] < minIngredient) {
//             minIngredient = arr1[i];
//         }
//         i++;
//     }

//     while (j < m) {
//         if (arr2[j] < minIngredient) {
//             minIngredient = arr2[j];
//         }
//         j++;
//     }

//     printf("Minimum ingredient required: %d\n", minIngredient);

//     return 0;
// }

// #include <stdio.h>
// #include <stdbool.h>
// bool isWhitespace(char c) {
//     return c == ' ' || c == '\t' || c == '\n';
// }
// int main() {
//     char sentence[1000];
//     fgets(sentence, sizeof(sentence), stdin);
//     int wordCount = 0;
//     bool insideWord = false;
//     for (int i = 0; sentence[i] != '\0'; i++) {
//         if (isWhitespace(sentence[i])) {
//             insideWord = false;
//         } else if (!insideWord) {
//             insideWord = true;
//             wordCount++;
//         }
//     }
//     printf("%d", wordCount);
//     return 0;
// }

// #include <stdio.h>

// int binarySearch(int playlist[], int size, int target) {
//     int left = 0, right = size - 1;
//     while (left <= right) {
//         int mid = left + (right - left) / 2;
//         if (playlist[mid] == target) {
//             return mid;
//         } else if (playlist[mid] < target) {
//             left = mid + 1;
//         } else {
//             right = mid - 1;
//         }
//     }
//     return left;
// }

// int main() {
//     int N;
//     scanf("%d", &N);
//     int playlist[N];
//     for (int i = 0; i < N; i++) {
//         scanf("%d", &playlist[i]);
//     }
//     int target;
//     scanf("%d", &target);
//     int index = binarySearch(playlist, N, target);
//     printf("%d", index);

//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// int main() {
//     int n;
//     scanf("%d", &n);
//     int *records = (int *)malloc(n * sizeof(int));
//     if (records == NULL) {
//         printf("Memory allocation failed.\n");
//         return 1;
//     }
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &records[i]);
//     }
//     int item;
//     scanf("%d", &item);
//     int found = 0; 
//     for (int i = 0; i < n; i++) {
//         if (records[i] == item) {
//             found = 1;
//             break;
//         }
//     }
//     if (found) {
//         printf("Item found\n");
//     } else {
//         printf("Item not found\n");
//     }
//     free(records);
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// struct Node {
//     int data;
//     struct Node* next;
// };
// struct LinkedList {
//     struct Node* head;
// };
// void insertNode(struct LinkedList* list, int value) {
//     struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
//     newNode->data = value;
//     newNode->next = NULL;
//     if (list->head == NULL) {
//         list->head = newNode;
//     } else {
//         struct Node* current = list->head;
//         while (current->next != NULL) {
//             current = current->next;
//         }
//         current->next = newNode;
//     }
// }
// void displayList(struct LinkedList* list) {
//     struct Node* current = list->head;
//     if (current == NULL) {
//         printf("Linked List is empty.\n");
//         return;
//     }
//     printf("Linked List: ");
//     while (current != NULL) {
        
//         printf("%d ", current->data);
//         current = current->next;
//     }
//     printf("\n");
// }
// int main() {
//     struct LinkedList linkedList;
//     linkedList.head = NULL;
//     int value;
//     while (1) {
//         scanf("%d", &value);
//         if (value < 0) {
//             break;
//         }
//         insertNode(&linkedList, value);
//     }
//     displayList(&linkedList);
//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node in the linked list
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to calculate the length of the linked list
int lengthOfList(struct Node* header) {
    int length = 0;
    struct Node* current = header->next;
    while (current != header) {
        length++;
        current = current->next;
    }
    return length;
}

int main() {
    int n;
    scanf("%d", &n);

    struct Node* header = createNode(0); // Initialize the header node
    struct Node* current = header;

    for (int i = 0; i < n; i++) {
        int value;
        scanf("%d", &value);
        current->next = createNode(value);
        current = current->next;
    }

    int listLength = lengthOfList(header);
    printf("%d\n", listLength);

    // Free the memory allocated for the linked list
    struct Node* temp;
    current = header->next;
    while (current != header) {
        temp = current;
        current = current->next;
        free(temp);
    }
    free(header);

    return 0;
}
