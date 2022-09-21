#include<stdio.h>
int main()
{
    int startingRange;
    int endingRange;
    printf("Enter Starting Range: ");
    scanf("%d",&startingRange);
    printf("Enter Ending Range: ");
    scanf("%d",&endingRange);
    int j;
    for(int i=startingRange; i<=endingRange; i++)
    {
        for(j=2; j*j<=i; j++)
        {
            if(i%j==0)
                break;
        }
        if(i>1&&j*j>i)
            printf("%d\n",i);
    }
    return 0;
}