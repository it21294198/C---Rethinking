#include <iostream>
#include <csignal>
#include <unistd.h>

// Signal handler function
void signalHandler(int signum)
{
    std::cout << "Interrupt signal (" << signum << ") received.\n";
    // Cleanup and close up stuff here
    // Terminate program
    exit(signum);
}

int main()
{
    // Register signal handler for SIGINT
    signal(SIGINT, signalHandler);

    // Infinite loop to keep the program running
    while (true)
    {
        std::cout << "Running... Press Ctrl+C to interrupt.\n";
        sleep(1);
    }

    return 0;
}
