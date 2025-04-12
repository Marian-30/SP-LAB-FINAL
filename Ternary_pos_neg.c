#include<stdio.h>
int main ()
{
    int num;
    printf("Enter an integer number: \n");
    scanf("%d",&num);

    (num > 0) ?
    (printf("%d is Positive number\n",num)) :
    ((num < 0) ? (printf("%d is Negative number\n",num)):
    (printf("%d is Zero\n",num)));
    return 0;
}
