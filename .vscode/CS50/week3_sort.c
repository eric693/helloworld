//簡化問題 找最小值

void sort(int values[], int n)
{
    int min = values[0];
    int minIndex = 0;
    for (int i = 1; i < n; i++)
    {
        if (values[i] < min)
        {
            min = values[i];
            minIndex = i;
        }
    }
    // minIndex => 最小值的index
    // min => 最小值

    // 3 5 8 2 7
    // 2 3 5 7 8
}