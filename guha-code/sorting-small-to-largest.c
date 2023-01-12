void bubblesort(int *array, int length)
{
    int i, j;
    for (i = length - 1; i > 0; i--)
    {
        for (j = 0; j < i; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}
void insertionsort(int *array, int length)
{
    int i, j;
    for (i = 1; i < length; i++)
    {
        j = i;
        while (j > 0 && array[j] < array[j - 1])
        {
            int temp = array[j];
            array[j] = array[j - 1];
            array[j - 1] = temp;
            j--;
        }
    }
}
void selectionsort(int *array, int length)
{
    int i, j;
    for (i = length - 1; i >= 0; i--)
    {
        int bestJ = 0;
        for (j = 1; j <= i; j++)
        {
            if (array[j] > array[bestJ])
                bestJ = j;
        }
        int temp = array[i];
        array[i] = array[bestJ];
        array[bestJ] = temp;
    }
}