// Queries

template <typename data_type>
bool SinglyLinkedList<data_type>::isEmpty() const {
    return size == 0;
}

template <typename data_type>
int SinglyLinkedList<data_type>::getSize() const {
    return size;
}

template <typename data_type>
Node<data_type>* SinglyLinkedList<data_type>::getHead() const {
    return head;
}

template <typename data_type>
Node<data_type>* SinglyLinkedList<data_type>::getTail() const {
    return tail;
}

template <typename data_type>
data_type SinglyLinkedList<data_type>::back() const {
    return getTail()->value;
}

template <typename data_type>
data_type SinglyLinkedList<data_type>::front() const {
    return getHead()->value;
}

// Utility

// reverse linked list with recursion
template <typename data_type>
void SinglyLinkedList<data_type>::reverse(Node<data_type> *point) {
    Node<data_type> *temp = point;
    if(temp -> next != nullptr){
        reverse(temp -> next);
    }
    push_back(temp -> value);
    deleteNode(temp);
}
