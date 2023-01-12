int countOddStrings(TrieNode *root, int k)
{
    int total = 0;
    if (root == NULL)
        return 0;
    if (k % 2 == 1 && root->flag == 1)
        total++;
    for (i = 0; i < 26; i++)
        total += countOddStrings(root->children[i], k + 1);
    return total;
}