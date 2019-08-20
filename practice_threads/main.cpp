#include <iostream>
#include <thread>
#include <vector>
#include <mutex>
#include <unistd.h>
using namespace std;

// mutex for critical section
std::mutex mtx;

// thread identifies itself
void sayHello(int id)
{
    string hello = "Hi, I'm thread " + to_string(id) + ".\n";

    // don't let the "hello" interrupt "I'm locked"
    mtx.lock();
    cout << hello;
    mtx.unlock();

    // give someone else a chance to use the mutex
    usleep(5);

    // practice locking stuff, prove no interruption
    mtx.lock();
    cout << "Hey, look! " << "(" << id << ")\n";
    cout << "This section is locked! " << "(" << id << ")\n\n";
    mtx.unlock();
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

        //TODO: tune input validation
        requestThdCt = stoi(argv[1]);
        if (requestThdCt > 0 && requestThdCt < 100)
        {
            threadCount = requestThdCt;
        }
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

