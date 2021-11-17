int BinaryTree::maxDepth(Node* root) {
	if (root == NULL)
		return -1;
	else{
		int leftDepth = maxDepth(root->getLeft());
		int rightDepth = maxDepth(root->getRight());

		if (leftDepth > rightDepth)
			return (leftDepth+1);
		else
			return (rightDepth+1);
	}
}
