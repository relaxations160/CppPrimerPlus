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
	cout << "����� Ű�� ��Ʈ�� ��ġ ������ �Է��Ͻÿ� :";
	cin >> tallFeet >> tallInch;

	return 0;
}

int askWeigth(void)
{
	cout << "����� �����Ը� �Ŀ�� ������ �Է��Ͻÿ� :";
	cin >> tallPound;
	return 0;
}

int calcBMI(void)
{
	tallMeter = tallFeet * inch * meter;
	weigthMess = tallPound / killo;
	BMI = weigthMess / pow(tallMeter, 2);
	cout << "����� BMI �� " << BMI << " �Դϴ�." << endl;
	return 0;
}