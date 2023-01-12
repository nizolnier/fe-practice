int bestMatch(int client, int *matches, int length)
{
    int res = 0, best = -1, i;
    for (i = 0; i < length; i++)
    {
        int tmp = 20 - count(client ^ matches[i]);
        if (tmp > best)
        {
            best = tmp;
            res = i;
        }
    }
    return res;
}
int count(int mask)
{
    int res = 0, i;
    for (i = 0; i < 32; i++)
        if ((mask & (1 << i)) != 0)
            res++;
    return res;
}