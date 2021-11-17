void BinaryTree::printAllPostOrder(Node* node) {
	if (node == NULL)
		return;
	printAllPostOrder(node->getLeft());
	printAllPostOrder(node->getRight());
	cout << node->getData() << " ";
}
