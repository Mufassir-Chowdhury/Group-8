#include<iostream>
using namespace std;

struct Node{
    Node(int n)
     : value(n), next(nullptr)
     {};
    int value;
    Node* next;
};

struct LinkedList{
    Node *head = nullptr;
    Node *tail = nullptr;

    void push(int k);
    void print();
    void ulta(Node *head);
    void ulta2(Node *);
    void Delete(int);
    void Find(int);
};

int main(){
    LinkedList singlyLinkedList;
    for(int i=0; i<10; i++)
        singlyLinkedList.push(i);

    singlyLinkedList.print();
    singlyLinkedList.ulta(singlyLinkedList.head);
    singlyLinkedList.print();
    singlyLinkedList.Find(0);
    singlyLinkedList.Delete(8);
    singlyLinkedList.print();
    singlyLinkedList.ulta2(singlyLinkedList.head);
    singlyLinkedList.print();
    return 0;
}


void LinkedList::push(int k){
    Node *newNode = new Node(k);
    if(head == nullptr){
        head = tail = newNode;
        return;
    }
    tail -> next = newNode;
    tail = newNode;
}
void LinkedList::Delete(int k) {
    Node *temp = head,*temp2 = head;
    if(head->value == k) {
        head = temp->next;
        delete temp;
        return;
    }
    while(temp->next!=nullptr && temp->value!=k) {
            temp2 = temp;
            temp = temp->next;
    }
    if(temp->value != k) {
        cout << "The given value doesn't exist." << endl;
        return ;
    }
    temp2->next = temp->next;
    delete temp;
}

void LinkedList::print(){
    if(head == nullptr)
        cout << "Empty List!" << endl;
    else{
        Node *temp = head;
        while(temp != nullptr){
            cout << temp -> value << " ";
            temp = temp -> next;
        }
        cout << endl;
    }
}
void LinkedList::Find(int k) {
    Node *temp = head;
    while(temp->next!=nullptr && temp->value!=k) {
            temp = temp->next;
    }
    if(temp->value != k) {
        cout << "The given value doesn't exist." << endl;
        return ;
    }
    else cout << "The given  value exist" << endl;

}

void LinkedList::ulta2(Node *pre){
    if(pre == head){
        tail = pre;
    }
    if(pre->next->next == nullptr) {
        head = pre->next;
        pre->next->next = pre;
        return;
    }
    ulta2(pre->next);
    pre->next->next = pre;
    if(pre == tail) pre->next = nullptr;
    return ;

}



void LinkedList::ulta(Node *point){
    Node *temp = point;
    if(temp -> next != nullptr){
        ulta(temp -> next);
    }
    push(temp -> value);
    Delete(temp->value);
}
