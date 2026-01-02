#include <stdio.h>
int main()
{
    int x;

    printf("Enter Number: ");
    scanf("%d", &x);

    if(x%2==0 && x%3==0) printf("%d is divisible by 2 and 3\n", x);
    if(x%2==0 && x%3!=0) printf("%d is divisible by only 2\n", x);
    if(x%2!=0 && x%3==0) printf("%d is divisible by only 3\n", x);
    if(x%2!=0 && x%3!=0) printf("%d is divisible by Non\n", x);

    return 0;
}