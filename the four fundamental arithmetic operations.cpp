#include <iostream>
using namespace std;

// 데이터 연산

int a = 1;
// a라는 이름의 바구니를 할당하고 안에 1를 넣는다
int b = 2;

int main()
{

	a = b; // 대입연산
	
	a = b + 3; // 덧셈 add
	a = b - 3; // 뺄셈 sub
	a = b * 3; // 곱셈 mul
	a = b / 3; // 나눗셈 div
	a = b % 3; // 나머지 div
	
	a += 3; // a = a + 3;
	a -= 3; // a = a - 3;
	a *= 3; // a = a * 3;
	a /= 3; // a = a / 3;
	a %= 3; // a = a % 3;
	
	// 증감 연산자
	a++;
	++a;
	a--;
	--a;
	
	// ex)
	b = a++; // a를 b에 대입 후 a를 1 증가
	b = ++a; // a를 1증가 한 후 a를 b에 대입
	
	b = a + 1 * 3; // 곱셈,나눗셈 한 후 덧셈,뺄셈 실행
	
}