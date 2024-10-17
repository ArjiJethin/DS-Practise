#include <stdio.h>
#include <string.h>

struct student
{
    char name[50];
    int age;
    float percentage;
};

struct employee
{
    char name[50];
    int age;
    float salary;
};

struct pointers
{
    char data_str[50];
    int data_int;
    float data_percent;
};

int main()
{
    struct student s;
    strcpy(s.name, "Student");
    s.age = 18;
    s.percentage = 90.5;
    printf("Student Details:-\nName:- %s\nAge: %d\nPercentage: %f\n", s.name, s.age, s.percentage);
    struct employee emp[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter Employee %d details:-\n", i + 1);
        printf("Name: ");
        scanf("%s", emp[i].name);
        printf("Age: ");
        scanf("%d", &emp[i].age);
        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("The Employee %d details:-\n", i + 1);
        printf("Name: %s\n", emp[i].name);
        printf("Age: %d\n", &emp[i].age);
        printf("Salary: %f\n", &emp[i].salary);
    }

    struct pointers a[1];
    struct pointers *ptr[1];
    for (int i = 0; i < 1; i++)
    {
        ptr[i] = &a[i];
        printf("Enter Data %d details:-\n", i + 1);
        printf("Name: ");
        scanf("%s", ptr[i]->data_str);
        printf("Age: ");
        scanf("%d", &ptr[i]->data_int);
        printf("Salary: ");
        scanf("%f", &ptr[i]->data_percent);
    }

    for (int i = 0; i < 1; i++)
    {
        printf("The Details of %d are\n", i + 1);
        printf("Name: %s\n", ptr[i]->data_str);
        printf("Age: %d\n", ptr[i]->data_int);
        printf("Salary: %f\n", ptr[i]->data_percent);
    }
}