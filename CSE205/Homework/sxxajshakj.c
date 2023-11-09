// #include <stdio.h>
// #include <stdlib.h>

// struct node {
//     int data;
//     struct node* next;
// };

// struct node* head = NULL; 

// void create(int value) {
//     struct node* newNode = (struct node*)malloc(sizeof(struct node));
//     newNode->data = value;
//     if (head == NULL) {
//         head = newNode;
//         newNode->next = head;
//     } else {
//         struct node* temp = head;
//         while (temp->next != head) {
//             temp = temp->next;
//         }
//         temp->next = newNode;
//         newNode->next = head;
//     }
//     printf("\nInsertion success!!!");
// }

// void display() {
//     if (head == NULL) {
//         printf("\nList is Empty!!!");
//     } else {
//         struct node* temp = head;
//         printf("\nList elements are: \n");
//         do {
//             printf("%d ---> ", temp->data);
//             temp = temp->next;
//         } while (temp != head);
//         printf("%d ---> ", temp->data);
//     }
// }

// int main() {
//     int n, value;
//     printf("Enter the number of elements: ");
//     scanf("%d", &n);

//     for (int i = 0; i < n; i++) {
//         printf("Enter element %d: ", i + 1);
//         scanf("%d", &value);
//         create(value);
//     }

//     display();

//     return 0;
// }
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

void insert(struct node** head, int data) {
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = NULL;

    if (*head == NULL) {
        *head = newnode;
        return;
    }
    struct node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newnode;
}

void circ(struct node* head) {
    if (head == NULL){
        return;
    }
    struct node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next->next = head;
}

void display(struct node* head) {
    struct node* temp = head;
    if (head != NULL) {
        do {
            printf("%d -> ", temp->data);
            temp = temp->next;
        } while (temp != head);
    }
    printf("%d",temp->data);
}

int main() {
    struct node* head = NULL;
    int n, val;
    printf("Enter the number of elements: \n");
    scanf("%d", &n);
    printf("Enter the elements: \n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &val);
        insert(&head, val);
    }

    printf("Original List: \n");
    display(head);
    circ(head);
    printf("Circular List: \n");
    display(head);

    return 0;
}