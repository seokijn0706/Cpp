#include <iostream>
#include <windows.h>
using namespace std;


/*커서 숨기기(0) or 보이기(1) */
void CursorView(char show) {
	HANDLE hConsole;
	CONSOLE_CURSOR_INFO ConsoleCursor;

	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	ConsoleCursor.bVisible = show;
	ConsoleCursor.dwSize = 1;

	SetConsoleCursorInfo(hConsole, &ConsoleCursor);
}


int main(void) {
	//CursorView(true); // 커서 보이기
	CursorView(false); // 커서 숨기기
	return 0;
}
