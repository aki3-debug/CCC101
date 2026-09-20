#include <stdio.h>

int main (void)
{
    float a, b;

    printf("++Magic Float Calculator++\n\n");

    printf("Enter first number:");
    scanf("%f", &a);
    printf("Enter second number:");
    scanf("%f", &b);

    printf("\n%2.f + %2.f = %2.f\n", a, b, a + b);
    printf("Thank you master for using my calculator!\n");
    return 0;
}