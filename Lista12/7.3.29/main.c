#include <stdio.h>
#include <stdlib.h>
struct element
{
    int i;
    struct element *next;
};
struct element *kopiuj(struct element *lista)
{
    struct element *kopia;
    struct element *wsk;
    kopia=malloc(sizeof(struct element));
    wsk=kopia;
    wsk->i=lista->i;
    lista=lista->next;
    while(lista!=NULL)
    {
        wsk->next=malloc(sizeof(struct element));
        wsk=wsk->next;
        wsk->i=lista->i;
        lista=lista->next;
    }
    wsk->next=NULL;
    return kopia;
};
struct element *kopiuj1(struct element *lista)
{
    struct element *kopia=lista;
    struct element *wsk;
    kopia=malloc(sizeof(struct element));
    wsk=kopia;
    lista=lista->next;
    while(lista!=NULL)
    {
        wsk->next=malloc(sizeof(struct element));
        wsk=wsk->next;
        wsk->i=lista->i;
        lista=lista->next;
    }
    wsk->next=NULL;
    return kopia;
};
int main()
{
    struct element *lista=malloc(sizeof(struct element));
    struct element *nowa,*nowag;
    lista->i = 5;
    lista->next=malloc(sizeof(struct element));
    lista->next->next=malloc(sizeof(struct element));
    lista->next->i = -3;
    lista->next->next->i = -6;
    lista->next->next->next=NULL;

    struct element *listag=malloc(sizeof(struct element));
    listag->next=malloc(sizeof(struct element));
    listag->next->next=malloc(sizeof(struct element));
    listag->next->next->next=malloc(sizeof(struct element));
    listag->next->i = 5;
    listag->next->next->i = -3;
    listag->next->next->next->i = -6;
    listag->next->next->next->next=NULL;

    printf("%d,%d,%d\n",lista->i,lista->next->i,lista->next->next->i);
    printf("%d,%d,%d,%d\n",listag->i,listag->next->i,listag->next->next->i,listag->next->next->next->i);
    nowa=kopiuj(lista);
    nowag=kopiuj1(listag);
    printf("%d,%d,%d\n",nowa->i,nowa->next->i,nowa->next->next->i);
    printf("%d,%d,%d,%d\n",nowag->i,nowag->next->i,nowag->next->next->i,nowag->next->next->next->i);
    return 0;
}
