#include <stdio.h>
#include <stdlib.h>
struct element
{
    int i;
    struct element *next;
};
void usun(struct element *lista, int a)
{
    struct element *wsk;
    while(lista->next->i!=a)
    {
        lista=lista->next;
    }
    wsk=lista->next;
    lista->next=wsk->next;
    free(wsk);

};
int main()
{
    struct element *lista=malloc(sizeof(struct element));
    lista->i = 5;
    lista->next=malloc(sizeof(struct element));
    lista->next->next=malloc(sizeof(struct element));
    lista->next->i=8;
    lista->next->next->i=6;
    lista->next->next->next=NULL;
    int a =8;
    printf("%d%,%d,%d\n",lista->i,lista->next->i,lista->next->next->i);
    usun(lista,a);
    printf("%d%,%d",lista->i,lista->next->i);

    return 0;
}
