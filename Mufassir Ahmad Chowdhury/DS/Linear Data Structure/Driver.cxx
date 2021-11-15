#include"SinglyLinkedList.hpp"

int main(){
    SinglyLinkedList<int> list;
    for(int i=0; i<5; i++)
        list.push_back(i);

    std::cout << list << std::endl;
    return 0;
}