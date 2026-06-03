//Write a program to print reverse of a number 
#include <stdio.h>

int main() {
    int num, rem;

   
    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Reverse of the number = ");

    // Handle 0 explicitly
    if (num == 0) {
        printf("0");
    }

   
    if (num < 0) {
        printf("-");
        num = abs(num);
    }


    while (num > 0) {
        rem = num % 10;   
        printf("%d", rem);
        num = num / 10;   

    printf("\n");
    return 0;
}
