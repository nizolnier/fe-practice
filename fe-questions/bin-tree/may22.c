int iterative_foo(node *root)
{
    int result = 1;
    node *temp = root;
    while (temp != NULL)
    {
        if (temp->left == NULL && temp->right == NULL)
        {
            result *= 2;
            temp = NULL;
        }
        else if (temp->left == NULL)
        {
            result *= 3;
            temp = temp->right;
        }
        else if (temp->right == NULL)
        {
            result *= 4;
            temp = temp->left;
        }
        else if (temp->right->data > temp->left->data)
        {
            result *= 5;
            temp = temp->right;
        }
        else
        {
            result *= 6;
            temp = temp->left;
        }
    }
    return result;
}