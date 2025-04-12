#include <stdio.h>

int findLargest(int a, int b, int c) {
    if (a >= b && a >= c)
        return a;
    else if (b >= a && b >= c)
        return b;
    else
        return c;
}

int main() {
    int a, b, c;
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("The largest number is: %d", findLargest(a, b, c));
    return 0;
}

