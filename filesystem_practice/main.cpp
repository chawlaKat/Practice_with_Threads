#include <iostream>
#include <string>
#include <experimental/filesystem>
using namespace std;
namespace fs = std::experimental::filesystem;

//parameter: file to search
int main(int argc, char *argv[])
{
    fs::path pathToSearch = fs::current_path();
    fs::path pathToValidate;
    bool inputIsPath = false;
    bool inputPathExists = false;
    int txtExtensionFoundAt = -1;
    string pathFoundName = "";
    int pathLength = 0;
    int extensionIndex = 0;

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

        cout << "Found: " << pathFound << "\n";
         
        // check if is text file
        pathFoundName = pathFound.string();
        txtExtensionFoundAt = pathFoundName.find(".txt");

        // path contains ".txt"
        // regex would be another way to approach it, but i dont wanna mess with those today haha
        // to make this more flexible, i could have the user pass in the desired extension, with '.txt' as default?

        // get str length
        pathLength = pathFoundName.length();

        // find ".txt" 4 characters from end
        extensionIndex = pathLength - 4;
        txtExtensionFoundAt = pathFoundName.find(".txt", extensionIndex);

        // clarify behavior when ".txt" is not found
        if (txtExtensionFoundAt == string::npos)
        {
            txtExtensionFoundAt = -1;
        }

        // ".txt" was found
        if (txtExtensionFoundAt >= 0)
        {
            cout << pathFound << " is a .txt file\n\n";
        }
    }

    return 0;
}