#include<stdio.h>
int main()
{
    int unit, bill;

    printf("Enter Unit: ");
    scanf("%d", &unit);

    if (unit <= 100)
    {
        /* code */
        bill = unit * 1;
        printf("Your Bill = %d\n", bill);
    }
    if (unit >= 100 && unit <= 200)
    {
        /* code */
        bill = unit * 2;
        printf("Your Bill = %d\n", bill);
    }
    if (unit >= 200)
    {
        /* code */
        bill = unit * 3;
        printf("Your Bill = %d\n", bill);
    }
    return 0;
}