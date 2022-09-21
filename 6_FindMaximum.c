#include<stdio.h>
int main()
{
    int a,b;
    int* ptra=&a;
    int* ptrb=&b;
    printf("Enter first number: ");
    scanf("%d",ptra);
    printf("Enter second number: ");
    scanf("%d",ptrb);
    printf("Max number: %d", *ptra>*ptrb?*ptra:*ptrb);
    return 0;
}