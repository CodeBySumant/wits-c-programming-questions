#include <stdio.h>
int main()
{
    char c;

    printf("enter character: ");
    scanf("%c", &c);

    //debug

    printf("Debug_Code: %d\n", c);
    if(c>=65 && c <= 90) printf("UpperCase: %c \n", c);
    if(c>=97 && c <= 122) printf("lowerCase: %c \n", c);
    if(c>=48 && c <= 57) printf("Digit: %c \n", c);
    if(c>=33 && c <= 48) printf("Special Character : %c \n", c);

    return 0;
}