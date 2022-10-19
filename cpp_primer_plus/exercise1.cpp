//키를 정수형 cm단위로 묻고, 값을 m, cm단위로 변환하는 프로그램.
//입력해야 할 곳을 사용자에게 지시위해 밑줄 문자 사용, 환산 인수 const 기호 상수 사용
#include <iostream>
#include "exercise1.h"
using namespace std;

int main(void)
{
	cout << "당신의 키를 입력하시오(cm) : ___\b\b\b";
	cin >> tall;
	cout << "당신의 키는 " << tall / meter << "m, " << tall << "cm"<< " 입니다.\n";

	return 0;
}