#include <iostream>
#include <experimental/filesystem>
namespace fs = std::experimental::filesystem;

//parameter: file to search
int main(int argc, char *argv[])
{
    //TODO: learn correct syntax
    // holder for argument
    fs::path pathToSearch = fs::current_path();
    fs::path pathToValidate;
    bool inputIsPath = false;
    bool inputPathExists = false;

    // check for argument
    if (argc > 1)
    {
        std::cout << "hey look argument\n";
        std::cout << "it's " << argv[1] << "\n";

        // check if arg is valid directory
        pathToValidate = fs::path(argv[1]);
        inputIsPath = fs::is_directory(pathToValidate);
        inputPathExists = fs::exists(pathToValidate);

        if (inputIsPath && inputPathExists)
        {
            pathToSearch = pathToValidate;
        }

    }

    // sample print
    std::cout << "Input was: " << pathToValidate << "\n";
    std::cout << "Path to search is: " << pathToSearch << "\n";
    std::cout << "Current path is: " << fs::current_path() << "\n\n";


    // iterate through directory and all subdirectories
    // NOTE: if cycles exist, end iterator may not be reachable
    for (auto pathFound : fs::recursive_directory_iterator(pathToSearch)){
        std::cout << pathFound << "\n";

    }

    return 0;
}