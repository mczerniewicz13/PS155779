#include <stdio.h>
#include <stdlib.h>
struct element
{
    int i;
    struct element *next;
};
struct element *dodajk(struct element *lista,int a)
{
    struct element *wsk;
    if (lista==NULL)
        {
            wsk=malloc(sizeof(struct element));
            lista=wsk;
        }
    else{
            wsk=lista;
            while(wsk->next!=NULL)
            {
                wsk=wsk->next;
            }
                wsk->next=malloc(sizeof(struct element));
                wsk=wsk->next;

        }
        wsk->i=a;
        wsk->next=NULL;
        return lista;
};

int main()
{

    struct element *lista=malloc(sizeof(struct element));
    int a = 5;
    lista->i = 5;
    lista->next=malloc(sizeof(struct element));
    lista->next->next=malloc(sizeof(struct element));
    lista->next->i = -3;
    lista->next->next->i = -6;
    lista->next->next->next=NULL;
    printf("%d,%d,%d\n",lista->i,lista->next->i,lista->next->next->i);
    struct element *nowa=dodajk(lista,a);
    printf("%d,%d,%d,%d\n",nowa->i,nowa->next->i,nowa->next->next->i,nowa->next->next->next->i);
    return 0;
}
