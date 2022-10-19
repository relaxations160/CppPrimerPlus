#include <iostream>
#include "exercise2.h"
using namespace std;


int main(void)
{
	askTall();
	askWeigth();
	calcBMI();
	return 0;
}


int askTall(void)
{
	cout << "당신의 키를 피트와 인치 단위로 입력하시오 :";
	cin >> tallFeet >> tallInch;

	return 0;
}

int askWeigth(void)
{
	cout << "당신의 몸무게를 파운드 단위로 입력하시오 :";
	cin >> tallPound;
	return 0;
}

int calcBMI(void)
{
	tallMeter = tallFeet * inch * meter;
	weigthMess = tallPound / killo;
	BMI = weigthMess / pow(tallMeter, 2);
	cout << "당신의 BMI 는 " << BMI << " 입니다." << endl;
	return 0;
}