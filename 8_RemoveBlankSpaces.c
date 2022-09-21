#include<stdio.h>
void removeBlankSpaces(char* str);
int main()
{
    char* str;
    printf("Enter a string: ");
    fgets(str,50,stdin);
    removeBlankSpaces(str);
    puts(str);
    return 0;
}
void removeBlankSpaces(char* str){
    char* temp=str;
    while(*str!='\0'){
        if(*str==' ')
        {
            char* tempp=str;
            while(*str!='\0')
            {
                *str=*(str+1);
                str++;
            }
            str=tempp;
        }    
        str++;
    }
    str=temp;
}