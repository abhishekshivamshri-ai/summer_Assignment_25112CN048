// write a program wheather a number is palindrome or not
#include <stdio.h>
int palindrome(int num) {
    int originalNum = num;
    int remain;
    int revNum = 0;

   
    if (num < 0) {
        return 0; 
    }

    while (num != 0) {
        remain = num % 10;
        revNum = revNum * 10 + remain;
        num /= 10;
    } 
    if (originalNum == revNum) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int num; 

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (palindrome(num)) {
        printf("%d is a palindrome number.\n", num);
    } else {
        printf("%d is not a palindrome number.\n", num);
    }

    return 0;
}
