#include <stdio.h>
int main()
{
    int a,b,sum,sub,mult,divide,num;
    printf("Enter a and b values :");
    scanf("%d%d",&a,&b);
    printf("\nEnter your choice:\n1.Addition\n2.Subtraction\n3.Multiply\n4.Divide\n");
    scanf("%d",&num);
    switch(num)
    {
       case 1:
       sum=a+b;
       printf("\nSum of a and b is %d",sum);
       break;
       case 2:
       sub=a-b;
       printf("\nDifference of a and b is %d",sub);
       break;
       case 3:
       mult=a*b;
       printf("\nproduct of a and b is %d",mult);
       break;
       case 4:
       divide=a/b;
       printf("\nDivision of a and b is %d",divide);
       break;
       default: printf("\nEnter correct choice....");
       break;
    }
}


