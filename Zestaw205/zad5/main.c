#include <stdio.h>
#include <stdlib.h>
struct element{
    int x;
    struct element * next;
};
int foo(struct element *lista1, struct element *lista2)
{
    int min1=minimum(lista1);
    int min2=minimum(lista2);
    if(min1==min2)
    {
        return 1;
    }
    else
    {
        return 0;
    }



}
int minimum(struct element *lista)
{
    if(lista==NULL)
    {
        return 0;
    }
    lista=lista->next;
    int min=lista->x;
    while(lista!=NULL)
    {
        if(min>lista->x)
        {
            min=lista->x;
        }
        lista=lista->next;
    }
    return min;
}
int main()
{
    struct element *lista1=malloc(sizeof(struct element));
    lista1->next=malloc(sizeof(struct element));
    lista1->next->next=malloc(sizeof(struct element));
    lista1->next->next->next=malloc(sizeof(struct element));
    lista1->next->x = 5;
    lista1->next->next->x = 2;
    lista1->next->next->next->x = 3;
    lista1->next->next->next->next=NULL;
    struct element *lista2=malloc(sizeof(struct element));
    lista2->next=malloc(sizeof(struct element));
    lista2->next->next=malloc(sizeof(struct element));
    lista2->next->next->next=malloc(sizeof(struct element));
    lista2->next->x = 3;
    lista2->next->next->x = 5;
    lista2->next->next->next->x = 2;
    lista2->next->next->next->next=NULL;
    printf("%d",foo(lista1,lista2));
    return 0;
}
