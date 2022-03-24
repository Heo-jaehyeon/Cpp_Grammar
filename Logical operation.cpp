#include <iostream>
using namespace std;

// 논리 연산

bool isSame;
bool test;

int a = 1;
int b = 1;

int hp = 100;
bool isInvincible = true;

isSame = (a == b);

int main()
{
	test = !isSame;
	// ! 의 뜻 not
	// 0이면 1, 그 외 0
	// test 값 0
	
	test = (hp <= 0 && isInvincible == false); // 죽음!
	// && 의 뜻 AND
	// a && b -> 둘 다 1이면 1, 다르면 0
	
	test = (hp > 0 || isInvincible == true); // 살았음!
	// || 의 뜻 OR
	// a || b -> 둘 중 하나라도 1이면 1 (둘 다 0이면 0)
}