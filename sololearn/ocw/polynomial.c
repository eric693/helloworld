#include <stdio.h>
#include <math.h>

int main()
{
    int coeff[101] = {0};
    int p, c;          // power,coeff
    int cnt_coeff = 0; //相加後多項式非0係數的個數
    int flag = 0;

    //讀入兩個多項式並相加
    for (int i = 0; i < 2; i++)
    {
        p = 0, c = 0;
        do
        {
            scanf("%d %d", &p, &c);
            coeff[p] += c;
        } while (p != 0);
    }

    //統計相加後多項式非0係數的個數
    for (int i = 100; i > -1; i--)
    {
        if (coeff[i] != 0)
        {
            cnt_coeff += 1;
        }
    }
    // 輸出為0
    if (cnt_coeff == 0)
    {
        printf("%d\n", cnt_coeff);
    }
    else
    {
        for (int i = 100; i > -1; i--)
        {
            //從第二項開始，正係數項前面列印+號
            if (flag && coeff[i] > 0)
            {
                printf("+");
            }
            //討論係數，冪次數為0，1，-1的輸出情況
            if (i != 0)
            {
                if (i == 1)
                {
                    if (coeff[1] == 1)
                    {
                        printf("x");
                    }
                    else if (coeff[1] == -1)
                    {
                        printf("-x");
                    }
                    else if (coeff[i] != 0)
                    {
                        printf("%dx", coeff[i]);
                    }
                }
                else
                {
                    if (coeff[i] == 1)
                    {
                        printf("x%d", i);
                    }
                    else if (coeff[i] == -1)
                    {
                        printf("-x%d", i);
                    }
                    else if (coeff[i] != 0)
                    {
                        printf("%dx%d", coeff[i], i);
                    }
                }
            }
            else
            {
                if (coeff[0] != 0)
                {
                    printf("%d\n", coeff[0]);
                }
                if (coeff[0] == 0)
                {
                    printf("\n");
                }
            }
            //只要coeff[i]!=0，那麼輸出的項且被涵蓋在上述分支當中，
            //因此迴圈第一次執行到這裡並滿足條件時第一項已經輸出
            if (coeff[i] != 0)
            {
                flag = 1;
            }
        }
    }

    return 0;
}