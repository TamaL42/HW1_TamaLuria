#include "LinkedList.h"
#include <stdlib.h>


void addToHead(Node** head, unsigned int value)
{
    Node* newNode = new Node;

    if (*head = NULL)
    { 
        newNode->value = value;
        newNode->next = *head;
        *head = newNode;
    }
    else
    {
        (*head)->value = value;
        (*head)->next = NULL;
    }
}

void removeFromHead(Node** head)
{
    if (*head != NULL) {
        Node* temp = *head;
        *head = (*head)->next;
        delete(temp);
    }
}
