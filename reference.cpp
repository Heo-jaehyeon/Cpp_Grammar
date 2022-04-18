#include <iostream>
using namespace std;

struct StatInfo
{
	int hp;
	int attack;
	int defence;
};

// [매개변수][RET][지역변수(info)][매개변수(&info)][RET][지역변수]
void CreateMonster(StatInfo* info)
{
	info->hp = 100;
	info->attack = 8;
	info->defence = 5;
}

// [매개변수][RET][지역변수(info)][매개변수(info(100, 8, 5))-> 날라감][RET][지역변수] , 원본데이터를 못바꿈
// 원본데이터를 바꿔주는게 아닌 매개변수로 복사를 함
void CreateMonster(StatInfo info)
{
	info.hp = 100;
	info.attack = 8;
	info.defence = 5;
}

// 포인터를 사용하지 않을때는?
// 값을 수정하지 않고 읽기만 한다면 사용 가능

// 1) 값 전달 방식
// [매개변수][RET][지역변수(info)][매개변수(info)][RET][지역변수]
// 포인터 없이 인자만 넣어도 된다

void PrintInfoByCopy(StatInfo info)
{
	cout << "--------------------" << endl;
	cout << "HP : " << info.hp << endl;
	cout << "ATT : " << info.attack << endl;
	cout << "DEF : " << info.defence << endl;
	cout << "--------------------" << endl;
}

// 2) 주소 전달 방식
// [매개변수][RET][지역변수(info)][매개변수(&info)][RET][지역변수]

void PrintInfoByPtr(StatInfo* info)
{
	cout << "--------------------" << endl;
	cout << "HP : " << info->hp << endl;
	cout << "ATT : " << info->attack << endl;
	cout << "DEF : " << info->defence << endl;
	cout << "--------------------" << endl;
}

// StatInfo 구조체가 1000바이트짜리 대형 구조체라면?
// -(값 전달) StatInfo로 넘기면 1000바이트가 복사되기 때문에 비효율적
// -(주소 전달) StatInfo*는 8바이트 (포인터 사용)
// -(참조 전달) StatInfo&는 8바이트

// 3) 참조 전달 방식
// 값 전달처럼 편리하게 사용하고, 주소 전달처럼 주소값을 이용해 진퉁을 건드리는 일석이조의 방식

void PrintInfoByRef(StatInfo& info)
{
	cout << "--------------------" << endl;
	cout << "HP : " << info.hp << endl;
	cout << "ATT : " << info.attack << endl;
	cout << "DEF : " << info.defence << endl;
	cout << "--------------------" << endl;
}

int main()
{
	// 4바이트 정수형 바구니를 사용
	// 바구니 이름은 number인데,
	// number를 꺼내거나 사용할때 해당 주소(data, stack, heap)에 1을 넣어주면 된다 라는 뜻이다
	int number = 1;
	
	// * 주소를 담는 바구니
	// int 바구니를 다라가면 int 데이터(바구니)가 있음
	int* pointer = &number;
	// pointer 바구니에 있는 주소를 따라가서, 그 멀리있는 바구니에 2를 넣는다
	*pointer = 2;
	
	// 로우레벨(어셈블리) 관점에서 실제 작동 방식은 포인터와 똑같다
	int& reference = number;
	
	// C++ 관점에서는 number 라는 바구니에 또 다른 이름을 부여한것
	// number라는 바구니에 reference라는 다른 이름을 지어준거라고 보면 된다
	// reference 바구니에 값을 수정한다면
	// 실제 number 바구니(실제값)에 그 값을 꺼내거나 넣으면 됨
	reference = 3;
	
	// 왜 귀찮게 또 다른 이름을 짓는 이유는?
	// number = 3이라고 해도 똑같은데..
	// 참조 전달때문 !
	
	
	
	StatInfo info;
	CreateMonster(&info);
	
	PrintInfoByCopy(info);
	PrintInfoByPtr(&info);
	PrintInfoByRef(info);
	
	return 0;
}