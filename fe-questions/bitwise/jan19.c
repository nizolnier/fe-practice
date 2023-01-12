int monthsTillComplete(int packages[], int n)
{
    int i = 0, mask = 0;
    while (mask != ((1 << 20) - 1))
    {
        mask |= packages[i];
        i++;
    }
    return i;
}