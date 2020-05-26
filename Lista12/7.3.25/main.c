#include <stdio.h>
#include <stdlib.h>
struct element
{
    int i;
    struct element *next;
};
int minimum(struct element *lista)
{
    int wynik=lista->next->i;
    lista=lista->next->next;
    while(lista!=NULL)
    {
        if(lista->i<wynik)
        {
            wynik=lista->i;
        }
        lista=lista->next;
    }
    return wynik;
}
int minimum1(struct element *lista)
{
    int wynik=lista->i;
    lista=lista->next;
    while(lista!=NULL)
    {
        if(lista->i<wynik)
        {
            wynik=lista->i;
        }
        lista=lista->next;
    }
    return wynik;
}
int main()
{
    struct element *lista=malloc(sizeof(struct element));
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
    int min = minimum(lista);
    int min1 = minimum1(listag);
    printf("%d\n",min);
    printf("%d\n",min1);
    return 0;
}
