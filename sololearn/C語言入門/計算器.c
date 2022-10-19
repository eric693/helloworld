#include <stdio.h>

int main()
{

    char operator;

    double firstNumber, secondNumber;

    printf("輸入運算子 (+, -, *,/): ");

    scanf("%c", &operator);

    printf("輸入兩個數字: ");

    scanf("%lf %lf", &firstNumber, &secondNumber);

    switch (operator)

    {

    case '+':

        printf("%.1lf + %.1lf = %.1lf", firstNumber, secondNumber, firstNumber + secondNumber);

        break;

    case '-':

        printf("%.1lf - %.1lf = %.1lf", firstNumber, secondNumber, firstNumber - secondNumber);

        break;

    case '*':

        printf("%.1lf * %.1lf = %.1lf", firstNumber, secondNumber, firstNumber * secondNumber);

        break;

    case '/':

        printf("%.1lf / %.1lf = %.1lf", firstNumber, secondNumber, firstNumber / secondNumber);

        break;

        // operator doesn't match any case constant (+, -, *, /)

    default:

        printf("Error! operator is not correct");
    }

    return 0;
}