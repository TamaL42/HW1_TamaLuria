#include "Stack.h"
#include <stdlib.h>

void initStack(Stack* s)
{
    s->head = NULL;
}

void push(Stack* s, unsigned int element)
{
    addToHead(&(s->head), element);
}

int pop(Stack* s) 
{
    if (isEmpty(s)) 
    {
        return -1; 
    }
    int value = s->head->value;
    removeFromHead(&(s->head));
    return value;
}

bool isEmpty(Stack* s) 
{
    return (s->head == NULL);
}

bool isFull(Stack* s) 
{
    return false;
}

void cleanStack(Stack* s)
{
    while (!isEmpty(s)) 
    {
        pop(s);
    }
}
