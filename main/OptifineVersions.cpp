#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

int choice1;

void V_1_14_4() {
    cout << endl
         << " [1]   OptiFine 1.14.4 HD U F5 "
         << endl
         << " [2]   OptiFine 1.14.4 HD U F4 "
         << endl;

         cout << endl
              << " >> ";

    cin >> choice1;

    switch (choice1)
    {
    case 1:
        system("cls");
        system("java -jar Optifine/1_14_4/OptiFine_1.14.4_HD_U_F5.jar");
        break;
    case 2:
        break;
    default:
        break;
    }
}