#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} node;

int main()
{
    node *head = (node *)malloc(sizeof(node));
    node *n1 = (node *)malloc(sizeof(node));
    node *tail = (node *)malloc(sizeof(node));

    head->data = 5;
    head->next = n1;
    n1->data = 7;
    n1->next = tail;
    tail->data = 99;
    tail->next = NULL;

    printf("%d ", head->data);
    printf("%d ", head->next->data);
    printf("%d\n", head->next->next->data);
    free(head);
    free(n1);
    free(tail);

    return 0;
}