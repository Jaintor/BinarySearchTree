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
	public:
		Tree();
		void push(int data);
		void print();
};

#endif // BINARYTREE_H
