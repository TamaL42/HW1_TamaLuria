#include <iostream>
#include "Queue.h"

int main() {
    Queue* q = new Queue;
    int size = 5;
    int i = 0;
    initQueue(q, size);
    std::cout <<"size ="<< size << std::endl;
    std::cout <<"Is the queue empty?\n "<< isEmpty(q) << std::endl;
    std::cout << "Is the queue empty?\n " << isEmpty(q) << std::endl;

    for (i = 1; i <= size; i++) 
    {
        enqueue(q, i );
        std::cout << "We entered " << i << std::endl;
    }

    std::cout << "Is the queue full?\n" << (isFull(q)) << std::endl;


    std::cout << "Take out the values" << std::endl;
    while (!isEmpty(q))
    {
        std::cout << "We were taken out " << dequeue(q) << std::endl;
    }

    std::cout << "Is the queue empty?\n " << isEmpty(q) << std::endl;


    cleanQueue(q);
    std::cout << "The queue has been cleared" << std::endl;

    delete(q);
    return 0;
}
