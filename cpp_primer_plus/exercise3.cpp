#include <iostream>
using namespace std;

const int changeAngle = 60;

int main(void)
{
	int angle{};
	int cleavage{};
	int fangle{};
	double angle_result{};

	cout << "������ ��, �� �� ������ �Է��Ͻÿ� : \n";
	cout << "����, ������ �Է��Ͻÿ�: ";
	cin >> angle;
	cout << "������, �а��� �Է��Ͻÿ�: ";
	cin >> cleavage;
	cout << "������, �ʰ��� �Է��Ͻÿ�: ";
	cin >> fangle;
	
	angle_result = angle + ((double)cleavage / changeAngle) + ((double)fangle / changeAngle / changeAngle);
	cout << angle << "��, " << cleavage << "��, " << fangle << "�� = " << angle_result << "��\n";
	
	return 0;
}