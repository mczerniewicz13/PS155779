#include <stdio.h>
#include <stdlib.h>
struct trojkat{
float a;
float b;
float c;
};
void przepisz(struct trojkat t1, struct trojkat *t2)
{
    *t2=t1;
}
int main()
{
    struct trojkat tr1 = {5,3,6};
    struct trojkat tr2 = {1,1,1};
    printf("%f,%f,%f\n",tr2.a,tr2.b,tr2.c);
    przepisz(tr1,&tr2);
    printf("%f,%f,%f\n",tr2.a,tr2.b,tr2.c);
    return 0;
}
