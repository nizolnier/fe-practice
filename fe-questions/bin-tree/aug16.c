int countBefore(bstNode *root, char target[])
{
    if (root == NULL)
        return 0;                        // 2 pts
    if (strcmp(target, root->word) <= 0) // 2 pts
        return countBefore(root->left);  // 2 pts
    // 1 pt return, 1 pt 1, 1 pt left, 1 pt right
    return 1 + countBefore(root->left) + countBefore(root->right);
}