// #include<iostream>
// #define MAXSIZE 100
// using namespace std;
// int stack[MAXSIZE], top = -1;
// void push(int item){
//     if(top>=MAXSIZE){
//         cout<<"Overflow"<<endl;
//         exit(0);
//     }
//     else{
//         top++;
//         stack[top] = item;
//     }
// }
// void peek(){
//         cout<<"Top of the Stack is: ";
//         cout<<stack[top]<<endl;
    
// }
// void display(){
//     if(top>=0){
//         cout<<"Stack elements are: ";
//         for(int i=top;i>=0;i--){
//             cout<<stack[i]<<" ";
//         }
//         cout<<endl;
//     }
// }
// void pop(){
//     if(top<0){
//         cout<<"Underflow"<<endl;
//         exit(0);
//     }
//     else{
//         top--;
//     }
// }

// int main(){
//     int item1, item2, item3;
//     cin>>item1>>item2>>item3;
//     push(item1);
//     push(item2);
//     push(item3);
//     peek();
//     display();
//     cout<<"After POP(): "<<endl;
//     pop();
//     peek();
//     display();
//     return 0;
// }


// C++ program to Implement a stack
// using singly linked list
// #include <bits/stdc++.h>
// using namespace std;

// // creating a linked list;
// class Node {
// public:
// 	int data;
// 	Node* link;

// 	// Constructor
// 	Node(int n)
// 	{
// 		this->data = n;
// 		this->link = NULL;
// 	}
// };

// class Stack {
// 	Node* top;

// public:
// 	Stack() { top = NULL; }

// 	void push(int data)
// 	{

// 		// Create new node temp and allocate memory in heap
// 		Node* temp = new Node(data);

// 		// Check if stack (heap) is full.
// 		// Then inserting an element would
// 		// lead to stack overflow
// 		if (!temp) {
// 			cout << "\nStack Overflow";
// 			exit(1);
// 		}

// 		// Initialize data into temp data field
// 		temp->data = data;

// 		// Put top pointer reference into temp link
// 		temp->link = top;

// 		// Make temp as top of Stack
// 		top = temp;
// 	}

// 	// Utility function to check if
// 	// the stack is empty or not
// 	bool isEmpty()
// 	{
// 		// If top is NULL it means that
// 		// there are no elements are in stack
// 		return top == NULL;
// 	}

// 	// Utility function to return top element in a stack
// 	int peek()
// 	{
// 		// If stack is not empty , return the top element
// 		if (!isEmpty())
// 			return top->data;
// 		else
// 			exit(1);
// 	}

// 	// Function to remove
// 	// a key from given queue q
// 	void pop()
// 	{
// 		Node* temp;

// 		// Check for stack underflow
// 		if (top == NULL) {
// 			cout << "\nStack Underflow" << endl;
// 			exit(1);
// 		}
// 		else {

// 			// Assign top to temp
// 			temp = top;

// 			// Assign second node to top
// 			top = top->link;

// 			// This will automatically destroy
// 			// the link between first node and second node

// 			// Release memory of top node
// 			// i.e delete the node
// 			free(temp);
// 		}
// 	}

// 	// Function to print all the
// 	// elements of the stack
// 	void display()
// 	{
// 		Node* temp;

// 		// Check for stack underflow
// 		if (top == NULL) {
// 			cout << "\nStack Underflow";
// 			exit(1);
// 		}
// 		else {
// 			temp = top;
// 			while (temp != NULL) {

// 				// Print node data
// 				cout << temp->data;

// 				// Assign temp link to temp
// 				temp = temp->link;
// 				if (temp != NULL)
// 					cout << " -> ";
// 			}
// 		}
// 	}
// };

// // Driven Program
// int main()
// {
// 	// Creating a stack
// 	Stack s;

// 	// Push the elements of stack
// 	s.push(11);
// 	s.push(22);
// 	s.push(33);
// 	s.push(44);

// 	// Display stack elements
// 	s.display();

// 	// Print top element of stack
// 	cout << "\nTop element is " << s.peek() << endl;

// 	// Delete top elements of stack
// 	s.pop();
// 	s.pop();

// 	// Display stack elements
// 	s.display();

// 	// Print top element of stack
// 	cout << "\nTop element is " << s.peek() << endl;

// 	return 0;
// }



