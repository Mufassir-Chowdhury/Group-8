// Constructor

template <typename data_type>
SinglyLinkedList<data_type>::SinglyLinkedList() : head(nullptr), tail(nullptr), size(0) {}

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

// Insertion

template <typename data_type>
void SinglyLinkedList<data_type>::push_back (data_type value) {
    Node<data_type>* newNode = new Node<data_type>(value);
    if (isEmpty()) {
        head = newNode;
        tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }
    size++;
}

// Destructor

template <typename data_type>
SinglyLinkedList<data_type>::~SinglyLinkedList() {
    while (head != nullptr) {
        Node<data_type> *temp = head;
        head = head->next;
        delete temp;
    }
}