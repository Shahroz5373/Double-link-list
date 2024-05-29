#include<iostream>
using namespace std;
#include "util.h"

void addNode(const int& data, Node*& current) {
	if (current == NULL) {
		current = new Node(data);
		current = current->next;
	}
	else {
		current->next = new Node(data);
		current->next->previous = current;
		current = current->next;
	}
}

void printList(Node* current) {
	if (current != nullptr) {
		cout << current->data<<" ";
		current = current->next;
		printList(current);
	} 
	
}