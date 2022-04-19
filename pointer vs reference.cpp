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

void PrintInfoByRef(const StatInfo& info)
{
	cout << "--------------------" << endl;
	cout << "HP : " << info.hp << endl;
	cout << "ATT : " << info.attack << endl;
	cout << "DEF : " << info.defence << endl;
	cout << "--------------------" << endl;
	
	// 신입이 왔다
	// info.hp = 10000; 불가능! 읽기만 가능!
}

int main()
{
	StatInfo info;
	
	// 포인터 vs 참조
	// 성능 : 똑같음!
	// 편의성 : 참조 승! 
	
	// 1) 편의성 관련
	// 편의성이 좋다는게 꼭 장점만은 아니다
	// 포인터는 주소를 넘기니 확실하게 원본을 넘긴다는 힌트를 줄 수 있는데,
	// 참조는 자연스럽게 모르고 지나칠 수도 있음!
	// ex) 마음대로 고친다면?
	// const를 사용해서 이런 마음대로 고치는 부분을 개선 가능
	
	// 참고로 포인터도 const를 사용 가능!
	// * 기준으로 앞에 붙이느냐, 뒤에 붙이느냐에 따라 의미가 달라진다
	
	// * 뒤에 붙인다면?
	// StatInfo* const info
	// info라는 바구니의 내용물[주소]를 바꿀수 없음
	// info는 주소값을 갖는 바구니 -> 이 주소값이 고정이다!
	
	// * 앞에 붙인다면?
	// const StatInfo* info
	// info가 '가리키고 있는' 바구니의 내용물을 바꿀 수 없음
	// '원격' 바구니의 내용물(데이터)을 바꿀수 없다
	
	// 2) 초기화 여부
	// 참조 타입은 바구니의 2번째 이용
	// -> 참조하는 대상이 없으면 안됨
	// ex) StatInfo& reference; 라고 하면 안되고
	//     StatInfo& reference = info; 와 같이 참조하는 대상을 같이 넣어줘야한다
	// 반면) 포인터는 대상이 실존하지 않을수 있다
	// 포인터에서 '없다'는 의미는?
	// StatInfo* pointer = nullptr; 또는 NULL 또는 0
	// 참조 타입에서는 nullptr 개념이 없다
	
	CreateMonster(&info);
	
	PrintInfoByPtr(&info);
	
	PrintInfoByRef(info);
	
	return 0;
	
	// 결론은?
	// ex) 구글에서는 거의 포인터 사용
	// ex) 언리얼 엔진에서는 reference 도 사용
	// 없는 경우도 고려해야한다면 pointer (null 체크 필수)
	// 바뀌지 않고 읽는 용도만 사용한다면 const ref&
	// 그 외 일반적으로 ref (명시적으로 호출할때 OUT을 붙인다)
	// #define OUT 
	
	// 포인터로 사용하던걸 참조로 넘겨주려면?
	// StatInfo& ref = *pointer;
	// PrintInfoByRef(ref);
	
	// 참조로 사용하던걸 포인터로 넘겨주려면?
	// StatInfo* ptr = &reference;
	// PrintintoByPtr(&reference);
}