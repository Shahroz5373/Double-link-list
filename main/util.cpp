#include<iostream>
using namespace std;
#include "util.h"

void addNode(const int& data, Node*& current) {
		current->next = new Node(data);
		current->next->previous = current;
		current = current->next;
	
}

void printList(Node* current) {
	if (current != nullptr) {
		cout << current->data<<" ";
		current = current->next;
		printList(current);
	} 
	
}
