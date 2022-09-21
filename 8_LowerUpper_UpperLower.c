#include<stdio.h>
void lowerUpper_UpperLower(char* str);
int main()
{
    char* str;
    printf("Enter a string: ");
    fgets(str,50,stdin);
    lowerUpper_UpperLower(str);
    puts(str);
    return 0;
}
void lowerUpper_UpperLower(char* str){
    char* temp=str;
    while(*str!='\0')
    {
        if(*str>=97&&*str<=122)
            *str-=32;
        else if(*str>=65&&*str<=90)
            *str+=32;
        str++;
    }
    str=temp;
}