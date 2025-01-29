#include "LinkedList.hpp"

int main() {
    LinkedList<int> list;
    list.addNode(10);
    list.addNode(20);
    list.addNode(30);

    list.displayList();

    return 0;
}