struct node
{
    int data;
    struct node *next;
};
int check_all_even(struct node *head)
{
    // Grading: 2 pts
    if (head == NULL)
        return 0;
    // Grading: 4 pts, we have to have this here to
    // differentiate between an empty and non-empty list.
    // 2 pts for checking next is NULL, 1 pt for each return.
    if (head->next == NULL)
    {
        if (head->data % 2 == 0)
            return 1;
        else
            return 0;
    }
    // Grading: 1 pt if, 1 pt return
    if (head->data % 2 != 0)
        return 0;
    // Grading: 2 pts
    return check_all_even(head->next);
}