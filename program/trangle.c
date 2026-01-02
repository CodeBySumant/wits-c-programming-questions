#include <stdio.h>
int main()
{
    int a, b, c;

    printf("enter side length: \n");
    scanf("%d%d%d", &a,&b,&c);

    if (a == b && b == c && c == a) printf("Equilrateral\n");
    if (a == b && b == c && c != a || a == b && b != c && c == a || a != b && b == c && c == a) printf("Isosceies\n");
    if (a != b && b != c && c != a) printf("scalene\n");

    return 0;
}