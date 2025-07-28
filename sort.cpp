#include<iostream>
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

class ListNode {
    Node* head;
    Node* tail;

public:
    ListNode() {
        head = tail = NULL;
    }

    void push_back(int val) {
        Node* newNode = new Node(val);
        if (head == NULL) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void sortLinkedlist() {
        int zerocount = 0;
        int onecount = 0;
        int twocount = 0;

        Node* curr = head;
        while (curr) {
            if (curr->data == 0) {
                zerocount++;
            } else if (curr->data == 1) {
                onecount++;
            } else {
                twocount++;
            }
            curr = curr->next;
        }

        curr = head;
        while (zerocount--) {
            curr->data = 0;
            curr = curr->next;
        }
        while (onecount--) {
            curr->data = 1;
            curr = curr->next;
        }
        while (twocount--) {
            curr->data = 2;
            curr = curr->next;
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
    ListNode ll;
    ll.push_back(1);
    ll.push_back(0);
    ll.push_back(2);
    ll.push_back(1);
    ll.push_back(0);

    cout << "Before Sorting: ";
    ll.print();

    ll.sortLinkedlist();

    cout << "After Sorting: ";
    ll.print();

    return 0;
}
