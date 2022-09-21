#include<stdio.h>
int main(){
    int length, width;
    // taking input
    printf("Enter the length: ");
    scanf("%d",&length);
    printf("Enter the width: ");
    scanf("%d",&width);
    // showing output
    printf("Perimeter = %d",2*(length+width));
    return 0;
}