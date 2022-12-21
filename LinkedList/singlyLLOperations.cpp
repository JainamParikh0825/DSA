#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;
    Node(){
        this->data = 0;
        this->next = NULL;
    }
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

class SinglyLL{
private:
    Node *head = NULL;

public:
    int size = 0;
    void insertAtBeginning(int data){
        Node *newNode = new Node(data);
        this->size++;
        newNode->next = head;
        this->head = newNode;
    }

    void insertAtEnd(int data){
        Node *newNode = new Node(data);
        this->size++;

        if(this->head == NULL){
            this->head = newNode;
            return;
        }

        Node *n = this->head;
        while(n->next != NULL){
            n = n->next;
        }
        n->next = newNode;
    }

    void insert(int position, int data){
        if(position < 1){
            cout << "---- Invalid Position ----" << endl;
            cout << "Position should be greater than 0. " << endl << endl;
            return;
        } else if(position > size + 1){
            cout << "---- Invalid Position ----" << endl;
            cout << "Position should be less than total size of Linked List." << endl;
            cout << "Current size of Linked List: " << this->size << endl << endl;
            return;
        } else if(position == 1){
            this->insertAtBeginning(data);
            return;
        } else if(position == size){
            this->insertAtEnd(data);
            return;
        }

        Node *newNode = new Node(data);
        this->size++;
        Node *n = this->head;
        for (int i = 1; i < position - 1; ++i) {
            n = n->next;
        }
        newNode->next = n->next;
        n->next = newNode;
    }

    Node* deleteFirst(){
        if(this->head == NULL){
            cout << "---- Invalid Delete Operation ----" << endl;
            cout << "Linked List is empty. Please try adding some items." << endl << endl;
            return NULL;
        }

        Node *temp = this->head;
        size--;
        this->head = this->head->next;
        temp->next = NULL;
        return temp;
    }

    Node* deleteLast(){
        if(this->head == NULL){
            cout << "---- Invalid Delete Operation ----" << endl;
            cout << "Linked List is empty. Please try adding some items." << endl << endl;
            return NULL;
        } else if(this->size == 1){
            Node *temp = this->deleteFirst();
            return temp;
        }

        Node *n = this->head;
        Node *temp = NULL;
        for (int i = 1; i < this->size - 1; ++i) {
            n = n->next;
        }

        temp = n->next;
        n->next = NULL;
        size--;
        return temp;
    }

    Node* deleteAt(int position){
        if(position < 1){
            cout << "---- Invalid Delete Operation ----" << endl;
            cout << "Position should be greater than 1." << endl << endl;
            return NULL;
        }
        else if (position > this->size) {
            cout << "---- Invalid Delete Operation ----" << endl;
            cout << "Position cannot be greater than size." << endl << endl;
            return NULL;
        } else if (position == 1) {
            Node *temp = this->deleteFirst();
            return temp;
        } else if (position == this->size) {
            Node *temp = this->deleteLast();
            return temp;
        }

        Node *prev = NULL;
        Node *current = this->head;
        for (int i = 1; i < position; ++i){
            prev = current;
            current = current->next;
        }
        prev->next = current->next;
        current->next = NULL;

        return current;
    }

    void display(){
        Node *n = this->head;
        while(n->next != NULL){
            cout << n->data << " ";
            n = n->next;
        }
        cout << n->data << endl;
    }
};

int main(){
    SinglyLL sll;
    sll.insertAtBeginning(1);
    sll.insertAtBeginning(2);
    sll.insertAtBeginning(3);
    sll.insertAtBeginning(4);
    sll.insertAtBeginning(5);

    sll.insertAtEnd(0);
    sll.insertAtEnd(-1);
    sll.insertAtEnd(-2);

    sll.insert(-1, 100); // invalid position
    sll.insert(10, 200); // invalid position
    sll.insert(3, 6);
    sll.insert(6, 7);
    sll.insert(1, 8); // at beginning
    sll.insert(12, -3); // at end

    cout << "Before Deleting: ";
    sll.display();

    Node *deletedNode = NULL;
    deletedNode = sll.deleteFirst();
    cout << "Deleted Data: " << deletedNode->data << endl;
    deletedNode = sll.deleteFirst();
    cout << "Deleted Data: " << deletedNode->data << endl;

    deletedNode = sll.deleteLast();
    cout << "Deleted Data: " << deletedNode->data << endl;
    deletedNode = sll.deleteLast();
    cout << "Deleted Data: " << deletedNode->data << endl;

    deletedNode = sll.deleteAt(3);
    cout << "Deleted Data: " << deletedNode->data << endl;
    deletedNode = sll.deleteAt(5);
    cout << "Deleted Data: " << deletedNode->data << endl;

    cout << "After Deleting: ";
    sll.display();
    return 0;
}