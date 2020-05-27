#include <stdio.h>
#include <stdlib.h>
struct element{
    double x;
    struct element * next;
};
int foo(struct element *lista1, struct element *lista2)
{
    int suma1=suma(lista1);
    int suma2=suma(lista2);
    if(suma1-suma2<0.00001)
    {
        return 1;
    }
    else
    {
        return 0;
    }



}
int suma(struct element *lista)
{
    int wynik=0;
    lista=lista->next;
    if(lista==NULL)
    {
        return 0;
    }
    while(lista!=NULL)
    {
        wynik+=lista->x;
        lista=lista->next;
    }
    return wynik;
}
int main()
{
    struct element *lista1=malloc(sizeof(struct element));
    lista1->next=malloc(sizeof(struct element));
    lista1->next->next=malloc(sizeof(struct element));
    lista1->next->next->next=malloc(sizeof(struct element));
    lista1->next->x = 5.4;
    lista1->next->next->x = 2.2;
    lista1->next->next->next->x = 3.4;
    lista1->next->next->next->next=NULL;
    struct element *lista2=malloc(sizeof(struct element));
    lista2->next=malloc(sizeof(struct element));
    lista2->next->next=malloc(sizeof(struct element));
    lista2->next->next->next=malloc(sizeof(struct element));
    lista2->next->x = 3;
    lista2->next->next->x = 5.4;
    lista2->next->next->next->x = 0.3;
    lista2->next->next->next->next=NULL;
    printf("%d",foo(lista1,lista2));
    return 0;
}
