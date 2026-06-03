//Write a program to Find product of a number 
#include <stdio.h>

int main() {
    int num, rem;
    int prod = 1;

    printf("Enter an integer: ");
    scanf("%d", &num);


    if (num == 0) {
        prod = 0;
    }

    num = abs(num);

    while (num > 0) {
        rem = num % 10;
        
        if (rem == 0) {
            prod = 0;
            break; 
        }
        
        prod = prod * rem;
        num = num / 10;
    }

    printf("Product of the digits = %d\n", prod);

    return 0;
}
