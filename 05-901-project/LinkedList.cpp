#include "LinkedList.h"
#include<iostream>
using namespace std;


template<class T>
LinkedList<T>::LinkedList()
{
	this->head = nullptr;
}

template<class T>
LinkedList<T>::LinkedList(Node<T>* head)
{
	this->head = head;
}

template<class T>
Node<T>* LinkedList<T>::getHead()
{
	return this->head;
}

template<class T>
void LinkedList<T>::print()
{
	Node* current = head;
	while (current != nullptr) {
		cout << current->getValue() << ", ";
		current = current->getNext();
	}
}

template<class T>
void LinkedList<T>::add(int new_value)
{
	if (this->head == nullptr) {
		head = new Node(new_value);
	}
}


