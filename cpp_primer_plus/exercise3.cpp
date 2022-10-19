#include <iostream>
using namespace std;

const int changeAngle = 60;

int main(void)
{
	int angle{};
	int cleavage{};
	int fangle{};
	double angle_result{};

	cout << "위도를 도, 분 초 단위로 입력하시오 : \n";
	cout << "먼저, 도각을 입력하시오: ";
	cin >> angle;
	cout << "다음에, 분각을 입력하시오: ";
	cin >> cleavage;
	cout << "끝으로, 초각을 입력하시오: ";
	cin >> fangle;
	
	angle_result = angle + ((double)cleavage / changeAngle) + ((double)fangle / changeAngle / changeAngle);
	cout << angle << "도, " << cleavage << "분, " << fangle << "초 = " << angle_result << "도\n";
	
	return 0;
}