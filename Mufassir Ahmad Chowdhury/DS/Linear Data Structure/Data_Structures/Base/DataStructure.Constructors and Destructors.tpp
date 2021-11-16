// Constructor

template <typename data_type>
DataStructure<data_type>::DataStructure() : head(nullptr), tail(nullptr), size(0) {}

// Destructor

template <typename data_type>
void DataStructure<data_type>::destroy() {
    while (!hasMember()) {
        pop_front();
    }
}

template <typename data_type>
DataStructure<data_type>::~DataStructure() {
    destroy();
}