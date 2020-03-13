#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    scanf("%d",&a);
    scanf("%d",&b);
    int max = a;
    if(a>=0 && b>=0 && b>a){

       max = b;
    }
    if(a>=0 && b<0 && -b>a){

       max = -b;
    }
    if(a<0 && b>=0){

        if(b>-a){

       max = b;

        }

        max = -a;
    }
    if(a<0 && b<0){

        if(-b>-a){

       max = -b;

        }
        max = -a;
    }
    printf("%d",max);
    return 0;
}
