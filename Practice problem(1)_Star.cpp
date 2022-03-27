#include <iostream>
using namespace std;


int main()
{
	// 별찍기 문제
	
	int input;
	cin >> input; //입력
	
	for(int i=0; i<input; i++)
	{
		for (int j=0; j < input-i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	
	// 2단부터 9단까지 구구단
	
	for(int k = 2; k < 10; k++)
	{
		for(int l = 1; l < 10; l++)
		{
			int answer = k * l;
			cout << k << "*" << l << "=" << answer << endl;
		}
	}
}