// Write a program to check a number is a prime number or not, using recursion.

#include <stdio.h>

int i, num, chk_num;

int chk_prime_num(int num, int i)
{
    if (i == 1)
    {
        return 1;
    }
    else
    {
        if (num % i == 0)
        {
            return 0;
        }
        else
        {
            return chk_prime_num(num, i - 1);
        }
    }
}

int main()
{
    printf("Enter the number: ");
    scanf("%d", &num);

    chk_num = chk_prime_num(num, num / 2);

    if (chk_num == 1)
    {
        printf("%d is a prime number.", num);
    }
    else
    {
        printf("%d is not a prime number.", num);
    }

    return 0;
}
