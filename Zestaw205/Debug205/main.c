#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tab[3][4] = {{1,2,2,0},{7,8,4,3},{-8,2,0,5}};
    int a = sizeof(int*); //a=4
    int r = *(*(tab+2)-1); // r=3 , &r=0061FEE4
    int * p = tab+1; //p=0061FEF4 , *p =7
    r= *(*(tab+2)+1); // r=2 , &r=0061FEE4
    *p=*(tab+1)+3; //p=0061FEF4 , **p =3
    return 0;
}
