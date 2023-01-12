int isPalindrome(char *str)
{
    struct stack s;
    initialize(&s);
    int len = strlen(str);

    for (int i = 0; i < len; i++)
        push(&s, str[i]);

    for (int i = 0; i < len; i++)
    {
        if (pop(&s) != str[i])
            return 0;
    }

    return 1;
}