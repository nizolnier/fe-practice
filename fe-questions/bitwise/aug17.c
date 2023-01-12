int lowestOneBit(int n)
{
    int res = 1;
    while ((res & n) == 0)
        res = res << 1;
    return res;
}
int highestOneBit(int n)
{
    int res = 1;
    while (((res << 1) <= n) && (res << 1) > 0)
        res = res << 1;
    return res;
}