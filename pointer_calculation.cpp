#include <iostream>
using namespace std;

// 오늘의 주제 : 포인터 연산

// 1) 주소 연산자 (&)
// 2) 산술 연산자 (+ -)
// 3) 간접 연산자 (*)
// 4) 간접 멤버 연산자 (->)

struct Player
{
	int hp;
	int damage;
};

int main()
{
	int number = 1;
	
	// 1) 주소 연산자 (&)
	// - 해당 변수의 주소를 알려주세요
	// - 더 정확히 말하면 해당 변수 타입(TYPE)에 따라서 TYPE* 반환
	
	int* pointer = &number;
	
	// 2) 산술 연산자 (+ -)
	
	number += 1; // number가 1이 증가했다
	
	// int* 
	// - * : 포인터 타입 (8바이트) 주소를 담는 바구니
	// - int : 주소를 따라가면 int(4바이트 정수형 바구니)가 있다고 가정
	
	// [!] 포인터에서 +나 -등 산술 연산으로 1을 더하거나 빼면,
	// 정말 '그 숫자'를 더하고 빼라는 의미가 아닌
	// 한번에 TYPE의 크기만큼을 이동하라 라는 뜻이다
	// 쉽게 말해서
	// 다음/이전 바구니로 이동하고 싶다 << [바구니 단위]의 이동으로 라는 뜻이다
	// 즉 1을 더하면 = 바구니 1개를 이동시켜라 
	// 3을 더하면 = 바구니 3개를 이동시켜라 라는 뜻이다
	// 주로 배열에서 사용
	
	pointer = pointer + 1; // 주소가 1이 아닌 4 증가했다(int형이므로)
	
	// 3) 간접 연산자 (*)
	// - 포탈을 타고 해당 주소로 이동
	number = 3;
	*pointer = 3;
	
	// 구조체
	
	Player player;
	player.hp = 100;
	player.damage = 10;
	
	Player* playerPtr = &player;
	
	(*playerPtr).hp = 200;
	(*playerPtr).damage = 200;
	
	// 4) 간접 멤버 연산자 (->)
	// * 간접 연산자(포탈 타고 해당 주소로 GO)
	// . 구조체의 특정 멤버를 다룰때 사용 (어셈블리언어에서는 그냥 덧셈)
	// -> 는 *와 .를 한방에 쓰는 문법
	
	playerPtr->hp = 200; // (*playerPtr).hp = 200; 과 같은 코드)
	playerPtr->damage = 200; // (*playerPtr).hp = 200; 과 같은 코드
}