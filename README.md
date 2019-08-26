# Practice_with_Threads
Getting comfortable with multithreaded programs and makefiles for a recent assignment

#Environment
I wrote and tested the following using Ubuntu 18.04, and ran "apt get" for both "g++" and "make".

#Makefiles
The file "tutorial_ref" contains all the files from the following tutorial:<br>
http://www.cs.colby.edu/maxwell/courses/tutorials/maketutor/<br>

#Threads
The file "practice_threads" contains a program that creates a user-specified threads (defaults to 5). Each thread prints a "hello" statement and a "proof of lock" statement, demonstrating use of a mutex.

Uses the following reference pages:<br>
* https://www.geeksforgeeks.org/multithreading-in-cpp/
* https://www.geeksforgeeks.org/command-line-arguments-in-c-cpp/
* https://stackoverflow.com/questions/10661792/how-to-create-an-array-of-thread-objects-in-c11
* https://www.geeksforgeeks.org/use-posix-semaphores-c/

Use "make" to compile the program.<br>
Then use "./practice_thread" to run it. <br>
To specify thread count, pass in a non-negative integer; for example, "./practice_thread 3"

#Paths
Uses the following reference pages: <br>
* http://www.cs.colby.edu/maxwell/courses/tutorials/maketutor/ 
* https://www.bfilipek.com/2017/08/cpp17-details-filesystem.html

#Word Counter
Uses the following reference pages: <br>
* http://www.cplusplus.com/doc/tutorial/files/
* https://stackoverflow.com/questions/33869621/last-word-repeated-in-a-text-file-c 
* https://stackoverflow.com/questions/3629321/try-catch-block-for-c-file-io-errors-not-working 
* http://www.cplusplus.com/reference/istream/istream/getline/ 
* https://stackoverflow.com/questions/20756968/reading-multiple-lines-from-a-file-using-getline 
* https://www.oreilly.com/library/view/c-cookbook/0596007612/ch04s19.html

#Regex 
Uses the following reference pages: <br>
* http://www.cplusplus.com/reference/regex/
* https://www.rexegg.com/regex-quickstart.html
* https://regex101.com/