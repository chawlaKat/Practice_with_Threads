#include <iostream>
#include <string>
#include <experimental/filesystem>
using namespace std;
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
    int txtExtensionFoundAt = -1;
    string pathFoundName = "";

    // check for argument
    if (argc > 1)
    {
        cout << "hey look argument\n";
        cout << "it's " << argv[1] << "\n";

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
    cout << "Input was: " << pathToValidate << "\n";
    cout << "Path to search is: " << pathToSearch << "\n";
    cout << "Current path is: " << fs::current_path() << "\n\n";


    // iterate through directory and all subdirectories
    // NOTE: if cycles exist, end iterator may not be reachable
    for (fs::path pathFound : fs::recursive_directory_iterator(pathToSearch)){
        txtExtensionFoundAt = -1;

        cout << pathFound << "\n";
         
        // check if is text file
        pathFoundName = pathFound.string();
        // txtExtensionFoundAt = pathFoundName.find(".txt")

        // path contains ".txt"
        // NOTE: would not handle ".txt.zip" properly yet
        // if (txtExtensionFoundAt > 0)
        // {
        //     cout << pathFound << " is a .txt file\n\n";
        // }
    }

    return 0;
}