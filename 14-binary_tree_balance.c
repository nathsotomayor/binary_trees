/**
 * binary_tree_balance - Function that measures the balance.
 * @tree: Pointer to the root node.
 * Return: The calculated balance factor. if tree is NULL return 0.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left != NULL && tree->right == NULL)
		return (height(tree->left));
	else if (tree->left == NULL && tree->right != NULL)
		return ((height(tree->right)) * (-1));
	else if (tree->left == NULL && tree->right == NULL)
		return (0);
	return ((height(tree->left)) - (height(tree->right)));
}