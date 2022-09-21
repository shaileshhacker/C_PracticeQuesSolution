#include<stdio.h>
int main()
{
    int n;
    int x;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements:\n");
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    printf("Enter X: ");
    scanf("%d",&x);
    int cnt=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]==x)
            cnt++;
    }
    printf("Occurrence of %d = %d times",x,cnt);
    return 0;
}