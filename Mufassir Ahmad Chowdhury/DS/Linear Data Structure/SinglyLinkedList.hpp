#include<iostream>

template <typename data_type> class SinglyLinkedList;
template <typename data_type>
std::ostream& operator<<(std::ostream& os, const SinglyLinkedList<data_type>& list);

template <typename data_type>
class Node{
        friend class SinglyLinkedList<data_type>;
        friend std::ostream& operator<<(std::ostream& os, const Node<data_type>& node);
    
    public:
        data_type getValue () const;
        Node *getNext () const;
    
    private:
        data_type value;
        Node *next;
    
    protected:
        Node(data_type value);
        Node();
        ~Node();


        void setValue (data_type value);
        void setNext (Node *next);
};

template <typename data_type>
class SinglyLinkedList{
    private:
        Node<data_type> *head;
        Node<data_type> *tail;
        int size;
    
    public:
        SinglyLinkedList();
        ~SinglyLinkedList();

        bool isEmpty() const;
        int getSize() const;

        Node<data_type> *getHead() const;
        Node<data_type> *getTail() const;


        void push_back(data_type value);

};

template <typename data_type>
std::ostream &operator<<(std::ostream &os, const SinglyLinkedList<data_type> &list) {
    Node<data_type> *current = list.getHead();
    while (current != nullptr){
        os << current->getValue() << " ";
        current = current->getNext();
    }
    return os;
}

#include "SinglyLinkedList.tpp"
#include "Node.tpp"