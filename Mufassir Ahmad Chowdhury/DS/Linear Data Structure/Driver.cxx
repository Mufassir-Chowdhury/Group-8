#include"LinkedList/SinglyLinkedList.hpp"

void SinglyList(){
    SinglyLinkedList<int> list;
    for(int i=0; i<5; i++)
        list.push_back(i);

    for(int i=5; i>0; i--)
        list.push_front(i);

    std::cout << list << std::endl;
    std::cout << "Size: " << list.getSize() << std::endl;
    std::cout << "Front: " << list.front() << std::endl;
    std::cout << "Back: " << list.back() << std::endl;

    list.pop_front();
    list.pop_back();
    std::cout << list << std::endl;
    list.insert(0, 1);
    list.insert(3, 4);
    std::cout << list << std::endl;
    list.reverse(list.getHead());
    std::cout << list << std::endl;
    list.clear();
    std::cout << list << std::endl;
    std::cout << "Size: " << list.getSize() << std::endl;
}

int main(){
    SinglyList();
    
    return 0;
}