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

	cout << "�������� �̱����� �̻� �� �ֹ��� �Һ��� ��ȯ�Ͽ� �����帳�ϴ�.\n";
	cout << "������ �Ÿ�(killo) �� �Һ��� �ֹ��� ��(liter)�� �Է��Ͻÿ�. \n";
	cout << "������ �Ÿ� : ";
	cin >> killo;
	cout << "�Һ��� �ֹ��� �� : ";
	cin >> liter;

	fresult = kill0h * liter / killo;
	cout << "100km�� ���� ���� " << fresult << "liters/100km �Դϴ�.\n";
	


	cout << "�̸� ��ȯ�Ͽ� ������ ���� ����" << killo * (hkillo_to_mile / kill0h) / (liter * (1 / gallen_to_liter)) << "mpg�Դϴ�.";
	return 0;
}