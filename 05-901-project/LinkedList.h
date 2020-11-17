#pragma once
#include "Node.h"
#include<iostream>
using namespace std;
template<class T>
class LinkedList {
private:
	Node<T>* head;

public:

	LinkedList();
	LinkedList(Node<T>* head);

	Node<T>* getHead();

	void print();

	void add(int new_value);

};