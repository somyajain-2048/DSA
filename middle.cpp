#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

class List {
    Node* head;
    Node* tail;

public:
    List() {
        head = tail = NULL;
    }

    void insert(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    // Node* getMiddle() {
    //     Node* slow = head;
    //     Node* fast = head;

    //     while (fast != NULL && fast->next != NULL) {
    //         slow = slow->next;
    //         fast = fast->next->next;
    //     }
    //     return slow;
    // }

		Node* middle(){
			int cnt = 0;
			Node* temp =head;
			while(temp != NULL){
				cnt++;
				temp = temp->next;
			
			}

			cnt /= 2;
			temp = head;
			while(cnt--){
temp = temp->next;

			}
			return temp;
		}

    void print() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    void printMiddle() {
        Node* mid = middle();
        if (mid != NULL) {
            cout << "Middle element: " << mid->data << endl;
        } else {
            cout << "List is empty.\n";
        }
    }
};

int main() {
    List li;

    li.insert(1);
    li.insert(2);
    li.insert(3);
    li.insert(4);
    li.insert(5);

    li.print();         
    li.printMiddle();  
		// li.middle();
    return 0;
}
