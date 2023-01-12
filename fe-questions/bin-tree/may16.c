int inorderSum(treenode *root, int prevSum)
{
    if (root == NULL)
        return 0;
    int sum = 0;
    sum += inorderSum(root->left, prevSum);
    sum += root->value;
    printf("%d ", sum + prevSum);
    sum += inorderSum(root->right, prevSum + sum);
    return sum;
}