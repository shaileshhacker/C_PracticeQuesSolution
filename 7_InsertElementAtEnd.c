#include<stdio.h>
int main()
{
    int arr[10]={8,13,17,18,19,21,27};
    int n=7;
    for(int i=0; i<n; i++)
        printf("%d\t",arr[i]);
    printf("\nWhich element do you want to insert at the end?\nEnter the element: ");
    scanf("%d",&arr[n++]);
    printf("Element added successfully...\n");
    for(int i=0; i<n; i++)
        printf("%d\t",arr[i]);
    return 0;
}