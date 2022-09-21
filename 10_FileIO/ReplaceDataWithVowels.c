#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr=fopen("ReadMe.txt","r");
    if(fptr==NULL){
        printf("File doesn't exist:(");
    }
    else{
        FILE* fptr2;
        fptr2=fopen("ReadMe2.txt","w");
        char ch;
        ch=fgetc(fptr);
        while(ch!=EOF){
            if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
            {
                fprintf(fptr2,"%c\t",ch);
            }
            ch=fgetc(fptr);
        }
        fclose(fptr);
        fclose(fptr2);
    }
    return 0;
}