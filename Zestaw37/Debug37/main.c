#include <stdio.h>
#include <stdlib.h>

void foo(int* tab, int n)
{
    for(int i=0;i<n-2;i++)
    {
        *(tab+i)+=3;
    }
}

int main()
{
    int tab[] = {1,-2,4,2,9,8};
    int *wsk=tab-2;
    foo(wsk,5);
    int b = *(wsk+=4); //b=4
    int c = b+2; // b=4  , c=6
    int d = b^c; // b=4  , c=6  , d=2
    int e = (wsk+=-1)[2]; // b=4  , c=6  , d=2  , e=2
    e = (d *= 3) + (c /= 3); // b= 4 , c=2  , d=6  , e=8
    c = d - (b+=4); // b=8  , c=-2  , d=6  , e=8
    b = *wsk + e; // b=6  , c=-2  , d=6  , e=8
    return 0;
}
