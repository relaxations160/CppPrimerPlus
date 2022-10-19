#include <iostream>
using namespace std;
const int kill0h = 100;
const double hkillo_to_mile = 62.14;
const double gallen_to_liter = 3.875;

int main(void)
{
	double killo = 0;
	double liter = 0;
	double fresult = 0;

	cout << "유럽에서 미국으로 이사 시 휘발유 소비량을 변환하여 측정드립니다.\n";
	cout << "주행한 거리(killo) 와 소비한 휘발유 양(liter)을 입력하시오. \n";
	cout << "주행한 거리 : ";
	cin >> killo;
	cout << "소비한 휘발유 양 : ";
	cin >> liter;

	fresult = kill0h * liter / killo;
	cout << "100km당 리터 수는 " << fresult << "liters/100km 입니다.\n";
	


	cout << "이를 변환하여 갤런당 마일 수는" << killo * (hkillo_to_mile / kill0h) / (liter * (1 / gallen_to_liter)) << "mpg입니다.";
	return 0;
}