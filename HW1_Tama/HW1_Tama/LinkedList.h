#ifndef LINKEDLIST_H
#define LINKEDLIST_H


typedef struct Node {
    unsigned int value;
    struct Node* next;    
} Node;


void addToHead(Node** head, unsigned int value);
void removeFromHead(Node** head);

#endif /* LINKEDLIST_H */
