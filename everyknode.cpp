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
public:
    Node* head;
    Node* tail;

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

    // Remove every Kth node
    void removeEveryKthNode(int K) {
        if (K <= 0 || head == NULL)
            return;

        Node* curr = head;
        Node* prev = NULL;
        int count = 1;

        while (curr != NULL) {
            if (count % K == 0) {
                // Remove current node
                if (prev != NULL) {
                    prev->next = curr->next;
                    delete curr;
                    curr = prev->next;
                } else {
                    // If the head node itself is to be deleted
                    Node* temp = head;
                    head = head->next;
                    delete temp;
                    curr = head;
                }
            } else {
                prev = curr;
                curr = curr->next;
            }
            count++;
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
};

int main() {
    List li;

    li.insert(1);
    li.insert(2);
    li.insert(3);
    li.insert(4);
    li.insert(5);
		li.insert(6);
    li.insert(7);
		li.insert(8);
		li.insert(9);
		li.insert(10);

    cout << "Original list: ";
    li.print();

    int K = 3;
    li.removeEveryKthNode(K);

    cout << "After removing every " << K << "rd node: ";
    li.print();

    return 0;
}
