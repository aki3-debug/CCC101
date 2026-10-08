#include "stdio.h"

void main (){
    float Ashley, Padecio;
    printf("Enter first number:\n");
    scanf("%f",&Ashley);

    printf("Enter second number:\n");
    scanf("%f",&Padecio);

    printf("\n%.2f + %.2f = %.2f", Ashley, Padecio,Ashley + Padecio);
    return 0;
}