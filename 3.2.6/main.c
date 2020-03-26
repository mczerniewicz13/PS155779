#include <stdio.h>
#include <stdlib.h>
void przyp(int n,int*w)
{
    *w=n;

}
int main()
{
    int x = 5;
    int y;
    przyp(x,&y);
    printf("%d",y);
    return 0;
}
