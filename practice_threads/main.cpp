#include <iostream>
#include <thread>
using namespace std;

// thread identifies itself
void sayHello(int id)
{
    string to_print = "I'm thread number " + to_string(id) + ".\n";
    cout << to_print;
}

int main()
{
    // mark program start
    cout << "Main started.\n";

    // start some threads
    thread th1(sayHello, 1);
    thread th2(sayHello, 2);
    thread th3(sayHello, 3);

    // wait for threads to finish
    th1.join();
    th2.join();
    th3.join();

    // mark program completion
    cout << "Main completed.\n";

    return 0;
}

