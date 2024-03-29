#include <stdio.h>
#include <stdbool.h>
struct CourseRecord
{
    char firstName[50];
    char lastName[50];
    int rollNumber;
    char dept[50];
    char code[10];
    float testMarks[3];
};

float AvgMarks(struct CourseRecord person)
{
    float sum = 0;
    for (int i = 0; i < 3; i++)
        sum += person.testMarks[i];
    return sum / 3.0;
}

bool checkPassFail(struct CourseRecord person)
{
    float averageMarks = AvgMarks(person);
    if (averageMarks >= 35)
        return true;
    else
        return false;
}

int main()
{
    struct CourseRecord person;

    printf("Enter First name: ");
    gets(person.firstName);

    printf("Enter street: ");
    gets(person.lastName);

    printf("Enter Rol Number: ");
    scanf("%d", &person.rollNumber);

    printf("Enter zip code: ");
    getchar();
    gets(person.code);

    printf("Enter Department: ");
    gets(person.dept);

    for (int i = 0; i < 3; i++)
    {
        printf("Enter Test Marks: ");
        scanf("%f", &person.testMarks[i]);
    }
    printf("Average Test Marks: %.2f\n", AvgMarks(person));

    if (checkPassFail(person))
        printf("Pass\n");
    else
        printf("Fail\n");

    return 0;
}