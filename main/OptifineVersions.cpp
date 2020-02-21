#include <iostream>
#include <Windows.h>
#include <string>
#include "Versions.cpp"

using namespace std;

int choice2;

void V_1_14_4() {

    DrawVersion("1_14_4", true);

    cout << endl;
    cout << " >> ";

    cin >> choice2;

    switch (choice2)
    {
    case 1:
        system("cls");
        system("java -jar Optifine/1_14_4/OptiFine_1.14.4_HD_U_F5.jar");
        break;
    case 2:
        system("cls");
        system("java -jar Optifine/1_14_4/OptiFine_1.14.4_HD_U_F4.jar");
        break;
    case 3:
        system("cls");
        system("java -jar Optifine/1_14_4/OptiFine_1.14.4_HD_U_F3.jar");
        break;
    case 4:
        system("cls");
        system("java -jar Optifine/1_14_4/OptiFine_1.14.4_HD_U_F2.jar");
        break;
    default:
        break;
    }
}

void V_1_14_3() {
    DrawVersion("1_14_3", true);

    cout << endl;
    cout << " >> ";

    cin >> choice2;

    switch (choice2)
    {
    case 1:
        system("cls");
        system("java -jar Optifine/1_14_3/OptiFine_1.14.3_HD_U_F2.jar");
        break;
    case 2:
        system("cls");
        system("java -jar Optifine/1_14_3/OptiFine_1.14.3_HD_U_F1.jar");
        break;
    default:
        break;
    }
}