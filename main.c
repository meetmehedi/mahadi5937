#include <stdio.h>
#define n 10
char stack[n];
int top = -1;
 
int isFull(void)
{
    if(top==n-1)
        return 1;
    else
        return 0;
 
}
 
int isEmpty(void)
{
    if(top==-1)
        return 1;
    else
        return 0;
 
}
 
char pop(void)
{
    char val;
    if (isEmpty())
    {
        printf("Stack is Empty\n");
        return '\0';
    }
    else
    {
        val = stack[top];
        top--;
        return val;
    }
}

void push(char val)
{
    if (isFull())
        printf("Stack is Full\n");
    else
    {
        top++;
        stack[top]=val;
    }
}
 
int main(void)
 
{
    char x[50],f;
    int i;
    scanf("%s",x);
    for(i=0;x[i]!='\0';i++)
    {
        if(x[i]=='['||x[i]=='{'||x[i]=='(')
            push(x[i]);
        else if (x[i]==']'||x[i]=='}'||x[i]==')')
        {
            f = pop();
            if((f=='['&&x[i]==']')||(f=='{'&&x[i]=='}')||(f=='('&&x[i]==')'))
                continue;
            else
            {
                printf("Unbalanced\n");
                return 0;
            }
        }
        else
            continue;
    }
    if (isEmpty())
        printf("Balanced ");
    else
        printf("Unbalanced ");
}
 
