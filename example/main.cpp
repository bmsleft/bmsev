#include <iostream>
#include "eventloop.h"

using namespace std;

int main() {
  auto eventLoop = EventLoop();
  cout << "test case" << std::endl;
  eventLoop.print();
  return 0;
}
