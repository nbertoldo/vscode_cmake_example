# vscode_cmake_example
A simple example of using vscode, cmake and ctest on a c++ app with a couple of separately compiled classes. And importantly to me, how to set it up to use a debuuger (gdb/LLDB) on the app and the tests via vscode. 

This is really just a reminder to me of how to do this stuff.

A few of the interesting points for anyone trying to figure out cmake, ctest and debugging c++ with vscode.

-   have tried to follow "modern cmake" as far as I understand it.
-   have setup vscode tasks (in tasks.json) to run all the build actions
-   generates two "unit tests" which can be executed with "ctest" in the "cmake-build-debug" directory.
-   setup launch.json settings to debug the finall app and the indivdual unit tests. 
-   Have used setting variables of type "promptString" and "pickString" to remove duplication of file and directory names from the task.json and launch.json files.

Comments and improvements welcome.
