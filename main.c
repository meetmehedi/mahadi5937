//
//  main.c
//  max min
//
//  Created by Md. Mehedi Hasan on 23/4/24.
//
#include <stdio.h>
#include <stdlib.h>

struct node {
    float data;
    struct node *next;
};

int main(void) {
    struct node *current = NULL, *head = NULL, *previous = NULL;
    int i, n;
    float max = 0.0, min;

    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        current = malloc(sizeof(struct node));
        if (current == NULL) {
            fprintf(stderr, "Memory allocation failed\n");
            return 1;
        }

        printf("Enter data for node %d: ", i + 1);
        scanf("%f", &current->data);

        if (i == 0) {
            head = current;
            min = current->data;
        } else {
            previous->next = current;
        }
        previous = current;
    }
    current->next = NULL;

    max = head->data;

    struct node *temp = head;
    while (temp != NULL) {
        if (max < temp->data)
            max = temp->data;
        if (min > temp->data)
            min = temp->data;
        temp = temp->next;
    }

    printf("Maximum value: %f\n", max);
    printf("Minimum value: %f\n", min);

    temp = head;
    while (temp != NULL) {
        struct node *next = temp->next;
        free(temp);
        temp = next;
    }

    return 0;
}
