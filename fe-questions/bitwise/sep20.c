int score(int preferences[], int applicant)
{
    int res = 0;                                        // Grading: 1 pt
    for (res = 0; res < SIZE; res++)                    // Grading: 2 pts
        if ((applicant & (1 << preferences[res])) == 0) // 5 pts
            break;                                      // Grading: 1 pt
    return res;                                         // Grading: 1 pt
}