// 2 3 5 6 8
void sort(int values[], int n)
{
    // i以前的元素都是排好的
    //例如說i=1,代表第0個元素都是排好的
    // i=3,就代表說0,1,2這三個元素是排好的
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