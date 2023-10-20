#include "Logging.h"

void log(string message){
    cout << message << endl;
}

void log(int number){
    cout << number << endl;
}

void logCritical(string message){
    log("\033[31m[CRITICAL] \033[91m" + message + "\033[0m");
}

void logDebug(string message){
    log("\033[34m[DEBUG] \033[94m" + message + "\033[0m");
}

void logWarning(string message){
    log("\033[33m[WARNING] \033[93m" + message + "\033[0m");
}