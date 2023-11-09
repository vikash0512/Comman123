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