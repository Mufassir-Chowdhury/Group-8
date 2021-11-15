// Constructor

template <typename data_type>
SinglyLinkedList<data_type>::SinglyLinkedList() : head(nullptr), tail(nullptr), size(0) {}

// Destructor

template <typename data_type>
void SinglyLinkedList<data_type>::clear() {
    while (!isEmpty()) {
        pop_front();
    }
}

template <typename data_type>
SinglyLinkedList<data_type>::~SinglyLinkedList() {
    clear();
}