#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int temp=n;
    int cnt=0;
    while(temp!=0){
        temp/=10;
        cnt++;
    }
    temp=n;
    int digit;
    int arm=0;
    while(temp!=0){
        digit=temp%10;
        arm+=pow(digit, cnt);
        temp/=10;
    }
    if(arm==n)
        printf("%d is an Armstrong number.",n);
    else
        printf("%d isn't an Armstrong number.",n);
    return 0;
}