#pragma once
#include<iostream>

template <typename data_type> class DataStructure;
template <typename data_type>
std::ostream& operator<<(std::ostream& os, const DataStructure<data_type>& list);

template <typename data_type>
class Node{
        friend class DataStructure<data_type>;
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
class DataStructure{
    private:
        Node<data_type> *head;
        Node<data_type> *tail;
        int size;
    
    public:
        DataStructure();
        ~DataStructure();

        bool hasMember() const;
        int getSize() const;

        Node<data_type> *getHead() const;
        Node<data_type> *getTail() const;

        data_type back() const;
        data_type front() const;

        void push_back(data_type value);
        void push_front(data_type value);
        void insert(int index, data_type value);

        void pop_back();
        void pop_front();
        void remove(int index);
        void deleteNode(Node<data_type> *node);

        void reverse(Node<data_type> *node = getHead());

        void destroy();

};

template <typename data_type>
std::ostream &operator<<(std::ostream &os, const DataStructure<data_type> &list) {
    Node<data_type> *current = list.getHead();
    while (current != nullptr){
        os << current->getValue() << " ";
        current = current->getNext();
    }
    return os;
}

#include "Node.tpp"
#include "DataStructure.Constructors and Destructors.tpp"
#include "DataStructure.Insertion.tpp"
#include "DataStructure.Deletion.tpp"
#include "DataStructure.utility.tpp"
