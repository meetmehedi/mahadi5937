//
//  main.c
//  insertion
//
//  Created by Md. Mehedi Hasan on 21/4/24.
//
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int main(void)
{
    int n,i, ins, value;
    struct node *current = NULL, *previous = NULL, *head = NULL, *h1, *newnode;
    printf("Enter the number of nodes: ");
    scanf("%d",&n);

    for (i=0;i<n;i++)
    {
        current = malloc(sizeof(struct node));
        scanf("%d",&current->data);
        if(i==0)
            head = current;
        else
            previous->next = current;

        previous = current;
    }
    current->next = NULL;
    h1 = head;
    while(h1 != NULL)
    {
        printf("%d ", h1->data);
        h1 = h1->next;
    }
    printf("\nEnter the position: ");
    scanf("%d",&ins);
    printf("Enter the value: ");
    scanf("%d",&value);
    newnode = malloc(sizeof(struct node));
    newnode->data = value;

    h1 = head;
    if (ins == 1)
    {
        newnode->next = head;
        head = newnode;
    }
    else
    {
        for(i=1;i<=ins-2;i++)
        {
            h1 = h1->next;
        }
        newnode->next = h1->next;
        h1->next = newnode;
    }
    h1 = head;
    while(h1 != NULL)
    {
        printf("%d ", h1->data);
        h1 = h1->next;
    }
}
