queue *merge(queue *q1, queue *q2)
{
    queue *res = malloc(sizeof(queue));
    initialize(res);
    int list = 0;
    while (size(q1) > 0 || size(q2) > 0)
    {
        if (list == 0 && size(q1) > 0)
            enqueue(res, dequeue(q1));
        else if (list == 1 && size(q2) > 0)
            enqueue(res, dequeue(q2));
        list = (list + 1) % 2;
    }
    return res;
}