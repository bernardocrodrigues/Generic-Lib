
#include<iostream>
#include "hello_world.hpp"
#include "hello_internal.hpp"

void Helloer::do_the_hello(){

    int i;
    std::cout << "Hello World from Library" << std::endl;
    do_internal_hello();

}