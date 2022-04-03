#include <iostream>
using namespace std;

// 함수 선언
void Func1();
void Func2(int a, int b);
void Func3(float a);

void Func1()
{
	cout << "Func1" << endl;
	
	// push2
	// push 1
	// call Func2
	Func2(1,2); 
	// Func2 함수라는 개념을 모름
	// 함수 선언을 먼저하기
}

void Func2(int a, int b)
{
	cout << "Func2" << endl;
	
	Func3(10);
}

void Func3(float a)
{
	cout << "Func3" << endl;
}

int main()
{
	cout << "main" << endl;
	Func1();
	return 0;
}