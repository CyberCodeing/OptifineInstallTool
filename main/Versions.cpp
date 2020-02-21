#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

void DrawVersion(string version, bool draw) {

    if(version == "1_14_4" && draw == true)
    {
        cout << endl
             << " [1]   OptiFine 1.14.4 HD U F5 "
             << endl << endl
             << " [2]   OptiFine 1.14.4 HD U F4 "
             << endl << endl
             << " [3]   OptiFine 1.14.4 HD U F3 "
             << endl << endl
             << " [4]   OptiFine 1.14.4 HD U F2 "
             << endl << endl;
    }
    else if (version == "1_14_3" && draw == true)
    {
        cout << endl
             << " [1]   OptiFine 1.14.3 HD U F2 "
             << endl << endl
             << " [2]   OptiFine 1.14.3 HD U F1 "
             << endl << endl;
    }

}