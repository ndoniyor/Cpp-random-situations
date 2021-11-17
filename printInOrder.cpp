void BinaryTree::printAllInOrder(Node* node) {
	if (node == NULL)
		return;
	printAllInOrder(node->getLeft());
	cout << node->getData() << " ";
	printAllInOrder(node->getRight());
}