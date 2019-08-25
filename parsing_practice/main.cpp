/*
* Okay! What do I need this to do?

* - open a file (from input?)
* - for each character, if a-z, A-Z, or 0-9, store it
*    - if other (non-space), save stored word

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
        return 0;
    }

    // so...it worked.
    cout << filename << " opened.\n";

    // while there's still stuff in the file
    while (getline(myFile,strInput))
    {
        // reeead : )
        cout << strInput << endl;
    }

    // close it!
    // (does destructor already get called? does this cause problems?)
    myFile.close();
    
    

    cout << "End of program.\n";

    return 0;
}