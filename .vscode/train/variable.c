#include <stdio.h>

int main(void)
{
    // 宣告變數但未初始值
    int ageOfStudent;
    double scoreOfStudent;
    char levelOfStudent;
    printf("\n年級\t得分\t等級\n");
    printf("%d\t%f\t%d\n", ageOfStudent, scoreOfStudent, levelOfStudent);

    ageOfStudent = 5;
    scoreOfStudent = 80.0;
    levelOfStudent = 'B';
    printf("\n年級\t得分\t等級\n");
    printf("%d\t%.2f\t%c\n", ageOfStudent, scoreOfStudent, levelOfStudent);

    return 0;
}