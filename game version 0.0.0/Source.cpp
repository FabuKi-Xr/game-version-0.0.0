#include<stdio.h>
#include<windows.h>
#include<time.h>
#include<conio.h>
void gotoxy(int x, int y)
{
	COORD c = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
void draw_ship(int x, int y)
{
	gotoxy(x, y); printf(" <-0-> ");
}
void draw_bullet(int x, int y)
{
	gotoxy(x, y); printf("^");
}
void clear_bullet(int x, int y)
{
	gotoxy(x, y); printf(" ");
}
int main()
{
	int i,j,k;
	srand(time(NULL));
	for (i = 0;i < 20;i++)
	{
		for (k = 0;k <= 5;k++) {
			for (j = 0;j < 70;j++)
			{
				if ((k>=2&&k<=5)&&(j>=10&&j<=70)) printf("*", rand()); break;
			}
		printf("\n");
		}
		
	}
		
	return 0;
}
	