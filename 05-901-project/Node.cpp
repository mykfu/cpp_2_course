#include "Node.h"
	template<class T>
	Node<T>::Node() {
		value = 0;
		next = nullptr;
	}

	template<class T>
	Node<T>::Node(int value) {
		this->value = value;
	}

	template<class T>
	Node<T>::Node(int value, Node* next) {
		this->value = value;
		this->next = next;
	}

	template<class T>
	T Node<T>::getValue() {
		return value;
	}

	template<class T>
	Node<T>* Node<T>::getNext() {
		return next;
	}

