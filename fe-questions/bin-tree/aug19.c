bstNode *insert(bstNode *root, int value)
{
    if (root == NULL)
    {
        bstNode *res = malloc(sizeof(bstNode));
        res->data = value; // 1 pt
        res->sum = value;  // 1 pt
        res->left = NULL;  // 1 pt
        res->right = NULL; // 1 pt
        return res;
    }
    if (value <= root->data)
        root->left = insert(root->left, value); // 2 pts
    else
        root->right = insert(root->right, value); // 2 pts
    root->sum += value;                           // 2 pts
    return root;
}