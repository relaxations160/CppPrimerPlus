#include <iostream>
using namespace std;
const int day = 24;
const int hour = 60;
const int min1 = 60;

int main(void)
{
	long sec;
	cout << "초 수를 입력하시오 : ";
	cin >> sec;

	//1초 == 60분, 1분 == 60초, 1시간 == 60분, 1일 == 24시간
	int fDay{};
	int fHour{};
	int fMin{};
	int fSec{};

	fDay = sec / min1 / hour / day;
	fHour = (sec - (fDay * day * hour * min1)) / min1 / hour;
	fMin = (sec - (fDay * day * hour * min1) - (fHour * hour * min1)) / hour;
	fSec = sec - (fDay * day * hour * min1) - (fHour * hour * min1) - (fMin * min1);
	cout << sec << "초 = " << fDay << "일, " << fHour << "시간, " << fMin << "분, " << fSec <<"초";

	return 0;
}