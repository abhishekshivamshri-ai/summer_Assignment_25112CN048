//Write a program to calculate sum of N natural number
#include <stdio.h>

int main() {
    int n, sum;

    
    printf("Enter a integer: ");
    scanf("%d", &n);

    
    sum = n * (n + 1) / 2;

   
    printf("Sum of natural numbers = %d\n",  sum);

    return 0;
}
