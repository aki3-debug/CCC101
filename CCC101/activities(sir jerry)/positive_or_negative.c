# include <stdio.h>

void main() {

    int ashley;
    float padecio;

    printf("Enter two numbers(int float):");
    scanf("%d %f",&ashley,&padecio);

    if(ashley>0) printf("The number %d is positive.\n", ashley);
    else if(ashley<0) printf("The number %d is negative.\n", ashley);
    else printf("The number %d is neutral.\n", ashley);

    if(padecio>0) printf("The number %f is positive.\n", padecio);
    else if(padecio<0) printf("The number %f is negative.\n", padecio);
    else printf("The number %f is neutral.\n", padecio);


}