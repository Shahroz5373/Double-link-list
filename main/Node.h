#pragma once

struct Node {
	int data;
	Node* next;
	Node* previous;

	//default constructor
	Node() {
		data = 0;
		next = nullptr;
		previous = nullptr;
	}

	//parameterized constructor
	Node(const int&_data) {
		data = _data;
		next = nullptr;
		previous = nullptr;
	}
};
