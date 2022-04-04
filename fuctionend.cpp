#include <iostream>
using namespace std;

// 함수 마무리

// 오버로딩 (중복 정의 : 함수 이름의 재사용)
// 매개변수 갯수가 다르거나
// 매개변수 타입이 다르다면 (순서가 다른걸 포함)
// 함수 이름을 재사용할수 있다

// 반환 타입만 다르면 컴파일이 되지 않는다

int Add(int a, int b)
{
	int result = a + b;
	return result;
}

float Add(float a, float b)
{
	float result = a + b;
	return result;
}

// 기본 인자값
// 기본 인자값은 꼭 매개 변수 맨 끝에 넣어야 한다

void SetPlayerInfo(int hp, int mp, int attack, int guildid = 0, int castleId = 0)
{
	
}

// 스택 오버플로우

int Factorial(int n)
{
	// 5! = 5*    4!
	// 4! = 4*    3!
	// n! = n*   (n-1)!
	
	if (n <= 1)
		return 1;
	
	return n * Factorial(n-1);
}

int main()
{
	float result = Add(1.5f, 2.1f);
	cout << result << endl;

	SetPlayerInfo(100, 40, 10);
	SetPlayerInfo(100, 40, 10, 0, 1);
	
	int result2 = Factorial(20);
	cout << result2 << endl;
	return 0;
}