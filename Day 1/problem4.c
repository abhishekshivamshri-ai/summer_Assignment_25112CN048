// Write  a program to count digit in a number 
#include <stdio.h>

int main() {
    int num, temp;
    int count = 0;

    // Ask the user to enter a number
    printf("Enter an integer: ");
    scanf("%d", &num);

    
    if (num == 0) {
        count = 1;
    } else {
        
        for (temp = num; temp != 0; temp /= 10) {
            count++;
        }
    }

    printf("Number of digits: %d\n", count);

    return 0;
}
