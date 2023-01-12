int dequeue(queue *thisQ)
{
    if (thisQ == NULL) // Grading – 1 pt
        return 0;
    if (thisQ->size == 0) // Grading – 1 pt
        return 0;
    int retval = thisQ->head->data; // Grading – 1 pt
    node *temp = thisQ->head;       // Grading – 1 pt

    thisQ->head = thisQ->head->next; // Grading – 1 pt
    if (this->size > 1)              // Grading – 1 pt
        thisQ->head->prev = NULL;
    else
        thisQ->tail = NULL;
    free(temp);    // Grading – 2pts
    thisQ->size--; // Grading – 1 pt
    return retval; // Grading – 1 pt
}