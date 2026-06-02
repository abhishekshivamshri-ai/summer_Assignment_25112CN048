//write a program to Find factorial of a number
#include <stdio.h>

int main() {
    int num, i;
int fact = 1; 

   
    printf("Enter a integer: ");
    scanf("%d", &num);

   
    if (num < 0) {
        printf("Factorial doesn't exist.\n");
    } else {
       
        for (i = 1; i <= num; i++) {
            fact *= i; 
        }
        printf("Factorial of %d = %d\n", num, fact);
    }

    return 0;
}
