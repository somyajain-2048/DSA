#include<iostream>
using namespace std;
class Node{
	public:
	int data;
	Node* next;
	Node* prev;

	Node(int val){
		data = val;
		next = prev = NULL;
	}
};

class Doubllist{
	public:
	Node* head;
	Node* tail;

	
	Doubllist(){
	
		head = tail = NULL;
	}

	void insertathead(int val){
		Node* newNode = new Node(val);
		if(head == NULL){
			head = tail = newNode;
		}
		else{
			head->prev = newNode;
			newNode->next = head;
			head = newNode;
			
		}
	}
	void insertattail(int val){
		Node* newNode = new Node(val);
		if(head == NULL){
			head =tail = newNode;
		}
		else{
			tail->next = newNode;
			newNode->prev = tail;
		}
	}

	void print(){
		Node* temp = head;
		while(temp != NULL){
			cout<<temp->data<<""<< "<=>";
			temp = temp->next;
		}
	}
};
int main(){
Doubllist dl;
dl.insertathead(1);
dl.insertathead(2);
dl.insertathead(4);

dl.insertattail(7);

dl.print();

return 0;
}