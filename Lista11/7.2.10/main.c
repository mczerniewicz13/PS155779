#include <stdio.h>
#include <stdlib.h>
union super_int{
int x;
unsigned int y;
};

int main()
{
    int a = 5;
    unsigned int b = 3;
    union super_int c;
    c.x=b;
    c.y=a;
    printf("%d,%d\n",c.x,c.y);
    c.x=a;
    c.y=b;
    printf("%d,%d\n",c.x,c.y);
    return 0;
}
