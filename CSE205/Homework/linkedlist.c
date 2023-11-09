// #include<stdio.h>
// #include<stdlib.h>
// // --------------------------------Stucture Declaration-----------------------
// struct node{
//     int val;
//     struct node* next;
// };
// void display(struct node *newnode){
//     while(newnode!=NULL){
//         printf("%d->",newnode->val);
//         newnode = newnode->next;
//     }
// }
// int main(){

// // ----------------------------Head Node Creation-----------------------------------
//     struct node *head = NULL;
//     struct node *node1 = NULL;
//     struct node *node2 = NULL;
//     struct node *node3 = NULL;

// // -------------------------------Memory Allocation--------------------------------
//     head = (struct node *)malloc(sizeof(struct node));
//     node1 = (struct node *)malloc(sizeof(struct node));
//     node2 = (struct node *)malloc(sizeof(struct node));
//     node3 = (struct node *)malloc(sizeof(struct node));

// // -----------------------------Dereferencing (Value Allocation)---------------------------
//     head->val=10;
//     head->next=node1;
//     node1->val=20;
//     node1->next=node2;
//     node2->val=30;
//     node2->next=node3;
//     node3->val=40;
//     node3->next=NULL;

//     display(head);

//     return 0;

// -----------------------------Insertion at the end--------------------------------

// #include<stdio.h>
// #include<stdlib.h>

// struct node{
//     int data;
//     struct node* next;
// };

// struct node *head;

// void addLast(struct node **head, int val){
//     struct node *newnode = (struct node*)malloc(sizeof(struct node));
//     newnode->data=val;
//     newnode->next=NULL;
//     if(*head==NULL){
//         *head=newnode;
//     }
//     else{
//         struct node *lastnode = *head;
//         while(lastnode->next!=NULL){
//             lastnode=lastnode->next;
//         }
//     lastnode->next=newnode;
//     }
// }

// void display(struct node *newnode){
//     struct node *temp=head;
//     while(newnode!=NULL){
//         printf("%d->",newnode->data);
//         newnode=newnode->next;
//     }
//     printf("NULL\n");
// }

// int main(){

//     struct node *head=NULL;
//     addLast(&head,10);
//     addLast(&head,20);
//     addLast(&head,30);
//     display(head);

//     return 0;
// }

// // -----------------------------Insertion at the beginning----------------------------------------

// #include<stdio.h>
// #include<stdlib.h>
// struct Node{
//     int data;
//     struct Node* next;
// };
// struct Node* head;
// void Insert(int x){
//     struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
//     temp->data=x;
//     temp->next=head;
//     head=temp;
// }
// void Print(){
//     struct Node* temp=head;
//     printf("List is: \n");
//     while(temp!=NULL){
//         printf("%d\n",temp->data);
//         temp=temp->next;
//     }
//     printf("\n");
// }
// int main(){
//     head=NULL;
//     printf("Enter how many numbers?");
//     int n,i,x;
//     scanf("%d",&n);
//     for(i=0;i<n;i++){
//     printf("Enter the number\n");
//     scanf("%d",&x);
//     Insert(x);
//     }
//     Print();
//     return 0;
// }

#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
void addLast(struct node **head,int val){
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data=val;
    newnode->next=NULL;
    if(*head==NULL){
        *head=newnode;
    }
    else{
        struct node *lastnode=*head;
        while(lastnode->next!=NULL){
            lastnode=lastnode->next;
        }
        lastnode->next=newnode;
    }
}
int searchnode(struct node* head, int key){
    struct node* temp = head;
    while(temp!=NULL){
        if(temp->data==key){
            return 1;
        }
        temp=temp->next;
    }
    return -1;
}
int main(){
   struct node* head = NULL;
   int n, val;

   printf("Enter the number of elements: ");
   scanf("%d", &n);

   for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &val);
        addLast(&head, val);
   }
    int target;
    printf("enter target\n");
    scanf("%d",&target);
    if(searchnode(head,target)==1){
        printf("Search Found\n");
    }
    else{
        printf("Search not found\n");
    }
    return 0;
}


// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// struct node {
//    int data;
//    struct node *next;
// };
// struct node *head = NULL;
// struct node *current = NULL;

// // display the list
// void printList(){
//    struct node *p = head;
//    printf("\n[");

//    //start from the beginning
//    while(p != NULL) {
//       printf(" %d ",p->data);
//       p = p->next;
//    }
//    printf("]");
// }

// //insertion at the beginning
// void insertatbegin(int data){

//    //create a link
//    struct node* newnode = (struct node*) malloc(sizeof(struct node));
//    newnode->data = data;

//    // point it to old first node
//    newnode->next = head;

//    //point first to new first node
//    head = newnode;
// }
// void insertatend(int data){

//    //create a link
//    struct node* newnode = (struct node*) malloc(sizeof(struct node));
//    newnode->data = data;
//    struct node *temp = head;

//    // point it to old first node
//    while(temp->next != NULL)
//       temp = temp->next;

//    //point first to new first node
//    temp->next = newnode;
// }
// void insertafternode(struct node *loc, int data){
//    struct node* newnode = (struct node*) malloc(sizeof(struct node));
//    newnode->data = data;
//    newnode->next = loc->next;
//    loc->next = newnode;
// }
// void deleteatbegin(){
// struct node * temp=(struct node*)malloc(sizeof(struct node));
// temp=head;
// head = head->next;
// free(temp);
// }
// void deleteatend(){
//    struct node *linkedlist = head;
//    while (linkedlist->next->next != NULL)
//       linkedlist = linkedlist->next;
//    linkedlist->next = NULL;
// }
// void deletenode(int key){
//    struct node *temp = head, *prev;
//    if (temp != NULL && temp->data == key) {
//       head = temp->next;
//       return;
//    }

   // Find the key to be deleted
//    while (temp != NULL && temp->data != key) {
//       prev = temp;
//       temp = temp->next;
//    }

//    // If the key is not present
//    if (temp == NULL) return;

//    // Remove the node
//    prev->next = temp->next;
// }
// int searchlist(int key){
//    struct node *temp = head;
//    while(temp != NULL) {
//       if (temp->data == key) {
//          return 1;
//       }
//       temp=temp->next;
//    }
//    return 0;
// }
// int main(){
//    int k=0;
//    insertatbegin(12);
//    insertatbegin(22);
//    insertatend(30);
//    insertatend(44);
//    insertatbegin(50);
//    insertafternode(head->next->next, 33);
//    printf("Linked List: ");

   // print list
//    printList();
//    deleteatbegin();
//    deleteatend();
//    deletenode(12);
//    printf("\nLinked List after deletion: ");

   // print list
//    printList();
//    insertatbegin(4);
//    insertatbegin(16);
//    printf("\nUpdated Linked List: ");
//    printList();
//    k = searchlist(16);
//    if (k == 1)
//       printf("\nElement is found");
//    else
//       printf("\nElement is not present in the list");
   //  return 0;
// }


// #include<stdio.h>
// #include<stdlib.h>

// struct node{
//    int data;
//    struct node* next;
// };

// void insert(struct node** head, int data){
//    struct node* newnode = (struct node*)malloc(sizeof(struct node));
//    newnode->data = data;
//    newnode->next = NULL;

//    if(*head==NULL){
//       *head = newnode;
//       return;
//    }
//    struct node* temp = *head;
//    while(temp->next!=NULL){
//       temp = temp->next;
//    }
//    temp->next = newnode;
// }

// void reverse(struct node** head){
//    struct node* prev = NULL;
//    struct node* curr = *head;
//    struct node* next = NULL;

//    while(curr!=NULL){
//       next = curr->next;
//       curr->next = prev;
//       prev = curr;
//       curr = next;
//    }
//    *head = prev;
// }

// void display(struct node* head){
//    struct node* temp = head;
//    while(temp!=NULL){
//       printf("%d -> ",temp->data);
//       temp = temp->next;
//    }
//    printf("NULL\n");
// }

// int main(){
//    struct node* head = NULL;
//    int n, val;
//    printf("Enter the number of elements: \n");
//    scanf("%d",&n);
//    printf("Enter the elements: \n");
//    for(int i=0;i<n;i++){
//       scanf("%d",&val);
//       insert(&head,val);
//    }

//    printf("Original List: \n");
//    display(head);

//    reverse(&head);

//    printf("Reversed List: \n");
//    display(head);

//    return 0;
// }


// #include<stdio.h>
// #include<stdlib.h>

// struct node{
//    int data;
//    struct node* next;
// };

// void insert(struct node** head, int data){
//    struct node* newnode = (struct node*)malloc(sizeof(struct node));
//    newnode->data = data;
//    newnode->next = NULL;

//    if(*head==NULL){
//       *head = newnode;
//       return;
//    }
//    struct node* temp = *head;
//    while(temp->next!=NULL){
//       temp = temp->next;
//    }
//    temp->next = newnode;

// }
// void circ(struct node* head){
//    struct node* temp = head;
//    while(temp->next!=NULL){
//       temp = temp->next;
//    }
//    temp->next=head;
// }

// void display(struct node* head){
//    struct node* temp = head;
//    while(temp->next!=head){
//       printf("%d -> ",temp->data);
//       temp = temp->next;
//    }
//    printf("NULL\n");
// }

// int main(){
//    struct node* head = NULL;
//    int n, val;
//    printf("Enter the number of elements: \n");
//    scanf("%d",&n);
//    printf("Enter the elements: \n");
//    for(int i=0;i<n;i++){
//       scanf("%d",&val);
//       insert(&head,val);
//    }

//    printf("Original List: \n");
//    display(head);
//    circ(head);
//    display(head);

//    return 0;
// }


