#include <stdio.h>
struct Address
{
    char street[100];
    char city[50];
    char zipCode[10];
};

struct Person
{
    char name[50];
    struct Address address;
};

int main()
{
    struct Person person;

    printf("Enter name: ");
    gets(person.name);

    printf("Enter street: ");
    gets(person.address.street);

    printf("Enter city: ");
    gets(person.address.city);

    printf("Enter zip code: ");
    gets(person.address.zipCode);

    printf("\nPerson Details:\n");
    printf("Name: %s\n", person.name);
    printf("Street: %s\n", person.address.street);
    printf("City: %s\n", person.address.city);
    printf("Zip Code: %s\n", person.address.zipCode);

    return 0;
}