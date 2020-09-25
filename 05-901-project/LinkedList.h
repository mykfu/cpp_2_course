#pragma once
#include "Node.h"
#include<iostream>
using namespace std;

class LinkedList {
private:
	Node* head;

public:

	LinkedList();
	LinkedList(Node* head);

	Node* getHead();

	void print();

	void add(int new_value);

};