/* file name : polynominal.c */
/* 利用陣列表示法做多項式相加 */

#include <stdio.h>
#include <stdlib.h>
#define DUMMY -1

void output_P(int[], int);
void Padd(int[], int[], int[]);
char compare(int, int);

int main()
{
    /*  多項式的表示方式利用只儲存非零項法
        分別儲存每一個非零項的指數及個數，
        陣列第一元素放多項式非零項個數。
        ex: 下列A多項式有3個非零項，其多項式為 :
        5x四次方 + 3x二次方 + 2  */

    int A[] = {DUMMY, 3, 4, 5, 2, 3, 0, 2};
    int B[] = {DUMMY, 3, 3, 6, 2, 2, 0, 1};
    int C[13] = {DUMMY};

    Padd(A, B, C); /*將A加B放至C */

    /*顯示各多項式結果*/
    printf("\nA = ");
    output_P(A, A[1] * 2 + 1); /*A[1]*2 + 1為陣列A的大小*/
    printf("\nB = ");
    output_P(B, B[1] * 2 + 1);
    printf("\nC = ");
    output_P(C, C[1] * 2 + 1);
    printf("\n");

    return 0;
}

void Padd(int a[], int b[], int c[])
{
    int p, q, r, m, n;
    char result;

    m = a[1];
    n = b[1];
    p = q = r = 2;

    while ((p <= 2 * m) && (q <= 2 * n))
    {
        /*比較a與b的指數*/
        result = compare(a[p], b[q]);
        switch (result)
        {
        case '=':
            c[r + 1] = a[p + 1] + b[q + 1]; /*係數相加*/
            if (c[r + 1] != 0)
            {
                c[r] = a[p]; /*指數assign給c */
                r += 2;
            }
            p += 2;
            q += 2; /*移至下一個指數位置*/
            break;

        case '>':
            c[r + 1] = a[p + 1];
            c[r] = a[p];
            p += 2;
            r += 2;
            break;

        case '<':
            c[r + 1] = b[q + 1];
            c[r] = b[q];
            q += 2;
            r += 2;
            break;
        }
    }

    /*將多項式 a 的餘項全部移至 c */
    while (p <= 2 * m)
    {
        c[r + 1] = a[p + 1];
        c[r] = a[p];
        p += 2;
        r += 2;
    }
    /*將多項式 b 的餘項全部移至 c */
    while (q <= 2 * n)
    {
        c[r + 1] = b[q + 1];
        c[r] = b[q];
        q += 2;
        r += 2;
    }
    c[1] = r / 2 - 1; /*計算c總共有多少非零項*/
}

char compare(int x, int y)
{
    if (x == y)
        return '=';
    else if (x > y)
        return '>';
    else
        return '<';
}

void output_P(int p[], int n)
{
    int i;

    printf("(");
    for (i = 1; i <= n; i++)
        printf("%3d", p[i]);
    printf("  )");
}
