#include <stdio.h>
#include <stdlib.h>

int main()
{
    float physic = 76.00, math = 65.25,
          clang = 83.50, eng = 92.75;
    float total = physic + math + clang + eng;
    float avg = total / 4;

    printf("Physic:%.2f\tmath:%.2f\tc:%.2f\tEng:%.2f\n",
           physic, math, clang, eng);
    printf("total:%.2f\t,avg:%.2f\t", total, avg);
    return 0;
}