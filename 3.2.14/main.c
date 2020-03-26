#include <stdio.h>
#include <stdlib.h>
int fun1(int a)
{
    a+=a;
    return a;
}

int fun2(int b)
{
    b=b+2;
    return b;
}

int funkcja(int (*f1)(int arg1),int (*f2)(int arg2),unsigned int n)
{
    for(int i=0;i<=n;i++)
    {
        if(f1(i)!=f2(i))
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    unsigned int x = 6;
    int y = 2;
    printf("%d",funkcja(&fun1,&fun2,x));

    return 0;
}
