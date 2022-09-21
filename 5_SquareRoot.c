#include<stdio.h>
#include<math.h>
void sroot(int n);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    sroot(n);
    return 0;
}
void sroot(int n){
    printf("%.4f",sqrt(n));
}