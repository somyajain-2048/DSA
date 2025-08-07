
// #include<iostream>
// using namespace std;
// class Stack{
// 	int *arr;
// 	int size;
// int top;


// public:
// Stack(int s){
// 	size  = s;
// 	top = -1;
// 	arr = new int[s];
// }

// void push(int value){
// 	if(top == size-1){
// 		cout<<"stack overflow";
// 		return;
// 	}
// 	else{
// 		top++;
// 		arr[top]= value;
// 		cout << "Pushed " << value << " into the stack\n";
		
		
// 	}
// }

// void pop(){
// 	if(top == -1){
// 		cout<<"stack underflow";
// 	}
// 	else{
		
// 		cout << "Pop element from stack\n";
// 		top--;
// 	}
// }
// int peek(){
// 	if(top == -1){
// 		cout<<"stack is empty";
// 		return -1;
// 	}
// 	else{
// 		return arr[top];
// 	}
// }

// bool isempty(){
// 	return top == -1;
// }

// int isSize(){
// 	return top+1;
// }
// };

#include<iostream>
using namespace std;

class Node{
	public:
	int data;
	Node* next;

	Node(int val){
		data = val;
		next = NULL;
	}
};

class stack{
	Node* top;
	int size;

	public:
	stack(){
  top = NULL;
  size = 0;
	}

void push(int val){
	Node* newnode = new Node(val);
	newnode->next = top;
	top = newnode;
	size++;
}

void pop(){
	if(top == NULL){
		cout << "Stack is empty.\n";
		return;
	}
	else{
		Node* temp = top;
		top = top->next;
    delete temp;
		size--;
	}
}

int peek(){
	if(top == NULL){
		 cout << "Stack is empty.\n";
		return -1;
	}
	else{
		return top->data;
	}
}

bool isempty(){
	return top == NULL;
}

int getSize(){
	return size;
}
};
int main(){
stack s;
s.push(1);
s.push(2);


    cout << "Top element: " << s.peek() << endl;
    s.pop();
    cout << "Top element after pop: " << s.peek() << endl;
   
		 cout << "Is stack empty? " << (s.isempty() ? "Yes" : "No") << endl;
    cout << "Size of stack: " << s.getSize() << endl;

    return 0;
}