#include <stdio.h>
#include <stdlib.h>
void swap(int,int);
int main()
{
    int a=2;
    int b=3;
    printf("Before swapping:\n a=%d\tb=%d",a,b);
    swap(a,b);
    return 0;
}
void swap(int x,int y)
{
    int tmp;
    tmp=x;
    x=y;
    y=tmp;
    printf("\nWhile swapping:\n a=%d\tb=%d",x,y);
}
