#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int i;
    for(i=2; i*i<=n; i++)
    {
        if(n%i==0)
            break;
    }
    if(n>1&&i*i>n)
        printf("%d is Prime",n);
    else
        printf("%d is Non-Prime",n);
    return 0;
}