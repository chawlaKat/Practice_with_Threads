/*
* Okay! What do I need this to do?

* - open a file (from input?)
* - for each character, if a-z, A-Z, or 0-9, store it
*    - if other (non-space), ignore it
*    - if space, save stored word

(shhh that's MOre than enough to start with. open a text file. start there.)

*/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string filename = "sample_text_doc.txt";
    string strInput = "";

    // open a file
    ifstream myFile(filename);

    // catch error
    // NOTE: try/catch block instead? is that just java?
    if (!myFile)
    {
        cout << "Could not open " << filename << "\n";
    }
    else
    {
        cout << filename << " opened.\n";

        // while there's still stuff in the file
        // TODO: fix bug. reads "<3" twice.
        while (myFile)
        {
            // reeead : )
            // NOTE: extraction operator breaks on whitespace, not just spaces
            myFile >> strInput;
            cout << strInput << endl;
        }

        // close it!
        // (does destructor already get called? does this cause problems?)
        myFile.close();
    }
    

    cout << "End of program.\n";

    return 0;
}