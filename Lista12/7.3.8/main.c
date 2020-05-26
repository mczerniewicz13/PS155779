#include <stdio.h>
#include <stdlib.h>
struct element
{
    int i;
    struct element *next;
};
struct element *usunw(struct element *lista,struct element *elem)
{
    struct element *wsk;
    struct element *wsk1;
    if(lista==NULL)
    {
        return lista;
    }
    if(elem==NULL)
    {
        return lista;
    }
    if(lista==elem)
    {
        wsk = lista;
        lista=lista->next;
        free(wsk);
        return lista;
    }
    else
    {
        wsk=lista;
        while(wsk->next!=elem && wsk->next!=NULL)
        {
            wsk=wsk->next;
        }
        if (wsk->next!=NULL)
        {
            wsk1 = wsk->next;
            wsk->next = wsk1->next;
            free(wsk1);
        }
    }
    return lista;
};
int main()
{
    struct element *lista=malloc(sizeof(struct element));
    struct element *elem;
    lista->i=1;
    lista->next=malloc(sizeof(struct element));
    lista->next->i=2;
    lista->next->next=malloc(sizeof(struct element));
    lista->next->next->i=3;
    lista->next->next->next=malloc(sizeof(struct element));
    lista->next->next->next->i=4;
    lista->next->next->next->next=NULL;
    elem=lista->next->next;

    struct element *nowy=usunw(lista,elem);
    printf("%d,%d,%d",nowy->i,nowy->next->i,nowy->next->next->i);
    return 0;
}
