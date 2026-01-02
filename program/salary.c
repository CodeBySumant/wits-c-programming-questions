#include <stdio.h>
int main()
{
    int bs , ns;

    printf("enter basic salary: ");
    scanf("%d", &bs);

    if (bs <= 10000)
    {
        ns = bs * 10 / 100;
        printf("New salary: %d\n", bs + ns);
    }
    if (bs >= 10000)
    {
        ns = bs * 20 / 100;
        printf("New salary: %d\n", bs + ns);
    }
    return 0;
}