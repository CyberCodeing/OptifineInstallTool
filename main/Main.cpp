#include <iostream>
#include <Windows.h>
#include <wincon.h>
#include <string>
#include "OptifineVersions.cpp"

using namespace std;

HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);

int choice;

void Draw() {

    cout << endl
         << " [1]   1.14.4 "
         << endl << endl
         << " [2]   1.14.3 "
         << endl << endl;

    cout << endl << endl
         << " [3]   Update Files and Optifine Versions "
         << endl << endl;

}

void fullscreen(bool fullscreen) {

    if(fullscreen == true)
    {
        COORD NewSBSize = GetLargestConsoleWindowSize(out);
        NewSBSize.Y += 3;
        NewSBSize.X -= 2;
        SMALL_RECT DisplayArea = { 0, 0, 0, 0 };
        SetConsoleScreenBufferSize(out, NewSBSize);
        DisplayArea.Right = NewSBSize.X - 1;
        DisplayArea.Bottom = NewSBSize.Y - 1;
        SetConsoleWindowInfo(out, TRUE, &DisplayArea);
    }

}

void setColor(const char * color) {
    
    if (color == "false")
    {
        system("color 2");
    }
    else
    {
        system(color);
    }

}

int main() {

    SetConsoleTitle(TEXT("OptifineInstallTool"));
    fullscreen(true);
    setColor("false");

    Draw();

    cout << endl
         << " >> ";

    cin >> choice;

    switch (choice)
    {
    case 1:
        system("cls");
        V_1_14_4();
        break;
    case 2:
    system("cls");
        V_1_14_3();
        break;
    case 3:
        system("cls");
        system("git clone https://github.com/CyberCodeing/OptifineInstallTool.git");
        break;
    default:
        break;
    }
    system("cls");
    main();
}