#include <stdio.h>
#include <stdlib.h>
struct trojkat{
float a;
float b;
float c;
};
float obwod(struct trojkat boki)
{
    float obw = boki.a + boki.b + boki.c;
    return obw;
}
int main()
{
    struct trojkat tr;
    tr.a=15;
    tr.b=6;
    tr.c=10;
    printf("%f\n",obwod(tr));
    return 0;
}
