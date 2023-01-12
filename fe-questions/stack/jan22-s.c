int eval(int *expr, int len)
{
    stack s;
    init(&s);
    int i;

    for (i = 0; i < len; i++)
    {
        if (expr[i] == -1)
        {
            int a = pop(&s);
            int b = pop(&s);
            int sum = b - a;
            push(&s, sum);
        }
        else if (expr[i] == -2)
        {
            int a = pop(&s);
            int b = pop(&s);
            int sub = b - a;
            push(&s, sub);
        }
        else
        {
            push(&s, expr[i]);
        }
    }

    return pop(&s);
}