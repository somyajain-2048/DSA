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

class List{
public:
Node* head;
Node* tail;

List(){
head = tail = NULL;
}

void push_back(int val){
Node* newNode = new Node(val);
if(head == NULL){
head = tail = newNode;
}
else{
	tail->next = newNode;
	tail = newNode;
}
}

  void print() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

		//flyod warshall algo
		bool detectloop(){
      Node* slow = head;
			Node* fast = head;

			while(fast && fast->next){
				slow = slow->next;
				fast = fast->next->next;

				if(slow == fast)
					return true;
			}
		return false;
	}
	};
int main(){
List li;
li.push_back(1);
li.push_back(2);
li.push_back(3);
li.push_back(4);


li.print();

li.detectloop();
}