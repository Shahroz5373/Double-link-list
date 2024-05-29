#include <iostream>
using namespace std;
#include"util.h"
#include"Node.h"

int main()
{
    Node* head = new Node(2);
    Node* current = head;
    addNode(1, current);
    addNode(9, current);
    addNode(6, current);
    addNode(5, current);
    cout << "The doubly link list is ";
    printList(head);
     
    
    return 0;
}

