int maxOffCenterValue(treenode *root)
{
    if (root == NULL)
        return 0;
    if (root->left == NULL && root->right == NULL)
        return 0;
    if (root->left == NULL || root->right == NULL)
        return root->height;

    int lVal = maxOffCenterValue(root->left);
    int rVal = maxOffCenterValue(root->right);
    int res = max(lVal, rVal);
    int cur = abs(root->left->height - root->right->height);
    return max(res, cur);
}