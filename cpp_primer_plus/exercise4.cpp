#include <iostream>
using namespace std;
const int day = 24;
const int hour = 60;
const int min1 = 60;

int main(void)
{
	long sec;
	cout << "�� ���� �Է��Ͻÿ� : ";
	cin >> sec;

	//1�� == 60��, 1�� == 60��, 1�ð� == 60��, 1�� == 24�ð�
	int fDay{};
	int fHour{};
	int fMin{};
	int fSec{};

	fDay = sec / min1 / hour / day;
	fHour = (sec - (fDay * day * hour * min1)) / min1 / hour;
	fMin = (sec - (fDay * day * hour * min1) - (fHour * hour * min1)) / hour;
	fSec = sec - (fDay * day * hour * min1) - (fHour * hour * min1) - (fMin * min1);
	cout << sec << "�� = " << fDay << "��, " << fHour << "�ð�, " << fMin << "��, " << fSec <<"��";

	return 0;
}