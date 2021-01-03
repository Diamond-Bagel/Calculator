#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int isPrime()
{
    int n, i, flag = 0;
    printf("Please enter a positive integer: \n");
    scanf("%d", &n);

    for (i = 2; i <= n / 2; ++i)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (n == 1)
    {
        printf("\n1 is neither prime nor composite.\n\n");
    }
    else
    {
        if (flag == 0)
        {
            printf("\n%d is a prime number.\n\n", n);
            return 0;
        } else
        {
            printf("\n%d is not a prime number.\n\n", n);
        }
    }
}

int main(void)
{
    double x, y;
    // For choosing what type of equation to do
    char math_choice;
    // For choosing whether or not to calculate an expression
    char choice;
    printf("Would you like to calculate an equation?(y/n)\n");
    choice = getch();

    do
    {
        printf("\n1)\tAdd\n2)\tSubtract\n3)\tDivide\n4)\tMultiply\n5)\tExponent\n6)\tSqrt\n7)\tCalculate Prime\n\n");
        math_choice = getch();
        if (math_choice == '7') {
            isPrime();
        }
        if (math_choice == '6')
        {
            printf("Enter your number: ");
            scanf("%lf", &x);
            printf("%lf\n", sqrt(x));
        }
        else
        {
            printf("First number: ");
            scanf("%lf", &x);

            printf("Second number: ");
            scanf("%lf", &y);
            switch (math_choice)
            {
            case '1':
                printf("\n%lf\n", x + y);
                break;
            case '2':
                printf("%lf\n", x - y);
                break;
            case '3':
                printf("%lf\n", x / y);
                break;
            case '4':
                printf("%lf\n", x * y);
                break;
            case '5':
                printf("%lf\n", pow(x, y));
                break;
            }
        }
        printf("Would you like to calculate another equation?(y/n)\n");
        choice = getch();
    } while (choice == 'y');
    return 0;
}

