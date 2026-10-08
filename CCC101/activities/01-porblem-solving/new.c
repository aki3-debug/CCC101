#include <stdio.h>

int main() {
    int notebook=2;
    int price=45;
    int payment=80;  
    int total=notebook*price;
    int change=payment-total;

    if(payment>=90){
        printf("The total is: %d\n",total);
        printf("The change is: %d\n",change);

    } else {
        printf("Insufficient payment.\n");
    }
    return 0;
}