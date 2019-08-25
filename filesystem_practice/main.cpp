#include <iostream>
#include <experimental/filesystem>
namespace fs = std::experimental::filesystem;

//parameter: file to search
int main(int argc, char *argv[])
{
    //TODO: learn correct syntax
    // holder for argument
    //fs::path pathToSearch(fs::current_path());

    // check for argument
    if (argc > 1)
    {
        std::cout << "hey look argument\n";
        std::cout << "it's " << argv[1] << "\n";
    }

    // sample print
    std::cout << "Print : )\n";
    std::cout << "Path to search is: " << pathToSearch;

    return 0;
}