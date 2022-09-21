#include<stdio.h>
int sumOfDigits(int n);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Sum of digits = %d",sumOfDigits(n));
    return 0;
}
int sumOfDigits(int n){
    int sum=0;
    while(n!=0){
        sum+=n%10;
        n/=10;
    }
    return sum;
}