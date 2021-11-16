#include"../Base/DataStructure.hpp"

template <typename data_type>
class SinglyLinkedList:public DataStructure<data_type>{
    public:
        SinglyLinkedList();
        ~SinglyLinkedList();

        bool isEmpty() const;
        int Size() const;

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

        void clear();
};

#include "SinglyLinkedList.tpp"