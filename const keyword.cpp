#include <iostream>
using namespace std;

const int AIR = 0;
const int STUN = 1;
const int POLYMORPH = 2;
const int INVINCIBLE = 3;
// 바뀌지 않는 값들은 변수명을 대문자로 하는것이 편리함
// main 함수 밖에서 변수선언 -> 전역변수

int main()
{
	INVINCIBLE = 5;
	// 오류, 값을 바꿀수 없음
}
