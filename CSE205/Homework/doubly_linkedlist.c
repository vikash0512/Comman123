// #include <stdio.h>
// #include <stdlib.h>

// // Define the structure for a node in the linked list
// struct Node {
//     int data;
//     struct Node* next;
// };

// // Function to create a new node
// struct Node* createNode(int data) {
//     struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
//     newNode->data = data;
//     newNode->next = NULL;
//     return newNode;
// }

// // Function to insert a node at the beginning of the circular linked list
// void insertAtBeginning(struct Node** head, int data) {
//     struct Node* newNode = createNode(data);
//     if (*head == NULL) {
//         *head = newNode;
//         newNode->next = *head;
//     } else {
//         struct Node* temp = *head;
//         while (temp->next != *head) {
//             temp = temp->next;
//         }
//         temp->next = newNode;
//         newNode->next = *head;
//         *head = newNode;
//     }
// }

// // Function to display the circular linked list
// void display(struct Node* head) {
//     if (head == NULL) {
//         printf("Circular linked list is empty.\n");
//         return;
//     }
//     struct Node* current = head;
//     do {
//         printf("%d -> ", current->data);
//         current = current->next;
//     } while (current != head);
//     printf("\n");
// }

// int main() {
//     struct Node* head = NULL;

//     // Insert elements at the beginning of the circular linked list
//     insertAtBeginning(&head, 3);
//     insertAtBeginning(&head, 2);
//     insertAtBeginning(&head, 1);

//     // Display the circular linked list
//     printf("Circular Linked List: ");
//     display(head);

//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// // Define the structure for a node in the linked list
// struct Node {
//     int data;
//     struct Node* next;
// };

// // Function to create a new node
// struct Node* createNode(int data) {
//     struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
//     newNode->data = data;
//     newNode->next = NULL;
//     return newNode;
// }

// // Function to insert a node at the beginning of the circular linked list
// void insertAtBeginning(struct Node** head, int data) {
//     struct Node* newNode = createNode(data);
//     if (*head == NULL) {
//         *head = newNode;
//         newNode->next = *head;
//     } else {
//         struct Node* temp = *head;
//         while (temp->next != *head) {
//             temp = temp->next;
//         }
//         temp->next = newNode;
//         newNode->next = *head;
//         *head = newNode;
//     }
// }

// // Function to insert a node at the end of the circular linked list
// void insertAtEnd(struct Node** head, int data) {
//     struct Node* newNode = createNode(data);
//     if (*head == NULL) {
//         *head = newNode;
//         newNode->next = *head;
//     } else {
//         struct Node* temp = *head;
//         while (temp->next != *head) {
//             temp = temp->next;
//         }
//         temp->next = newNode;
//         newNode->next = *head;
//     }
// }

// // Function to delete a specific node from the circular linked list
// void deleteNode(struct Node** head, int key) {
//     if (*head == NULL) {
//         return; // List is empty, nothing to delete
//     }

//     struct Node* current = *head;
//     struct Node* prev = NULL;

//     // Find the node to be deleted
//     while (current->data != key) {
//         if (current->next == *head) {
//             printf("Node with value %d not found.\n", key);
//             return; // Node not found
//         }
//         prev = current;
//         current = current->next;
//     }

//     // If the node to be deleted is the only node in the list
//     if (current->next == *head) {
//         *head = NULL;
//         free(current);
//         return;
//     }

//     // If the node to be deleted is the first node
//     if (current == *head) {
//         struct Node* temp = *head;
//         while (temp->next != *head) {
//             temp = temp->next;
//         }
//         *head = (*head)->next;
//         temp->next = *head;
//         free(current);
//     } else {
//         prev->next = current->next;
//         free(current);
//     }
// }

// // Function to search for a specific node in the circular linked list
// int search(struct Node* head, int key) {
//     if (head == NULL) {
//         return 0; // List is empty, node not found
//     }

//     struct Node* current = head;
//     do {
//         if (current->data == key) {
//             return 1; // Node found
//         }
//         current = current->next;
//     } while (current != head);

//     return 0; // Node not found
// }

// // Function to display the circular linked list
// void display(struct Node* head) {
//     if (head == NULL) {
//         printf("Circular linked list is empty.\n");
//         return;
//     }
//     struct Node* current = head;
//     do {
//         printf("%d -> ", current->data);
//         current = current->next;
//     } while (current != head);
//     printf("\n");
// }

// int main() {
    // struct Node* head = NULL;
    // int n, data;

    // printf("Enter the number of elements: ");
    // scanf("%d", &n);

    // for (int i = 0; i < n; i++) {
    //     printf("Enter element %d: ", i + 1);
    //     scanf("%d", &data);
    //     insertAtEnd(&head, data);
    // }

//     printf("Circular Linked List: ");
//     display(head);

//     int deleteKey, searchKey;
//     printf("Enter a value to delete from the list: ");
//     scanf("%d", &deleteKey);
//     deleteNode(&head, deleteKey);

//     printf("Enter a value to search in the list: ");
//     scanf("%d", &searchKey);
//     if (search(head, searchKey)) {
//         printf("Node with value %d found.\n", searchKey);
//     } else {
//         printf("Node with value %d not found.\n", searchKey);
//     }

//     printf("Updated Circular Linked List: ");
//     display(head);

//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// struct Node {
//     int data;
//     struct Node* next;
// };

// struct Node* createNode(int data) {
//     struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
//     newNode->data = data;
//     newNode->next = NULL;
//     return newNode;
// }

// void insertAtBeginning(struct Node** head, int data) {
//     struct Node* newNode = createNode(data);
//     if (*head == NULL) {
//         *head = newNode;
//         newNode->next = *head;
//     } else {
//         struct Node* temp = *head;
//         while (temp->next != *head) {
//             temp = temp->next;
//         }
//         temp->next = newNode;
//         newNode->next = *head;
//         *head = newNode;
//     }
// }

// void insertAtEnd(struct Node** head, int data) {
//     struct Node* newNode = createNode(data);
//     if (*head == NULL) {
//         *head = newNode;
//         newNode->next = *head;
//     } else {
//         struct Node* temp = *head;
//         while (temp->next != *head) {
//             temp = temp->next;
//         }
//         temp->next = newNode;
//         newNode->next = *head;
//     }
// }

// void deleteNode(struct Node** head, int key) {
//     if (*head == NULL) {
//         return; 
//     }

//     struct Node* current = *head;
//     struct Node* prev = NULL;

//     while (current->data != key) {
//         if (current->next == *head) {
//             printf("Node with value %d not found.\n", key);
//             return; 
//         }
//         prev = current;
//         current = current->next;
//     }

//     if (current->next == *head) {
//         *head = NULL;
//         free(current);
//         return;
//     }

//     if (current == *head) {
//         struct Node* temp = *head;
//         while (temp->next != *head) {
//             temp = temp->next;
//         }
//         *head = (*head)->next;
//         temp->next = *head;
//         free(current);
//     } else {
//         prev->next = current->next;
//         free(current);
//     }
// }

// int search(struct Node* head, int key) {
//     if (head == NULL) {
//         return 0; 
//     }

//     struct Node* current = head;
//     do {
//         if (current->data == key) {
//             return 1; 
//         }
//         current = current->next;
//     } while (current != head);

//     return 0;
// }

// void display(struct Node* head) {
//     if (head == NULL) {
//         printf("Circular linked list is empty.\n");
//         return;
//     }
//     struct Node* current = head;
//     do {
//         printf("%d -> ", current->data);
//         current = current->next;
//     } while (current != head);
//     printf("%d\n",head->data);
// }

// int main() {
//     struct Node* head = NULL;
//     int n, val;

//     printf("Enter the number of elements: ");
//     scanf("%d", &n);

//     for (int i = 0; i < n; i++) {
//         printf("Enter element %d: ", i + 1);
//         scanf("%d", &val);
//         insertAtEnd(&head, val);
//     }
//     int choice, data, deleteKey, searchKey;
 
//         printf("\nCircular Linked List Operations\n");
//         printf("1. Insert at Beginning\n");
//         printf("2. Insert at End\n");
//         printf("3. Delete Node\n");
//         printf("4. Search Node\n");
//         printf("5. Display List\n");
//         printf("6. Exit\n");
//         printf("Enter your choice: ");
//         scanf("%d", &choice);

//         switch (choice) {
//             case 1:
//                 printf("Enter data to insert at the beginning: ");
//                 scanf("%d", &data);
//                 insertAtBeginning(&head, data);
//                 break;
//             case 2:
//                 printf("Enter data to insert at the end: ");
//                 scanf("%d", &data);
//                 insertAtEnd(&head, data);
//                 break;
//             case 3:
//                 printf("Enter a value to delete from the list: ");
//                 scanf("%d", &deleteKey);
//                 deleteNode(&head, deleteKey);
//                 break;
//             case 4:
//                 printf("Enter a value to search in the list: ");
//                 scanf("%d", &searchKey);
//                 if (search(head, searchKey)) {
//                     printf("Node with value %d found.\n", searchKey);
//                 } else {
//                     printf("Node with value %d not found.\n", searchKey);
//                 }
//                 break;
//             case 5:
//                 printf("Circular Linked List: ");
//                 display(head);
//                 break;
//             case 6:
//                 exit(0);
//             default:
//                 printf("Invalid choice, please try again.\n");
//         }
        
//     return 0;
// }


// #include<stdio.h>  
// #include<stdlib.h>  
// struct node   
// {  
//     int data;  
//     struct node *next;   
// };  
// struct node *head;  
  
// void beginsert ();   
// void lastinsert ();  
// void randominsert();  
// void begin_delete();  
// void last_delete();  
// void random_delete();  
// void display();  
// void search();  
// int main ()  
// {  
//     int choice =0;  
//     while(choice != 7)   
//     {  
//         printf("\n*********Main Menu*********\n");  
//         printf("\nChoose one option from the following list ...\n");  
//         printf("\n===============================================\n");  
//         printf("\n1.Insert in begining\n2.Insert at last\n3.Delete from Beginning\n4.Delete from last\n5.Search for an element\n6.Show\n7.Exit\n");  
//         printf("\nEnter your choice?\n");         
//         scanf("\n%d",&choice);  
//         switch(choice)  
//         {  
//             case 1:  
//             beginsert();      
//             break;  
//             case 2:  
//             lastinsert();         
//             break;  
//             case 3:  
//             begin_delete();       
//             break;  
//             case 4:  
//             last_delete();        
//             break;  
//             case 5:  
//             search();         
//             break;  
//             case 6:  
//             display();        
//             break;  
//             case 7:  
//             exit(0);  
//             break;  
//             default:  
//             printf("Please enter valid choice..");  
//         }  
//     }  
//     return 0;
// }  
// void beginsert()  
// {  
//     struct node *newnode,*temp;   
//     int item;   
//     newnode = (struct node *)malloc(sizeof(struct node));  
//     if(newnode == NULL)  
//     {  
//         printf("\nOVERFLOW");  
//     }  
//     else   
//     {  
//         printf("\nEnter the node data?");  
//         scanf("%d",&item);  
//         newnode -> data = item;  
//         if(head == NULL)  
//         {  
//             head = newnode;  
//             newnode -> next = head;  
//         }  
//         else   
//         {     
//             temp = head;  
//             while(temp->next != head)  
//                 temp = temp->next;  
//             newnode->next = head;   
//             temp -> next = newnode;   
//             head = newnode;  
//         }   
//         printf("\nnode inserted\n");  
//     }  
              
// }  
// void lastinsert()  
// {  
//     struct node *newnode,*temp;   
//     int item;  
//     newnode = (struct node *)malloc(sizeof(struct node));  
//     if(newnode == NULL)  
//     {  
//         printf("\nOVERFLOW\n");  
//     }  
//     else  
//     {  
//         printf("\nEnter Data?");  
//         scanf("%d",&item);  
//         newnode->data = item;  
//         if(head == NULL)  
//         {  
//             head = newnode;  
//             newnode -> next = head;    
//         }  
//         else  
//         {  
//             temp = head;  
//             while(temp -> next != head)  
//             {  
//                 temp = temp -> next;  
//             }  
//             temp -> next = newnode;   
//             newnode -> next = head;  
//         }  
          
//         printf("\nnode inserted\n");  
//     }  
  
// }  
  
// void begin_delete()  
// {  
//     struct node *newnode;   
//     if(head == NULL)  
//     {  
//         printf("\nUNDERFLOW");    
//     }  
//     else if(head->next == head)  
//     {  
//         head = NULL;  
//         free(head);  
//         printf("\nnode deleted\n");  
//     }  
      
//     else  
//     {   newnode = head;   
//         while(newnode -> next != head)  
//             newnode = newnode -> next;   
//         newnode->next = head->next;  
//         free(head);  
//         head = newnode->next;  
//         printf("\nnode deleted\n");  
  
//     }  
// }  
// void last_delete()  
// {  
//     struct node *newnode, *prenewnode;  
//     if(head==NULL)  
//     {  
//         printf("\nUNDERFLOW");  
//     }  
//     else if (head ->next == head)  
//     {  
//         head = NULL;  
//         free(head);  
//         printf("\nnode deleted\n");  
  
//     }  
//     else   
//     {  
//         newnode = head;  
//         while(newnode ->next != head)  
//         {  
//             prenewnode=newnode;  
//             newnode = newnode->next;  
//         }  
//         prenewnode->next = newnode -> next;  
//         free(newnode);  
//         printf("\nnode deleted\n");  
  
//     }  
// }  
  
// void search()  
// {  
//     struct node *newnode;  
//     int item,i=0,flag=1;  
//     newnode = head;   
//     if(newnode == NULL)  
//     {  
//         printf("\nEmpty List\n");  
//     }  
//     else  
//     {   
//         printf("\nEnter item which you want to search?\n");   
//         scanf("%d",&item);  
//         if(head ->data == item)  
//         {  
//         printf("item found at location %d",i+1);  
//         flag=0;  
//         }  
//         else   
//         {  
//         while (newnode->next != head)  
//         {  
//             if(newnode->data == item)  
//             {  
//                 printf("item found at location %d ",i+1);  
//                 flag=0;  
//                 break;  
//             }   
//             else  
//             {  
//                 flag=1;  
//             }  
//             i++;  
//             newnode = newnode -> next;  
//         }  
//         }  
//         if(flag != 0)  
//         {  
//             printf("Item not found\n");  
//         }  
//     }     
          
// }  
  
// void display()  
// {  
//     struct node *newnode;  
//     newnode=head;  
//     if(head == NULL)  
//     {  
//         printf("\nnothing to print");  
//     }     
//     else  
//     {  
//         printf("\n printing values ... \n");  
          
//         while(newnode -> next != head)  
//         {  
          
//             printf("%d\n", newnode -> data);  
//             newnode = newnode -> next;  
//         }  
//         printf("%d\n", newnode -> data);  
//     }  
              
// }



#include<stdio.h>
#include<stdlib.h>
void create(int);
void search();
struct node
{
    int data;
    struct node *next;
};
struct node *head;
int main ()
{
    int choice,item,loc;
    do
    {
        printf("\n1.Create\n2.Search\n3.Exit\n4.Enter your choice?");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            printf("\nEnter the item\n");
            scanf("%d",&item);
            create(item);
            break;
            case 2:
            search();
            case 3:
            exit(0);
            break;
            default:
            printf("\nPlease enter valid choice\n");
        }

    }while(choice != 3);
}
    void create(int item)
    {
        struct node *ptr = (struct node *)malloc(sizeof(struct node *));
        if(ptr == NULL)
        {
            printf("\nOVERFLOW\n");
        }
        else
        {
            ptr->data = item;
            ptr->next = head;
            head = ptr;
            printf("\nNode inserted\n");
        }

    }
void search()
{
    struct node *ptr;
    int item,i=0,flag;
    ptr = head;
    if(ptr == NULL)
    {
        printf("\nEmpty List\n");
    }
    else
    {
        printf("\nEnter item which you want to search?\n");
        scanf("%d",&item);
        while (ptr!=NULL)
        {
            if(ptr->data == item)
            {
                printf("item found at location %d ",i+1);
                flag=0;
            }
            else
            {
                flag=1;
            }
            i++;
            ptr = ptr -> next;
        }
        if(flag==1)
        {
            printf("Item not found\n");
        }
    }

}