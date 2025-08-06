
#include<iostream>
using namespace std;
class Stack{
	int *arr;
	int size;
int top;


public:
Stack(int s){
	size  = s;
	top = -1;
	arr = new int[s];
}

void push(int value){
	if(top == size-1){
		cout<<"stack overflow";
		return;
	}
	else{
		top++;
		arr[top]= value;
		cout << "Pushed " << value << " into the stack\n";
		
		
	}
}

void pop(){
	if(top == -1){
		cout<<"stack underflow";
	}
	else{
		
		cout << "Pop element from stack\n";
		top--;
	}
}
int peek(){
	if(top == -1){
		cout<<"stack is empty";
		return -1;
	}
	else{
		return arr[top];
	}
}

bool isempty(){
	return top == -1;
}

int isSize(){
	return top+1;
}
};

int main(){
Stack s(5);
s.push(1);
// s.push(2);
s.pop();
s.peek();
s.isempty();
s.isSize();
}