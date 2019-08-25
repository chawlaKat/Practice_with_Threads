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
    bool inputExists = false;

    // check for argument
    if (argc > 1)
    {
        std::cout << "hey look argument\n";
        std::cout << "it's " << argv[1] << "\n";

        // check if arg is valid directory
        pathToValidate = fs::path(argv[1]);
        inputIsPath = fs::is_directory(pathToValidate);
        inputExists = fs::exists(pathToValidate);
        if (inputIsPath && inputExists)
        {
            pathToSearch = pathToValidate;
        }

    }

    // sample print
    std::cout << "Print : )\n";
    std::cout << "Input was: " << pathToValidate << "\n";
    std::cout << "Path to search is: " << pathToSearch << "\n";
    std::cout << "Current path is: " << fs::current_path() << "\n";

    return 0;
}