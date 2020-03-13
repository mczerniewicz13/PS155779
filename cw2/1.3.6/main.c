#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c,d,e,f;
    printf("Rownania w postaci ax+by=c, dx+ey=f\n");
    printf("Podaj a\n");
    scanf("%f",&a);

    printf("Podaj b\n");
    scanf("%f",&b);

    printf("Podaj c\n");
    scanf("%f",&c);

    printf("Podaj d\n");
    scanf("%f",&d);

    printf("Podaj e\n");
    scanf("%f",&e);

    printf("Podaj f\n");
    scanf("%f",&f);


    if(a == 0 && b == 0 && d == 0 && e == 0)
    {
        printf("Nieskonczenie wiele rozwiazan\n");
    }
    else{
        float w = (a*e)-(b*d);
        float wx = (c*e)-(b*f);
        float wy = (a*f)-(c*d);
        if(w == 0)
        {
            printf("Brak rozwiazan\n");
        }
        printf("x=%f\n",wx/w);
        printf("y=%f\n",wy/w);

    }
    return 0;
}
