#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node(){
        this->data = 0;
        this->next = NULL;
    }
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

int main(){
    Node *head = NULL;

    head = new Node(10);
    Node *second = new Node(1);
    Node *third = new Node(8);
    Node *fourth = new Node(11);

    head->next = second;
    second->next = third;
    third->next = fourth;

    int count = 0;
    Node *temp = head;
    while(temp->next != NULL){
        count++;
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << temp->data << endl;
    ++count;
    cout << "Length: " << count << endl;

    return 0;
}