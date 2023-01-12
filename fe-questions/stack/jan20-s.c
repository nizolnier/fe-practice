stack *reverseStack(stack *s)
{
    stack *newS = malloc(sizeof(stack));

    newS->size = 0;
    newS->top = NULL;

    if (isEmpty(s))
        return NULL;

    while (!isEmpty)
    {
        push(newS, pop(s));
    }

    return newS;
}