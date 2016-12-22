#include "BinaryTree.h"

int main(int argc, char *argv[])
{
	Tree tree;
	tree.push(19);
	tree.push(17);
	tree.push(25);
	tree.push(15);
	tree.push(18);
	tree.push(28);
	tree.push(20);
	tree.print();

	std::cout << tree.contains(18) << "\n";
	std::cout << tree.contains(21) << "\n";

	std::cout << "\n\nC++ version: " << __cplusplus << "\n" << "Press ENTER to exit" << "\n";
	std::cin.ignore();

	return 0;
}