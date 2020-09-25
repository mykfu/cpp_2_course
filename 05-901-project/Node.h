#pragma once
class Node
{
private:
	int value;
	Node* next;


public:
	Node();

	Node(int value);

	Node(int value, Node* next);
	int getValue();

	Node* getNext();
};

