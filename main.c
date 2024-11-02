#include <stdio.h>
#include <stdlib.h>

struct node {
  char data;
  struct node* next;
};

struct node* head = NULL;

int isEmpty(void) {
  if (head == NULL) {
    return 1;
  } else {
    return 0;
  }
}

int pop(void) {
  if (isEmpty()) {
    printf("Stack is empty\n");
    return '\0';
  } else {
    int val = head->data;
    head = head->next;
    return val;
  }
}

int push(char val) {
  struct node* newnode = malloc(sizeof(struct node));
  newnode->data = val;
  newnode->next = head;
  head = newnode;
  return 0;
}
void peak(void) {
    if (isEmpty()) {
        printf("Stack is empty\n");
    } else {
        printf("%c\n", head->data);
    }
}
int main(void) {
  char x[100];
  int i;

  scanf("%s", x);
  for (i = 0; x[i] != '\0'; i++) {
    push(x[i]);
  }
  while (!isEmpty()) {
    printf("%c", pop());
  }
  printf("\n");
  return 0;
}
