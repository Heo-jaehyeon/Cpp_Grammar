#include <iostream>
using namespace std;

// 비교 연산

bool isSame;
bool isDifferent;
bool isGreater;
bool isSmaller;

int main()
{
	// a == b : a와 b의 값이 같은가?
	// 같으면 1, 다르면 0
	isSame = (a == b);
	
	// a != b : a와 b의 값이 다른가?
	isDifferent = (a != b);
	
	// a > b : a가 b보다 큰가?
	// a >= b : a가 b보다 같거나 큰가?
	isGreater = (a > b);
	
	// a < b : a가 b보다 작은가?
	// a <= b : a가 b보다 작거나 같은가?
	isSmaller = (a < b);
	
}