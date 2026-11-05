#include "stdio.h"
#include "stdlib.h"
#include "windows.h"

void gotoxy(int x, int y) {
    COORD c = { (SHORT)x, (SHORT)y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

int main() {
    char name[] = "Ashley Padecio";
    int x, y;

    system("cls");

    for (x = 0; x <= 142; x++) {
        system("cls");
        gotoxy(x, 0);
        printf("%s", name);
        Sleep(10);
    }

    for (y = 1; y <= 40; y++) {
        system("cls");
        gotoxy(142, y);
        printf("%s", name);
        Sleep(10);
    }

    for (x = 140; x >= 0; x--) {
        system("cls");
        gotoxy(x, 40);
        printf("%s", name);
        Sleep(10);
    }

    for (y = 40; y > 0; y--) {
        system("cls");
        gotoxy(0, y);
        printf("%s", name);
        Sleep(10);
    }

    gotoxy(0, 40);
    getchar();

    return 0;
}