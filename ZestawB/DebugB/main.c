#include <stdio.h>
#include <stdlib.h>

int main()
{
    char wyraz[]="informatyka";
    char* p= wyraz; // p=0061FF0B
    int a = sizeof(char); // a=1
    p = wyraz+5; // p=0061FF10  , *p="m"
    char w = *wyraz+5; //w="n"  , &w =0061FF0B
    w= *(wyraz+5); //w="m"  , &w =0061FF0B
    *p = (wyraz+8)[-2]; // p=0061FF10  , *p="a"
    return 0;
}
