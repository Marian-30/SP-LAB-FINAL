#include<stdio.h>
int main ()
{
    int num1, num2;
    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);

    int largest = (num1 > num2) ? num1 : num2;
    printf("Largest of %d and %d is %d\n",num1,num2,largest);

    return 0;
}
