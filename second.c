#include <stdio.h>

int main(){

    float num1;

    printf("Enter the first number : ");
    scanf("%f", &num1);

    float num2;

    printf("Enter the second number : ");
    scanf("%f", &num2);

    char operation;

    printf("Which mathematical operation would you like to perform (+), (-), (*), (/) : ");
    scanf(" %c", &operation);

    float sum;

    if (operation == '+')
    {
        sum = num1 + num2;
    }
    else if (operation == '-')
    {
        if (num1 > num2)
        {
            sum = num1 - num2;
        }
        else
        {
            sum = num2 - num1;
        }
    }
    else if (operation == '*')
    {
        sum = num1 * num2;
    }
    else if (operation == '/')
    {
        sum = num1 / num2;
    }
    else 
    {
        printf("ERROR");
    }

    printf("Your answer is %.2f\n", sum);

    return 0;
}
