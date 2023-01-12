int ends_with_q_count(TrieNode *root)
{
    int i;
    int retval = 0;
    // Grading: 2 pts
    if (root == NULL)
        return 0;
    // Grading: 1 pt loop to 26, 1 pt retval +=, 1 pt rec call
    for (i = 0; i < 26; i++)
        retval += ends_with_q_count(root->children[i]);
    // Grading: 2 pts NULL check, 2 pts retval +=
    // Note: 'q' - 'a' = 16. This can go before the for also.
    if (root->children['q' - 'a'] != NULL)
        retval += root->children['q' - 'a']->count;
    // Grading: 1 pt
    return retval;
}