#include <stdio.h>
#include <stdlib.h>

struct tree_node
{
    int data;
    struct tree_node *left;
    struct tree_node *right;
};

int main(void)
{
    return 0;
}

// need to create node outside insert function bc u are looping
struct tree_node *insert(struct tree_node *root, int val)
{
    struct tree_node *temp = malloc(sizeof(struct tree_node));
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;
    if (root == NULL)
    {
        return temp;
    }
    else
    {
        if (val < root->data)
        {
            if (root->left != NULL)
            {
                root->left = insert(root->left, val);
            }
            else
            {
                root->left = temp;
            }
        }
        else
        {
            if (root->right != NULL)
            {
                root->right = insert(root->right, val);
            }
            else
            {
                root->right = temp;
            }
        }

        return root;
    }
}

int search(struct tree_node *root, int val)
{
    if (root == NULL)
    {
        return 0;
    }
    if (root->data == val)
    {
        return 1;
    }

    if (val < root->data)
    {
        return search(root->left, val);
    }
    else
    {
        return search(root->right, val);
    }
}

int isLeaf(struct tree_node *node)
{
    if (node->left == NULL && node->right == NULL)
        return 1;

    return 0;
}

int hasOnlyLeftChild(struct tree_node *node)
{
    if (node->left != NULL && node->right == NULL)
        return 1;

    return 0;
}

int hasOnlyRightChild(struct tree_node *node)
{
    if (node->left == NULL && node->right != NULL)
        return 1;

    return 0;
}

struct tree_node *parent(struct tree_node *root, struct tree_node *node)
{
    if (root == NULL || root == node)
    {
        return NULL;
    }
    else
    {
        if (root->left == node || root->right == node)
        {
            return root;
        }

        if (node->data < root->data)
        {
            return parent(root->left, node);
        }
        else
        {
            return parent(root->right, node);
        }
    }
}

struct tree_node *minVal(struct tree_node *root)
{
    if (root->left == NULL)
    {
        return root;
    }
    else
    {
        return minVal(root->left);
    }
}

struct tree_node *maxVal(struct tree_node *root)
{
    if (root->right == NULL)
    {
        return root;
    }
    else
    {
        return maxVal(root->right);
    }
}

int numLeaves(struct tree_node *p)
{
    if (p == NULL)
    {
        return 0;
    }
    if (p->left == NULL && p->right == NULL)
    {
        return 1;
    }

    return numLeaves(p->left) + numLeaves(p->right);
}

int height(struct tree_node *root)
{
    if (root == NULL)
        return 0;

    int leftHeight = height(root->left);

    int rightHeight = height(root->right);

    if (leftHeight > rightHeight)
        return leftHeight + 1;

    else
        return rightHeight + 1;
}

int printOdd(struct tree_node *root)
{
    if (root != NULL)
    {
        printOdd(root->left);

        if (root->data % 2 == 1)
            printf("%d", root->data);

        printOdd(root->right);
    }
}