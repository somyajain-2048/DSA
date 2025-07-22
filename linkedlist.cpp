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

class List {
    Node* head;
    Node* tail;

public:
    List() {
        head = tail = NULL;
    }

    void push_front(int val) {
        Node* newNode = new Node(val);
        if (head == NULL) {
            head = tail = newNode;
        } else {
            newNode->next = head;  
            head = newNode;
        }
    }

    void push_back(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail= newNode;
        }
        else{
            tail->next = newNode;
            tail = newNode;
            }
        }
    
        void pop_front(){
            if(head ==NULL){
                return;
            }
            else{
            Node* temp = head;
                head = head->next;
                delete temp;
            }
        }

        void pop_back(){
            if(head == NULL){
                return;
            }
          else  if(head == tail){
                delete head;
                head = tail = NULL;
            }
            else{
                Node* temp = head;
                while(temp->next != tail){
                    temp = temp->next;
                }
                delete tail;
                tail = temp;
                tail->next = NULL;
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

    li.push_front(3);
    li.push_front(2);
    li.push_front(1);

    li.push_back(4);
    // li.pop_front();
    li.pop_back();

    li.print();  
    return 0;
}
