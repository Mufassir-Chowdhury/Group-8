// Insertion

template <typename data_type>
void DataStructure<data_type>::push_back (data_type value) {
    Node<data_type>* newNode = new Node<data_type>(value);
    if (hasMember()) {
        head = newNode;
        tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }
    size++;
}

template <typename data_type>
void DataStructure<data_type>::push_front (data_type value) {
    Node<data_type>* newNode = new Node<data_type>(value);
    if (hasMember()) {
        head = newNode;
        tail = newNode;
    } else {
        newNode->next = head;
        head = newNode;
    }
    size++;
}

template <typename data_type>
void DataStructure<data_type>::insert (int index, data_type value) {
    if (index < 0 || index > size) {
        throw std::out_of_range("Index out of range");
    }
    if (index == 0) {
        push_front(value);
    } else if (index == size) {
        push_back(value);
    } else {
        Node<data_type>* newNode = new Node<data_type>(value);
        Node<data_type>* current = head;
        for (int i = 0; i < index - 1; i++) {
            current = current->next;
        }
        newNode->next = current->next;
        current->next = newNode;
        size++;
    }
}
