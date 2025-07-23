#include<iostream>
#include<vector>
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

class List{
	public:
	Node* head;
	Node* tail;

	List(){
  head = tail = NULL;
	}

Node* reverse(Node* head){
		Node* temp = head;
		vector<int>ans;

		while(temp != NULL){
			ans.push_back(temp->data);
			temp = temp->next;
}
int i =ans.size()-1;
    temp = head;
    while(temp != NULL){
    temp->data = ans[i];
    i--;
    temp = temp->next;
}
  return head;

}

void insert(int val){
	Node* newNode = new Node(val);
	if(!head){
		head = tail = newNode;
	}
	else{
		tail->next = newNode;
		tail =newNode;
	}
}

void print(){
	Node* temp = head;
	while(temp != NULL){
		cout<<temp->data<<"";
		temp = temp->next;
	}
	cout<<endl;
}
	
};

int main(){
List li;

li.insert(1);
li.insert(2);
li.insert(3);
li.insert(4);

li.print();

li.head = li.reverse(li.head);
li.print();

return 0;
}
