#include <iostream>
using namespace std;

// 함수(프로시저, 메소드, 루틴)

/*

먼저 input으로 무엇을 받고, output으로 무엇을 뱉을지 정해준다

* 함수 구성 *

반환타입 함수이름([인자타입 매개변수])
{
	함수 내용
	return ---;
}

*/

// Hello World를 콘솔에 출력하는 함수를 만들어보자
// input : 없음 / output : 없음
// 타입 : int float double char -- void(타입이 없는 경우)

void PrintHelloWorld(void) // 인자타입 void는 생략가능
{
	cout << "Hello World" << endl;
	
	return;
	
	cout << "Hi" << endl; // return 뒤에 있으므로 출력 안함
}

// 정수를 입력 받아서, 콘솔에 출력하는 함수를 만들어보자
// input : int // output : 없음

void PrintNumber(int number)
{
	cout << "넘겨주신 숫자는 " << number << "입니다" << endl;
}

// 2를 곱해서 결과물을 만들어내는 함수를 만들어보자
// input : int / output : int

int MultiplyBy2(int a)
{
	int result = a * 2;
	return result;
}

// 두 숫자를 곱해서 결과물을 출력하는 함수를 만들어보자
// input : int / output : int

int MultiplyBy(int a, int b)
{
	int c = a * b;
	return c;
}

int main()
{
	PrintHelloWorld();
	// "Hello World" 출력
	
	PrintNumber(4);
	// "넘겨주신 숫자는 4입니다" 출력
	
	int result = MultiplyBy2(3);
	cout << "2를 곱한 숫자는 " << result << " 입니다" << endl;
	// "2를 곱한 숫자는 6 입니다" 출력
	
	int answer = MultiplyBy(2, 4);
	cout << "2를 곱한 숫자는 " << answer << " 입니다" << endl;
	// "2를 곱한 숫자는 8 입니다" 출력
}