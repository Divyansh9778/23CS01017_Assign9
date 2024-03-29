#include <stdio.h>
typedef struct Time
{
    int day;
    int month;
    int year;
} time;
void compare(time *x, time *y, int *res)
{
    if (x->year > y->year)
        *res = 1;
    else if (x->year < y->year)
        *res = -1;
    else
    {
        if (x->month > y->month)
            *res = 1;
        else if (x->month < y->month)
            *res = -1;
        else
        {
            if (x->day > y->day)
                *res = 1;
            else if (x->day < y->day)
                *res = -1;
            else
                *res = 0;
        }
    }
}
int main()
{
    int res;
    struct Time time1, time2;
    printf("Enter first time: ");
    scanf("%d %d %d", &time1.day, &time1.month, &time1.year);
    printf("Enter second time: ");
    scanf("%d %d %d", &time2.day, &time2.month, &time2.year);
    compare(&time1, &time2, &res);
    printf("Result: %d", res);

    return 0;
}