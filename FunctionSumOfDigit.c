#include <stdio.h>

long sum_of_digits(long n)
{
    long sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main(void)
{
    long n;
    printf("Enter a number: ");
    scanf("%ld", &n);
    printf("Sum of digits of the number is %ld", sum_of_digits(n));
    return 0;
}
