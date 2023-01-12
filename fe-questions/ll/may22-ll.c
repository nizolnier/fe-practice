void insertAfterN(node *head, int M, int N)
{
    if (head == NULL)
        return;
    if (head->data == N)
    {
        node *tmp = malloc(sizeof(node));
        tmp->data = M;
        tmp->next = head->next;
        head->next = tmp;
        head = tmp;
    }
    insertAfterN(head->next, M, N);
}