/*

First question: what do you DO?

use regex to match A-Z pattern
- return only words (or portions of words) in all caps

how to accept input?
- hardcoded string lol

how to do output?
- print each match

*/

#include <iostream>
#include <regex>
using namespace std;

int main(int argc, char** argv){

    string textToSearch = "apple";
    string patternStr = "(.*)(([A-Z]+)|([a-z]+)|([0-9]+))+(.*)";
    bool matchFound = false;
    regex myPattern;
    smatch matches;

    if (argc >= 2)
    {
        textToSearch = argv[1];
    }
    if (argc >= 3)
    {
        patternStr = argv[2];
    }

    myPattern = regex(patternStr);
    matchFound = regex_match(textToSearch, matches, myPattern);

    if(matchFound)
    {
        cout << "Regex found a match!" << endl;
        cout << patternStr << " is in " << textToSearch << endl;
        cout << "Matches were: " << endl;

        for (int i = 0; i < matches.size(); i++)
        {
            cout << "[" << matches[i] << "] ";
        }
        cout << endl;
    }
    else
    {
        cout << "No match. :(" << endl;
        cout << patternStr << " is not in " << textToSearch << endl;
    }

    return 0;
}