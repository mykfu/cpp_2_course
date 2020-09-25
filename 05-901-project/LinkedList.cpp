#include "LinkedList.h"
#include<iostream>
using namespace std;


LinkedList::LinkedList() {
	this->head = nullptr;
}

LinkedList::LinkedList(Node* head) {
	this->head = head;
}

Node* LinkedList::getHead() {
	return head;
}

void LinkedList::print() {
	Node* current = head;
	while (current != nullptr) {
		cout << current->getValue() << ", ";
		current = current->getNext();
	}
}

void LinkedList::add(int new_value)
{
	if (head == nullptr) {
		head = new Node(new_value);
	}
}
