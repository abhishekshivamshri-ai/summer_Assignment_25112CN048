// Write a program to find sum of digits of a number
#include <stdio.h>
int main() {
    int num, rem;
    int sum = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

   


    while (num > 0) {
        rem = num % 10;   
        sum = sum + rem;  
        num = num / 10;   
    }


    printf("Sum of the digits = %d\n", sum);

    return 0;
}

