#include <iostream>
using namespace std;

// 가위바위보 게임

int main()
{
	srand(time(0)); // 시드형성
	
	const int SCISSORS = 1;
	const int ROCK = 2;
	const int PAPER = 3;
	
	int win = 0;
	int total = 0;
	
	while (true)
	{
		cout << "가위(1) 바위(2) 보(3) 골라주세요!" << endl;
		cout << "> ";
		
		if (total == 0)
		{
			cout << "현재 승률 : 없음" << endl;
		}
		else
		{
			int winPercentage = (win * 100) / total; //승률
			cout << "현재 승률 : " << winPercentage << " %" << endl;
		}
		// 컴퓨터
		int computerValue = 1 + (rand() % 3); // rand : 0~32767
		
		// 사용자
		int input;
		cin >> input;
		
		if (input == SCISSORS)
		{
			switch (computerValue)
			{
				case SCISSORS:
					cout << "가위(님) vs 가위(컴퓨터) 비겼습니다!" << endl;
					break;
				case ROCK:
					cout << "가위(님) vs 바위(컴퓨터) 졌습니다!" << endl;
					total++;
					break;
				case PAPER:
					{
						cout << "가위(님) vs 보(컴퓨터) 이겼습니다!" << endl;
						total++;
						win++;
						break;
					}
			}
		}
		else if ( input == ROCK)
		{
			switch (computerValue)
			{
				case SCISSORS:
					{
						cout << "바위(님) vs 가위(컴퓨터) 이겼습니다!" << endl;
						total++;
						win++;
						break;
					}
				case ROCK:
					cout << "바위(님) vs 바위(컴퓨터) 비겼습니다!" << endl;
					break;
				case PAPER:
					cout << "바위(님) vs 보(컴퓨터) 졌습니다!" << endl;
					total++;
					break;
			}
		}
		else if ( input == PAPER )
		{
			switch (computerValue)
			{
				case SCISSORS:
					cout << "보(님) vs 가위(컴퓨터) 졌습니다!" << endl;
					total++;
					break;
				case ROCK:
					{
						cout << "보(님) vs 바위(컴퓨터) 이겼습니다!" << endl;
						total++;
						win++;
						break;
					}
				case PAPER:
					cout << "보(님) vs 보(컴퓨터) 비겼습니다!" << endl;
					break;
			}
		}
		else
		{
			break;
		}
	}
}
