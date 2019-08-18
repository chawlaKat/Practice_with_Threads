#include <iostream>
#include <thread>
#include <vector>
using namespace std;

// thread identifies itself
void sayHello(int id)
{
    string hello = "Hi, I'm thread " + to_string(id) + ".\n";
    cout << hello;
}

int main(int argc, char *argv[])
{
    // desired number of threads
    int requestThdCt = 0;
    int threadCount = 5;

    // mark program start
    cout << "Main started with " << argc << " arguments.\n";
    
    // if number of threads is specified, report it.
    if (argc > 1)
    {
        cout << "You requested " << argv[1] << " thread(s).\n";

        //TODO: add input validation, save to requestThdCt
    }

    // tell user the real thread count
    cout << "Thread count: " << threadCount << "\n\n";

    // start some threads
    thread thArray[threadCount];

    for (int i = 0; i < threadCount; i++)
    {
        thArray[i] = thread(sayHello, i);
    }

    // wait for threads to finish
    for (int i = 0; i < threadCount; i++)
    {
        thArray[i].join();
    }

    // mark program completion
    cout << "\nMain completed.\n";

    return 0;
}

