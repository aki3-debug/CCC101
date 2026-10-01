#include <stdio.h>

int main (void)
{
    float Ashley, Padecio;

    printf("++Magic Float Calculator++\n\n");
    printf("+-------------------------+\n");
    printf("Enter first number:");
    scanf("%f", &Ashley);
    printf("Enter second number:");
    scanf("%f", &Padecio);
    printf("+-------------------------+\n"); 
    printf("\n%.2f + %.2f = %.2f\n", Ashley, Padecio, Ashley + Padecio);
    printf("Thank you gwapo for using my calculator!\n");
    return 0;
}