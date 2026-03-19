#include <stdio.h>
#include <math.h>

void findSumOfDigits() {
    int num, sum = 0, digit;
    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0) {
        digit = num % 10; // Get the last digit
        sum = sum + digit; // Add it to sum
        num = num / 10;    // Remove the last digit
    }
    printf("Sum of digits: %d\n", sum);
}
#include <math.h>

void findSquareRoot() {
    double num, result;
    printf("Enter a number to find square root: ");
    scanf("%lf", &num);

    if (num < 0) {
        printf("Square root of negative number is not real.\n");
    } else {
        result = sqrt(num);
        printf("Square root: %.2lf\n", result);
    }
}
void checkTemperature() {
    float temp;
    printf("Enter temperature: ");
    scanf("%f", &temp);

    if (temp >= 30) {
        printf("It is Hot.\n");
    } else {
        printf("It is Cold.\n");
    }
}

long myPow(int base, int exp) {
    long result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

void powerExample() {
    int b, e;
    printf("Enter base and exponent: ");
    scanf("%d %d", &b, &e);
    printf("%d raised to the power %d is: %ld\n", b, e, myPow(b, e));
}