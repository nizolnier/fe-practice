int newNodeCount(TrieNode *root, char *str)
{
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        if (root == NULL)
            return len - i;
        root = root->children[str[i] - 'a'];
    }
    return 0;
}