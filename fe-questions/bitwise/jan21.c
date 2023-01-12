int canWinNIM(int piles[], int numPiles)
{
    // Grading: 1 pt to initialize.
    int res = 0;
    // Grading: 3 pts loop, 4 pts XOR
    for (int i = 0; i < numPiles; i++)
        res ^= piles[i];
    // Grading: 2 pts, give 1 pt if it says return res, since
    // prompt asks to specifically return 1 in winning case.
    return res != 0;
}