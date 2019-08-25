# Practice_with_Threads
Getting comfortable with multithreaded programs and makefiles for a recent assignment

#Environment
I wrote and tested the following using Ubuntu 18.04, and ran "apt get" for both "g++" and "make".

#Makefiles
The file "tutorial_ref" contains all the files from the following tutorial:<br>
http://www.cs.colby.edu/maxwell/courses/tutorials/maketutor/<br>

#Threads
The file "practice_threads" contains a program that creates three threads and has each print a "hello" statement.

Uses the following reference pages:<br>
* https://www.geeksforgeeks.org/multithreading-in-cpp/
* https://www.geeksforgeeks.org/command-line-arguments-in-c-cpp/
* https://stackoverflow.com/questions/10661792/how-to-create-an-array-of-thread-objects-in-c11

Use "make" to compile the program.<br>
Then use "./practice_thread" to run it. <br>
To specify thread count, pass in a non-negative integer; for example, "./practice_thread 3"

#Paths

Uses the following reference pages: <br>
* http://www.cs.colby.edu/maxwell/courses/tutorials/maketutor/ 
* https://www.bfilipek.com/2017/08/cpp17-details-filesystem.html