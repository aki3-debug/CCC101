#include "stdio.h"

void main() {

    int ashley, padecio;

    printf("Enter an integer:");
    scanf("%d",&ashley);

    padecio=ashley;

    if (padecio < 0)
        padecio = -padecio;

        while (padecio >= 2)
        {
            padecio = padecio -2;
        }
    if (padecio==0)
    printf("The number %d is even.\n", ashley);
    else
    printf("The number %d is odd.\n", ashley);
}