#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<windows.h>
void set_frame(const char* f, char frame[4]) {
    for (int i = 0; i < 4; i++) {
        frame[i] = f[i];
    }
}

int main(int argc, const char* argv[]) {
    system("cls");
    char frame[4];
    if (argc <= 1 || strcmp(argv[1], "-l")) {
        set_frame("|/-\\", frame);
    } else {
        set_frame("|\\-/", frame);
    }
    int curr = 0;
    printf("Press any key to stop...\n");
    setvbuf(stdout, NULL, _IONBF, 0);
    while (!kbhit()) {
        curr %= 4;
        putchar(frame[curr]);
        putchar('\b');
        Sleep(250);
        curr++;
    }
    putchar('\n');
    return 0;
}
