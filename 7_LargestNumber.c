#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements:\n");
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    int mx=arr[0];
    for(int i=0; i<n; i++)
    {
        if(arr[i]>mx){
            mx=arr[i];
        }
    }
    printf("Largest number: %d",mx);
    return 0;
}