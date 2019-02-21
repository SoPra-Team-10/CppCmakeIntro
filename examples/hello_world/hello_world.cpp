#include "hello_world.h"

#include <iostream>

HelloWorld::HelloWorld(const std::string &name) : name{name} {}

void HelloWorld::sayHello() const {
    std::cout << "Hello: " << this->name << std::endl;
}
