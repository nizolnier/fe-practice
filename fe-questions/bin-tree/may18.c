int countDiv(bstNode *root, int value)
{
    if (root == NULL)
        return 0; // 2 pts
    // 4 pts, 2 pts for each recursive call.
    int res = countDiv(root->left, value) +
              countDiv(root->right, value);
    // 2 pts for checking divisibility, 1 pt for adding 1
    if (root->data % value == 0)
        res++;
    // 1 pt for returning.
    return res;
}