//
//  main.c
//  priority queue
//
//  Created by Md. Mehedi Hasan on 19/5/24.
//

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    int priority;
    struct node *next;
};
struct node *front = NULL;
struct node *back = NULL;
struct node *new_node, *temp, *previous_temp;

int isEmpty()
{
    if(front == NULL && back == NULL)
        return 1;
    else
        return 0;
}

int dequeue()
{
    int val;
    if (isEmpty())
        printf("Queue Empty\n");
    else if(front == back)
    {
        val = front->data;
        front = NULL;
        back = NULL;
        return val;
    }
    else
    {
        val = front->data;
        front = front->next;
    }
    return val;
}

int enqueue(int val, int priority)
{
    new_node = malloc(sizeof(struct node));
    new_node->data = val;
    new_node->priority = priority;
    new_node->next = NULL;

    if(isEmpty())
    {
        front = new_node;
        back = new_node;
    }
    else
    {
        temp = front;
        while (new_node->priority >= temp->priority)
        {
            previous_temp = temp;
            temp = temp->next;
            if (temp == NULL)
                break;
        }
        if (temp == front)
        {
            new_node->next = front;
            front = new_node;
        }
        else if(temp == NULL)
        {
            previous_temp->next = new_node;
            new_node->next = NULL;
            back = new_node;
        }
        else
        {
            new_node->next = previous_temp->next;
            previous_temp->next = new_node;
        }
    }    return val;
}

int main()

{
    enqueue(10,5);
    enqueue(20,4);
    enqueue(30,1);
    enqueue(40,1);
    enqueue(50,2);
    enqueue(60,3);
    enqueue(70,6);
    enqueue(80,7);
    enqueue(90,4);
    enqueue(100,10);
    //printf("%d\n", dequeue());
    //printf("%d\n", dequeue());
    //printf("%d\n", dequeue());
    enqueue(110,8);
    enqueue(120,6);
    enqueue(130,5);
    enqueue(140,2);

    temp = front;
    while(temp!=NULL)
    {
        printf("Val = %d Priority = %d\n",temp->data, temp->priority);
        temp = temp->next;
    }

    printf("%d\n", dequeue());

}

