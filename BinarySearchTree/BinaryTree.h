#ifndef BINARYTREE_H
#define BINARYTREE_H
#include <iostream>

class Tree
{
private:
	struct Node
	{
		int data;
		Node *parent, *left, *right;
	};
	Node *root;
	Node* create(int);
	void push(Node*, int);
	void print(Node*, int);
	bool contains(Node*, int);
	int counter;
public:
	Tree();
	void push(int);
	void print();
	bool contains(int);
};

#endif // BINARYTREE_H
