#include "LinkedList.h"
#include <stdlib.h>

/*role: Adds a node to the list
Input : head of the list
Output : none
*/
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
/*role: remove a node From the head
Input : head of the list
Output : none
*/
void removeFromHead(Node** head)
{
    if (*head != NULL) {
        Node* temp = *head;
        *head = (*head)->next;
        delete(temp);
    }
}
