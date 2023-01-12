int isLopsided(node *root)
{
    int lHeight, rHeight, diff;
    if (root == NULL)
        return 0;
    lHeight = height(root->left);
    rHeight = height(root->right);
    diff = lHeight – rHeight;
    return (diff >= 2 || diff <= -2);
}
int max(int a, int b)
{
    return (a > b) ? a : b;
}
int height(node *root)
{
    if (root == NULL)
        return -1;
    return 1 + max(height(root->left), height(root->right));
}