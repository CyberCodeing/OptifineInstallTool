#include <iostream>
#include <Windows.h>
#include <string>
#include "OptifineVersions.cpp"

using namespace std;

int choice;

void Draw() {

    cout << endl
         << " [1]   1.14.4 "
         << endl
         << " [2]   1.14.3 "
         << endl;
}

int main() {
    Draw();

    cin >> choice;

    switch (choice)
    {
    case 1:
        system("cls");
        V_1_14_4();
        break;
    
    default:
        break;
    }
}