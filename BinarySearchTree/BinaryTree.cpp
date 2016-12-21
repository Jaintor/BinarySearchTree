#include "BinaryTree.h"

Tree::Tree() {
	root = NULL;
}

Tree::Node* Tree::create(int data)
{
	Node *node = new Node;
	node->data = data;
	node->left = NULL;
	node->right = NULL;
	return node;
}

void Tree::push(Node *node, int data)
{
	if (data <= node->data)
	{
		if (node->left) {
			push(node->left, data);
		}
		else
		{
			node->left = create(data);
			node->left->parent = node;
		}
	}
	else
	{
		if (node->right) {
			push(node->right, data);
		}
		else
		{
			node->right = create(data);
			node->right->parent = node;
		}
	}
}

void Tree::push(int data)
{
	if (root)
	{
		push(root, data);
	}
	else
	{
		root = create(data);
	}
}

void Tree::print(Node *node, int spaces = 0)
{
	if (node) 
	{
		print(node->right, spaces + 3);
		for (int i = 0; i<spaces; i++) 
		{
			std::cout << "   ";
		}
		std::cout << node->data << "\n";
		print(node->left, spaces + 3);
	}
}

void Tree::print() 
{
	print(root);
}