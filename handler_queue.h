#ifndef HANDLER_QUEUE_H
#define HANDLER_QUEUE_H

#include <queue>

class Handler_Queue
{
public:
    Handler_Queue();
    std::queue<int> errorQueue;
};

extern Handler_Queue *handler_Queue;

#endif // HANDLER_QUEUE_H
