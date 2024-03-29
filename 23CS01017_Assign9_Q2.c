#include <stdio.h>
struct Student
{
    int rollNo;
    char name[100];
    char address[100];
    int age;
    float averageMarks;
};

void readDetails(struct Student *student)
{
    printf("Enter Roll No: ");
    scanf("%d", &student->rollNo);

    getchar();
    printf("Enter Name: ");
    gets(student->name);

    printf("Enter Address: ");
    gets(student->address);

    printf("Enter Age: ");
    scanf("%d", &student->age);

    printf("Enter Average Marks: ");
    scanf("%f", &student->averageMarks);
}

void StudentDetails(struct Student student)
{
    printf("\nRoll No: %d\n", student.rollNo);
    printf("Name: %s\n", student.name);
    printf("Address: %s\n", student.address);
    printf("Age: %d\n", student.age);
    printf("Average Marks: %.2f\n", student.averageMarks);
}

int main()
{
    struct Student students[6];

    for (int i = 0; i < 6; i++)
    {
        printf("\nEnter details for student %d:\n", i + 1);
        readDetails(&students[i]);
    }

    printf("\nDetails of all students:\n");
    for (int i = 0; i < 6; i++)
    {
        printf("\nStudent %d:\n", i + 1);
        StudentDetails(students[i]);
    }

    return 0;
}