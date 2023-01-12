int countStringsWithLetter(TrieNode *root, char alpha)
{
    int i, total = 0;
    if (root == NULL)
        return 0;
    for (i = 0; i < 26; i++)
    {
        if (i == alpha - 'a')
        {
            if (root->children[i] != NULL)
                total += (root->children[i])->numwords;
        }
        else
            total += countStringsWithLetter(root->children[i], alpha);
    }
    return total;
}