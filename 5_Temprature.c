#include<stdio.h>
void temprature(float temp);
int main()
{
    float temp;
    printf("Enter temprature in Celsius: ");
    scanf("%f",&temp);
    temprature(temp);
    return 0;
}
void temprature(float temp)
{
    if(temp>20)
        printf("Hot");
    else
        printf("Cold");
}