int maxNumPrefixWords(TrieNode *root)
{
    if (root == NULL)
        return 0; // 2 pts
    int maxChild = 0;
    int i;
    for (i = 0; i < 26; i++) // 2 pts
        maxChild = max(maxChild, maxNumPrefixWords(root->children[i]));
    // 4 pts, 3 pts for rec call, 1 for updating max
    return maxChild + root->flag; // 2 pts
}