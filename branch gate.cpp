#include <iostream>
using namespace std;

// 분기문

int main()
{
	int hp = 100; // 몬스터 HP
	int damage = 100; // 플레이어 데미지
	
	hp -= damage; // 피격 판정
	bool isDead = (hp <= 0); // 처치 판정
	
	// 몬스터가 죽었으면 경험치 추가
	
	// if문 형식
	// if(조건) {
	//    명령문
	//    }
	
	/*
	
	if (isDead) // 일반적으로 [조건] 안에 boolean 값을 넣음
		cout << "몬스터를 처치했습니다" << endl;
	
	if (isDead == false) // 또는 !isDead
		cout << "몬스터가 반격했습니다" << endl; 
		
	이렇게 if문을 두번 쓰면 성능적 낭비가 심함
	따라서 else문을 사용!

	if-else문 중첩 가능!
	
	if (isDead)
	{
		cout << "몬스터를 처치했습니다" << endl;
	}
	else
	{
		if (hp <= 20)
			cout << "몬스터가 도망가고 있습니다" << endl;
		else
			cout << "몬스터가 반격했습니다" << endl;
	}
	
	if-else 를 3번 중첩할때부터 가독성이 떨어짐
	따라서 else if를 사용!
	
	*/
	
	if (isDead)
		cout << "몬스터를 처치했습니다" << endl;
	else if (hp <= 20)
		cout << "몬스터가 도망가고 있습니다" << endl;
	else
		cout << "몬스터가 반격했습니다" << endl;
	
	// 가위바위보 게임
	
	const int ROCK = 0;
	const int PAPER = 1;
	const int SCISSORS = 2;
	
	int input = ROCK;
	
	if (input == ROCk)
		cout << "바위를 냈습니다" << endl;
	else if (input == PAPER)
		cout << "보를 냈습니다" << endl;
	else if (input == SCISSORS)
		cout << "가위를 냈습니다." << endl;
	else
		cout << "뭘 낸겁니까?" << endl;
	
	// switch-case 문
	
	// input 위치에 정수 계열만 넣을 수 있다
	// 부동소수점 같은 경우에는 넣을 수 없다
	
	switch(input)
	{
	case ROCK:
		cout << "바위를 냈습니다" << endl;
		break; 
	// break 를 만나는 순간 괄호를 빠져나옴
	// break 를 누락 시킨다면 아래에 있는 분기문까지 실행하게 된다
	case PAPER:
		cout << "보를 냈습니다" << endl;
		break;
	case SCISSORS:
		cout << "가위를 냈습니다." << endl;
		break;
	default: 
		// case에 걸리지 않으면 default로 오게 된다
		cout << "뭘 낸겁니까?" << endl;
		break;
	}
}