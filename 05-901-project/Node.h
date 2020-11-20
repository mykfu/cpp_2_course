#pragma once
template<class T> class List;
template<class T>
class Node
{
private:
	T value;
	Node* next;


public:
	Node();

	Node(int value);

	Node(int value, Node* next);
	T getValue();

	Node* getNext();
	friend class List<T>;
};

