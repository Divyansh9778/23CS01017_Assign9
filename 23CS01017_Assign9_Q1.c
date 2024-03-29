#include <stdio.h>
struct company
{
    char name[50];
    char address[100];
    char phone[15];
    int no_employee;
};

int main()
{
    struct company comp;

    printf("Enter the name of the company: ");
    gets(comp.name);

    printf("Enter the address of the company: ");
    gets(comp.address);

    printf("Enter the phone number of the company: ");
    gets(comp.phone);

    printf("Enter the number of employees in the company: ");
    scanf("%d", &comp.no_employee);

    printf("\nCompany Details\n");
    printf("Name: %s\n", comp.name);
    printf("Address: %s\n", comp.address);
    printf("Phone: %s\n", comp.phone);
    printf("Number of Employees: %d\n", comp.no_employee);

    return 0;
}