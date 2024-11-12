#include "Stack.h"
#include <stdlib.h>

/*role:Initializes the stack
Input : the stack
Output : none
*/
void initStack(Stack* s)
{
    s->head = NULL;
}
/*role: Inserts an element into the stack
Input : the stack and the element
Output : none
*/
void push(Stack* s, unsigned int element)
{
    addToHead(&(s->head), element);
}
/*role: Deletes the lest element in the stack
Input : the stack
Output : the lest element
*/
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
/*role: Checks if the stack is empty.
Input : the stack
Output : if the stack is empty
*/
bool isEmpty(Stack* s) 
{
    return (s->head == NULL);
}
/*role: Checks if the stack is full.
Input : the stack
Output :if  the stack is full
*/
bool isFull(Stack* s) 
{
    return false;
}
/*role: Clears the stack
Input : the stack
Output : none
*/
void cleanStack(Stack* s)
{
    while (!isEmpty(s)) 
    {
        pop(s);
    }
}
