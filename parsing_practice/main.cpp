/*
STUB!!!!

This splits on whitespace and includes undesirable characters.
*/

#include <iostream>
#include <fstream>
#include <map>
#include <experimental/filesystem>

using namespace std;
namespace fs = std::experimental::filesystem;

int main()
{
    fs::path filename("./test_files/sample_text_doc.txt");
    //string filename = "sample_text_doc.txt";
    string strInput = "";
    map<string, int> words;

    // open a file
    ifstream myFile(filename);

    // catch error
    // NOTE: try/catch block instead? is that just java?
    if (!myFile)
    {
        cout << "Could not open " << filename << "\n";
        return 0;
    }

    // so...it worked.
    cout << filename << " opened.\n";

    // while there's still stuff in the file
    // STUB: this splits on whitespace, includes undesirable characters
    while (myFile >> strInput)
    {
        ++words[strInput];
    }

    // close it!
    // (does destructor already get called? does this cause problems?)
    myFile.close();
    
    for (map<string,int>::iterator i = words.begin(); i != words.end(); ++i)
    {
        cout << i->first << " occurred " << i->second << " times" << endl;
    }
    

    cout << "End of program.\n";

    return 0;
}