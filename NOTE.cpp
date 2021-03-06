#include <iostream>
using namespace std;


int main()
{
	// (1) 변수의 유효범위
	
	
	int hp = 10;
	// 스택
	// { } 중괄호의 범위가 생존 범위
	
	int hp = 100;
	// hp 재정을 여러번 초기화했다는 오류 발생!
	
	// 해결방법 !
	/*{
		int hp = 10;
	  }
	  
	  int hp = 100;
	 */ // 중괄호를 하나 추가하기
	
	
	// (2) 연산 우선 순위
	
	
	// 짝수 판별
	bool isEven = (hp % 2 == 0);
	
	// 우선순위가 헷갈리면 괄호를 붙이기
	// bool isEven = ((hp % 2) == 0);
	
	// (3) 타입 변환
	
	int Mp = 77777;
	int jp = -1 ;
	short Mp2 =(short)Mp; // 윗쪽 비트 데이터가 짤린다
	float Mp3 =(float)Mp; // 실수로 변환할 때 정밀도 차이가 있기 때문에 데이터 손실
	unsigned int jp1 =(unsigned int)jp; // 비트 단위로 보면 똑같은데, 분석하는 방법이 달라짐

	// (4) 사칙 연산
	
	// 곱셈의 경우, 오버플로우 조심
	// 나눗셈의 경우, 0으로 나누기 조심
	// 실수 관련 문제
	
	int maxMp = 1000;
	float ratio = Mp / maxHp;
	// 7.777이 아니고 왜 7?
	// int / int 는 int로 판단 따라서 정수로 결과값이 나옴
	
	// 해결방법
	// int / float 또는 float / int
	// ex) float ratio = Mp / (float)maxHp;
	
}