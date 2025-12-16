#include <stdio.h>
#include <windows.h>

int main() {
    int a[] = {90,111,121,116,114,105,32,103,97,121};
    int color[] = {12,6,14,10,11,9,13,15,14,12};
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

    for(int i=0;i<10;i++){
        SetConsoleTextAttribute(h, color[i]);
        putchar(a[i]);
    }

    SetConsoleTextAttribute(h, 7);
    return 0;
}