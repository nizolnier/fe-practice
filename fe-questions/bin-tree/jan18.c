bstNode *find_min_leaf(bstNode *root)
{
    if (root == NULL)                              // 1 pt
        return NULL;                               // 1 pt
    if (root->left == NULL && root->right == NULL) // 2 pts
        return root;                               // 1 pt
    if (root->left != NULL)                        // 1 pt
        return find_min_left(root->left);          // 2 pts
    return find_min_left(root->right);             // 2 pts
}