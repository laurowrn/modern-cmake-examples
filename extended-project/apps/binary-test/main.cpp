#include <Lib1.h>
#include <iostream>

int main(){
    Lib1 object;
    object.setNumber(1);
    std::cout << object.getNumber() << std::endl;
    return 0;
}