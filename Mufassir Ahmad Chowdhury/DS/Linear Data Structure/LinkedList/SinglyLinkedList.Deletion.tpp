
// Deletion
template <typename data_type>
void SinglyLinkedList<data_type>::pop_back () {
    if (isEmpty()) {
        return;
    }
    Node<data_type>* temp = head;
    if (head == tail) {
        head = nullptr;
        tail = nullptr;
    } else {
        while (temp->next != tail) {
            temp = temp->next;
        }
        tail = temp;
        tail->next = nullptr;
    }
    size--;
}

template <typename data_type>
void SinglyLinkedList<data_type>::pop_front () {
    if (isEmpty()) {
        return;
    }
    Node<data_type>* temp = head;
    if (head == tail) {
        head = nullptr;
        tail = nullptr;
    } else {
        head = head->next;
    }
    size--;
}

template <typename data_type>
void SinglyLinkedList<data_type>::remove (int index) {
    if (index < 0 || index >= size) {
        throw std::out_of_range("Index out of range");
    }
    if (index == 0) {
        pop_front();
    } else if (index == size - 1) {
        pop_back();
    } else {
        Node<data_type>* current = head;
        for (int i = 0; i < index - 1; i++) {
            current = current->next;
        }
        Node<data_type>* temp = current->next;
        current->next = temp->next;
        size--;
    }
}

// delete a node with a given pointer
template <typename data_type>
void SinglyLinkedList<data_type>::deleteNode (Node<data_type>* node) {
    if (node == nullptr) {
        return;
    }
    if (node == head) {
        pop_front();
    } else if (node == tail) {
        pop_back();
    } else {
        Node<data_type>* current = head;
        while (current->next != node) {
            current = current->next;
        }
        current->next = node->next;
        size--;
    }
}
