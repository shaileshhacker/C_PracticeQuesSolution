#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter array elements:\n");
    int arr[n];
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    printf("Reverse Order:\n");
    for(int i=n-1; i>=0; i--)
        printf("%d\n",arr[i]);
    return 0;
}