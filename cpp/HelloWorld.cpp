#include "HelloWorld.h"
#include <iostream>

int (HelloWorld::*my_func_ptr)(int);

void PrintHelloWorld() {
    std::cout << "Hello World!" << std::endl;
   
    my_func_ptr = &HelloWorld::DelegateMethod;

    HelloWorld *hobj = new HelloWorld();
    (hobj->*my_func_ptr)(6);

}


HelloWorld::HelloWorld()
{
    std::cout << "Constructor " << std::endl;
    
}



int HelloWorld::DelegateMethod(int cnt)
{
    std::cout << "DelegateMethod " << std::endl;

    return 1;
}