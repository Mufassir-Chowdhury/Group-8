template <typename data_type>
SinglyLinkedList<data_type>::SinglyLinkedList(){
    typename DataStructure<data_type>::DataStructure();
};

template <typename data_type>
SinglyLinkedList<data_type>::~SinglyLinkedList(){
    DataStructure<data_type>::~DataStructure();
};

template <typename data_type>
bool SinglyLinkedList<data_type>::isEmpty() const{
    return DataStructure<data_type>::hasMember();
};

template <typename data_type>
int SinglyLinkedList<data_type>::Size() const{
    return DataStructure<data_type>::getSize();
};

template <typename data_type>
Node<data_type>* SinglyLinkedList<data_type>::getHead() const{

};

template <typename data_type>
Node<data_type>* SinglyLinkedList<data_type>::getTail() const{

};

template <typename data_type>
data_type SinglyLinkedList<data_type>::back() const{

};

template <typename data_type>
data_type SinglyLinkedList<data_type>::front() const{

};

template <typename data_type>
void SinglyLinkedList<data_type>::push_back(data_type value){
    DataStructure<data_type>::push_back(value);
};

template <typename data_type>
void SinglyLinkedList<data_type>::push_front(data_type value){

};

template <typename data_type>
void SinglyLinkedList<data_type>::insert(int index, data_type value){

};

template <typename data_type>
void SinglyLinkedList<data_type>::pop_back(){

};

template <typename data_type>
void SinglyLinkedList<data_type>::pop_front(){

};

template <typename data_type>
void SinglyLinkedList<data_type>::remove(int index){

};

template <typename data_type>
void SinglyLinkedList<data_type>::deleteNode(Node<data_type> *node){

};

template <typename data_type>
void SinglyLinkedList<data_type>::clear(){

};