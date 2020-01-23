#include <iostream>
using namespace std;

int main(void) {
   system("mode con cols=30 lines=30 | title 제목명"); // 콘솔창 크기 및 제목 설정
   //cols = 가로, lines = 세로 (가로가 세로보다 짧음)
   getchar();
   return 0;
}
