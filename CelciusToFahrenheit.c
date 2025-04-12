#include <stdio.h>

float celsiusToFahrenheit(float celsius) {
    return (celsius * 9 / 5) + 32;
}

int main() {
    float c;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &c);

    float f = celsiusToFahrenheit(c);
    printf("%.2f Celsius = %.2f Fahrenheit\n", c, f);

    return 0;
}

