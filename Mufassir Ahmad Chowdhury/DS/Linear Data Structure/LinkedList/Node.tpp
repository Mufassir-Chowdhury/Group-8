// Constructors

template <typename data_type>
Node<data_type>::Node(data_type value) : value(value), next(nullptr) {}

template <typename data_type>
Node<data_type>::Node() : value(0), next(nullptr) {}

// Getters

template <typename data_type>
data_type Node<data_type>::getValue() const {
    return this->value;
}

template <typename data_type>
Node<data_type> *Node<data_type>::getNext() const {
    return this->next;
}

// Setters

template <typename data_type>
void Node<data_type>::setValue(data_type value) {
    this->value = value;
}

template <typename data_type>
void Node<data_type>::setNext(Node<data_type> *next) {
    this->next = next;
}

// Destructor
template <typename data_type>
Node<data_type>::~Node() {
    delete this->next;
}