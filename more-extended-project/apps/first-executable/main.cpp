#include <iostream>
#include "FirstLibrary/FirstLibrary.h"
#include "FirstModule/FirstModule.h"

int main(){
    std::cout << "This is the first executable!" << std::endl;

    FirstLibrary firstLibrary;
    firstLibrary.getMessage();

    FirstModule firstModule;
    firstModule.getMessage();
}