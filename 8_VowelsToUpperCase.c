#include<stdio.h>
void vowelsToUpper(char* str);
int main()
{
    char *str;
    printf("Enter string: ");
    fgets(str,50,stdin);
    vowelsToUpper(str);
    puts(str);
    return 0;
}
void vowelsToUpper(char* str){
    char* temp=str;
    while(*str!='\0'){
        if(*str=='a'||*str=='e'||*str=='i'||*str=='o'||*str=='u'){
            *str-=32;
        }
        str++;
    }
    str=temp;
}