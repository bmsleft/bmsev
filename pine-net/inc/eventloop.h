#ifndef EVENTLOOP_H
#define EVENTLOOP_H

#include <iostream>

class EventLoop
{
public:
    EventLoop();

    void print() {
      std::cout << "test event loop" << std::endl;
    }
};

#endif // EVENTLOOP_H
