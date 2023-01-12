int paintFence(int pattern, int paintLoc[], int paintLen)
{
    int res = 0;                                // 1 pt
    for (int i = 0; i < paintLen; i++)          // 2 pts
        res = res | (pattern << (paintLoc[i])); // 6 pts
    return res;                                 // 1 pt
}