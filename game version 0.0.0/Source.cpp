#include<stdio.h>
#include<windows.h>
#include<time.h>
void gotoxy(int, int);
void draw_star(int, int);
int main()
{
    int j, i, x[21], y[21], xa = 0, ya = 0, c = 0;
    srand(time(NULL));
    for (i = 1; i <= 20; i++)
    {
        c = 0;
        xa = rand() % 61 + 10;
        ya = rand() % 4 + 2;
        for (j = 1; j <= i; j++)
        {
            if (x[j] == xa && y[j] == ya)
                c++;
        }
        if (c == 0) {
            x[i] = xa; y[i] = ya;
            draw_star(xa, ya);
        }
        else
        {
            c = 0; i--;
        }
    }
    Beep(700, 100);
     gotoxy(0, 10);
    return 0;
}
void gotoxy(int x, int y)
{
    COORD c = { x, y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
void draw_star(int x, int y) {
    gotoxy(x, y);
    printf("*");
}