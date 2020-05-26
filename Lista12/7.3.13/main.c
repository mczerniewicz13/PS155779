#include <stdio.h>
#include <stdlib.h>
struct element
{
    int i;
    struct element *next;
};
void dodajk(struct element *lista, int a)
{
    while(lista->next->i!=NULL)
    {
        lista = lista->next;
    }
    lista->next=malloc(sizeof(struct element));
    lista->next->i=a;
    lista->next->next=NULL;

};
int main()
{
    struct element *lista=malloc(sizeof(struct element));
    lista->next=malloc(sizeof(struct element));
    lista->i=5;
    lista->next->i=6;
    printf("%d\n",lista->i);
    int a=8;
    dodajk(lista,a);
    printf("%d",lista->next->next->i);
    return 0;
}
