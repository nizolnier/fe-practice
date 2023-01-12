int enqueue(queue *thisQ, int item)
{
    struct node *newNode = malloc(sizeof(newNode));
    if (thisQ == NULL)
        return 0;
    if (newNode == NULL)
        return 0;
    newNode->data = item;
    newNode->next = NULL;
    thisQ->size = thisQ->size + 1;
    if (thisQ->head == NULL)
    {
        newNode->prev = NULL;
        thisQ->head = newNode;
        thisQ->tail = newNode;
        return 1;
    }
    newNode->prev = thisQ->tail;
    thisQ->tail->next = newNode;
    thisQ->tail = newNode;
    return 1;
}