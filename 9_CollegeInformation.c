#include <stdio.h>
struct students
{
    int roll_no;
    char name[30];
    int age;
    float cgpa;
};
struct teachers
{
    int id;
    char name[30];
    int age;
    int salary;
    char subject[20];
};
struct stuffs
{
    int id;
    char name[30];
    int age;
    int salary;
    char post[25];
};
int studentNumber = 0;
int teacherNumber = 0;
int stuffNumber = 0;
void storeInfoStudent(struct students student[]);
void storeInfoTeacher(struct teachers teacher[]);
void storeInfoStuff(struct stuffs stuff[]);
void displayInfoStudent(struct students student[]);
void displayInfoTeacher(struct teachers teacher[]);
void displayInfoStuff(struct stuffs stuff[]);
int main()
{
    struct students student[100];
    struct teachers teacher[20];
    struct stuffs stuff[30];
    int ch = 1;
    while (ch != 0)
    {
        printf("\nWhat do you want?\n1. Store Information\n2. Display Information\n0. Exit \n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
        {
            int back=1;
            while (back != 0)
            {
                printf("\nWhose information do you want to Store?\n1. Student\n2. Teacher\n3. Stuff\n0. Back\nEnter your choice(1,2,3 or 0): ");
                scanf("%d", &back);
                switch (back)
                {
                case 1:
                    storeInfoStudent(student);
                    break;
                case 2:
                    storeInfoTeacher(teacher);
                    break;
                case 3:
                    storeInfoStuff(stuff);
                    break;
                case 0:
                    break;
                default:
                    printf("Wrong Input...");
                }
            }
        }
        break;
        case 2:
        {
            int back=1;
            while (back != 0)
            {
                printf("\nWhose information do you want to Display?\n1. Student\n2. Teacher\n3. Stuff\n0. Back\nEnter your choice(1,2,3 or 0): ");
                scanf("%d", &back);
                switch (back)
                {
                case 1:
                    displayInfoStudent(student);
                    break;
                case 2:
                    displayInfoTeacher(teacher);
                    break;
                case 3:
                    displayInfoStuff(stuff);
                    break;
                case 0:
                    break;
                default:
                    printf("Wrong Input...");
                }
            }
        }
        break;
        case 0:
            break;
        default:
            printf("Wrong Input...");
            break;
        }
    }
    printf("\nThank You:)");
    return 0;
}
void storeInfoStudent(struct students student[])
{
    printf("\n\n*******Enter students information*******\n");
    int ch = 1;
    do
    {
        printf("Enter %d Student information:\n", studentNumber + 1);
        printf("Enter roll numer: ");
        scanf("%d", &student[studentNumber].roll_no);
        printf("Enter name: ");
        fflush(stdin);
        fgets(student[studentNumber].name, 30, stdin);
        printf("Enter age: ");
        scanf("%d", &student[studentNumber].age);
        printf("Enter CGPA: ");
        scanf("%f", &student[studentNumber].cgpa);
        studentNumber++;
        if (studentNumber == 100)
        {
            printf("\n\nLimit exceeded.\nYou can store only 100 students information...");
            break;
        }
        printf("Do you want to add another student information?\nEnter '1' to continue...\nEnter '0' to stop.\n");
        scanf("%d", &ch);
    } while (ch != 0);
}
void storeInfoTeacher(struct teachers teacher[])
{
    printf("\n\n*******Enter Teachers information*******\n");
    int ch = 1;
    do
    {
        printf("Enter %d teacher information:\n", teacherNumber + 1);
        printf("Enter ID: ");
        scanf("%d", &teacher[teacherNumber].id);
        printf("Enter name: ");
        fflush(stdin);
        fgets(teacher[teacherNumber].name, 30, stdin);
        printf("Enter age: ");
        scanf("%d", &teacher[teacherNumber].age);
        printf("Enter salary: ");
        scanf("%d", &teacher[teacherNumber].salary);
        fflush(stdin);
        printf("Enter subject: ");
        fgets(teacher[teacherNumber].subject, 25, stdin);
        teacherNumber++;
        if (teacherNumber == 20)
        {
            printf("\n\nLimit exceeded.\nYou can store only 20 teachers information...");
            break;
        }
        printf("Do you want to add another teacher information?\nEnter '1' to continue...\nEnter '0' to stop.\n");
        scanf("%d", &ch);
    } while (ch != 0);
}
void storeInfoStuff(struct stuffs stuff[])
{
    printf("\n\n*******Enter Stuffs information*******\n");
    int ch = 1;
    do
    {
        printf("Enter %d stuff information:\n", stuffNumber + 1);
        printf("Enter ID: ");
        scanf("%d", &stuff[stuffNumber].id);
        printf("Enter name: ");
        fflush(stdin);
        fgets(stuff[stuffNumber].name, 30, stdin);
        printf("Enter age: ");
        scanf("%d", &stuff[stuffNumber].age);
        printf("Enter salary: ");
        scanf("%d", &stuff[stuffNumber].salary);
        printf("Enter post: ");
        fflush(stdin);
        fgets(stuff[stuffNumber].post, 25, stdin);
        stuffNumber++;
        if (stuffNumber == 30)
        {
            printf("\n\nLimit exceeded.\nYou can store only 30 stuffs information...");
            break;
        }
        printf("Do you want to add another stuff information?\nEnter '1' to continue...\nEnter '0' to stop.\n");
        scanf("%d", &ch);
    } while (ch != 0);
}
void displayInfoStudent(struct students student[])
{
    if(studentNumber==0)
    {
        printf("No Records available:(\n");
        return;
    }
    for (int i = 0; i < studentNumber; i++)
    {
        printf("\n\n******* %d *******\n", i + 1);
        printf("Roll No: %d\n", student[i].roll_no);
        printf("Name: %s", student[i].name);
        printf("Age: %d\n", student[i].age);
        printf("CGPA: %f\n", student[i].cgpa);
    }
}
void displayInfoTeacher(struct teachers teacher[])
{
    if(teacherNumber==0)
    {
        printf("No Records available:(\n");
        return;
    }
    for (int i = 0; i < teacherNumber; i++)
    {
        printf("\n\n******* %d *******\n", i + 1);
        printf("ID: %d\n", teacher[i].id);
        printf("Name: %s", teacher[i].name);
        printf("Age: %d\n", teacher[i].age);
        printf("Subject: %s", teacher[i].subject);
        printf("Salary: %d\n", teacher[i].salary);
    }
}
void displayInfoStuff(struct stuffs stuff[])
{
    if(stuffNumber==0)
    {
        printf("No Records available:(\n");
        return;
    }
    for (int i = 0; i < stuffNumber; i++)
    {
        printf("\n\n******* %d *******\n", i + 1);
        printf("ID: %d\n", stuff[i].id);
        printf("Name: %s", stuff[i].name);
        printf("Age: %d\n", stuff[i].age);
        printf("Post: %s", stuff[i].post);
        printf("Salary: %d\n", stuff[i].salary);
    }
}