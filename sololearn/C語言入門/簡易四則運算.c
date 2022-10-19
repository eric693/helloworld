#include <stdio.h>
int main()
{
    int num1, num2;
    char op;
    float ans;
    scanf("%d%c%d", &num1, &op, &num2);
    if (op == '+')
    {
        ans = num1 + num2;
    }
    else if (op == '-')
    {
        ans = num1 - num2;
    }
    else if (op == '*')
    {
        ans = num1 * num2;
    }
    else if (op == '/')
    {
        ans = (float)num1 / num2;
    }

    printf("ans: %f\n", ans);

    return 0;
}