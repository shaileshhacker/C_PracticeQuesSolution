#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("ReadMe.txt", "r");
    if (fptr == NULL)
    {
        printf("File doesn't exist:(");
    }
    else
    {
        char ch=fgetc(fptr);
        while(ch!=EOF){
            printf("%c",ch);
            ch=fgetc(fptr);
        }
        fclose(fptr);
    }
    return 0;
}