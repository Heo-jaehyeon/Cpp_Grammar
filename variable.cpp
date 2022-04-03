#include <iostream>
using namespace std;

// 오늘의 주제 : 지역 변수와 값 전달

// 전역 변수
int globalValue = 0;

void Test()
{
	cout << "전역 변수의 값은 : " << globalValue << endl;	
}

void IncreaseHp(int hp)
{
	hp = hp + 1;
}

// STACK 구성 : [매개변수][RET주소][지역변수(hp=1)] [매개변수(hp=1->hp=2)][RET주소][지역변수] 
int main()
{
	Test(); // 전역 변수의 값은 : 0 출력
	
	// 지역 변수 : 함수 내부에다 만들어 사용
	int lovalValue = 1;
	
	int hp = 1;
	
	cout << "Increase 호출 전 : " << hp << endl; // 결과 1
	IncreaseHp(hp);
	cout << "Increase 호출 후 : " << hp << endl; // 결과 1
	// 왜 증가하지 않고 hp가 1 일까?
	// main 함수의 지역변수 hp를 건들인것이 아닌
	// 매개변수에 들어간 hp를 조작했기 때문이다
	
	// 매개변수 hp가 아닌 지역변수 hp를 건들이기 위해서는?
	// 포인터를 사용하면 된다!
	
	return 0;
}