// Write a program to check whether a number is prime or not 
#include<stdio.h>
int prime(int num){
    if(num<=1){
        return 0;
    }
    for(int i =2;i<=num/2;i++){
        if(num%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int n;
    printf ("Enter a number to check whether prime or not=");
    scanf("%d",&n);
    if(prime(n)){
        printf("Number is prime");
    }
else 
{
    printf("Numeber is not prime");
}
return 0;
}