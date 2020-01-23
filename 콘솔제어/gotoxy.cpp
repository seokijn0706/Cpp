#include <iostream>
#include <windows.h>
using namespace std;

/*콘솔 커서 위치 이동*/
void gotoxy(int x, int y) { 
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

int main(void) {
	gotoxy(6, 3); // x좌표가 y좌표보다 크기가 2배 정도 작다.
	cout << ". -> (6,3)";
	return 0;
}
