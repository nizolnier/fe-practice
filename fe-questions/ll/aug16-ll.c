typedef struct node
{
    int data;
    struct node *next;
} node;

int listylist(node *head)
{
    int sum;
    if (head == NULL)
        return 0;
    sum = listylist(head->next);
    if (sum == -1 || head->data == sum)
        return -1;
    return head->data + sum;
}