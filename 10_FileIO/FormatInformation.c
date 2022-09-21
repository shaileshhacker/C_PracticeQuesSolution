#include<stdio.h>
typedef struct students{
    char name[30];
    int marks;
    float cgpa;
    char course[50];
}std;
int main()
{
    std student[5];
    for(int i=0; i<5; i++)
    {
        printf("\nEnter %d student information:-\n",i+1);
        printf("Name: ");
        fflush(stdin);
        fgets(student[i].name,30,stdin);
        printf("Marks: ");
        scanf("%d",&student[i].marks);
        printf("CGPA: ");
        scanf("%f",&student[i].cgpa);
        printf("Course Name: ");
        fflush(stdin);
        fgets(student[i].course,50,stdin);
    }
    FILE *fptr;
    fptr=fopen("StudentsInfo.txt","w");
    fprintf(fptr,"*******Information of all Students*******\n\n");
    for(int i=0; i<5; i++)
    {
        fprintf(fptr,"Information of Student: %d\n",i+1);
        fprintf(fptr,"Name: %s",student[i].name);
        fprintf(fptr,"Marks: %d\n",student[i].marks);
        fprintf(fptr,"CGPA: %.2f\n",student[i].cgpa);
        fprintf(fptr,"Course: %s\n",student[i].course);
    }
    printf("\nInformation successfully saved...\nThank You:)");
    fclose(fptr);
    return 0;
}