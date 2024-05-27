#include <iostream>
#include <csignal>
#include <unistd.h>
#include "test.h"

void signalHandler(int signum)
{
    std::cout << "Interrupt signal (" << signum << ") received.\n";
    exit(signum);
}

int main()
{
    signal(SIGINT, signalHandler);
    while (true)
    {
        std::cout << getString("world") + "\n";
        sleep(1);
    }
    return 0;
}
