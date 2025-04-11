#include <stdio.h>

int main()
{
    int i, num, odd = 0, even = 0;

    printf("Enter the value of num\n");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        if (i % 2 == 0)
            even++;
        else
            odd++;
    }
    printf("Sum of all odd numbers  = %d\n", odd);
    printf("Sum of all even numbers = %d\n", even);
}

