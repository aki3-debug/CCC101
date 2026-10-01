#include <stdio.h>

int main(void)
{
    int Ashley, Padecio;

    printf("Enter two numbers: ");
    if (scanf("%d %d", &Ashley, &Padecio) != 2) {
        printf("Invalid input. Please enter two integers.\n");
        return 1;
    }

    printf("\n");
    printf("+---Simple Calculator---+\n");
    printf("|  %d + %d = %d       |\n", Ashley, Padecio, Ashley + Padecio);
    printf("+-----------------------+\n");
    return 0;

}