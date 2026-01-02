#include <stdio.h>
int main ()
{
    int x , y;
    char op;
    float a1, s2, m3, d4;

    printf("1. Addtion\n2. Subtraction\n3. Multiplication\n4. Division\n\t\tenter Operator(1-4): ");
    scanf("%c", &op);

    printf("enter both number(First 'x' & second 'y'): \n");
    scanf("%d%d", &x, &y);

    if (op == 49)
    {
        /* Addition*/
        a1 = x + y;
        printf("Total Sum is %.2f\n", a1);
    }
    if (op == 50)
    {
        /* subtraction */
        s2 = x - y;
        printf("Difference is %.2f\n", s2);
    }
    if (op == 51)
    {
        /* Multiplication */
        m3 = x * y;
        printf("Multiplication is %.2f\n", m3);
    }
    if (op == 52)
    {
        /* Division */
        d4 = x / y ;
        printf("result is %.2f\n", d4);
    }
    return 0;
}