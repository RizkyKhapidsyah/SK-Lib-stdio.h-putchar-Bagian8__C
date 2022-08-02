#include <stdio.h>
#include <conio.h>

/*
    Source by Microsoft (https://docs.microsoft.com/en-us/cpp)
    Modified For Learn by RK
    I.D.E : VS2022
*/

int main(void) {
    FILE* stream;
    char* p, buffer[] = "This is the line of output\n";
    int  ch;

    ch = 0;

    for (p = buffer; (ch != EOF) && (*p != '\0'); p++) {
        ch = putchar(*p);
    }
        
    _getch();
    return 0;
}