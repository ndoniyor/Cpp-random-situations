void BinaryTree::printAllPreOrder(Node* node) {
	if (node == NULL)
		return;
	cout << node->getData() << endl;
	printAllPreOrder(node->getLeft());
	printAllPreOrder(node->getRight());
}