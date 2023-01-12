int numWordsWithPrefix(TrieNode *root, char *prefix)
{
    int len = strlen(prefix);
    TrieNode *tmp = root;

    for (int i = 0; i < len; i++)
    {
        if (!tmp->children[prefix[i] - 'a'])
        {
            return 0;
        }
        tmp = tmp->children[prefix[i] - 'a'];
    }

    return tmp->numwords;
}