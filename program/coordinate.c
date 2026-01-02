#include <stdio.h>
int main()
{
    int x, y;
    printf("enter x,y: \n");
    scanf("%d %d", &x, &y);

    if(x>0 && y>0) printf("First Quard x:%d\t y:%d\n", x ,y);
    if(x<0 && y>0) printf("Second Quard x:%d\t y:%d\n", x ,y);
    if(x<0 && y<0) printf("Third Quard x:%d\t y:%d\n", x ,y);
    if(x>0 && y<0) printf("Forth Quard x:%d\t y:%d\n", x ,y);

    return 0;
}