#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tab[] = { -1, 5, 4, 2, 8, 7,4,-2};
    int *wsk;
    wsk = tab + 2;
    int b = *(wsk+=3); //b=7
    int c = b+2; // b=7  , c=9
    int d = (b/=-8) ^ (c-=-5); // b=0  , c=14  , d=14
    int e = (wsk+=-1)[-2]; // b=0  , c=14  , d=14  , e=4
    e = (d *= 5) + (c += 3); // b=0  , c=17  , d=70  , e=87
    c = e - (b*=2); // b=0  , c=87  , d=70  , e=87
    b = *wsk + e; // b=95  , c=87  , d=70  , e=87
    d = b / c; // b= 95 , c=87  , d=1  , e=87

    return 0;
}
