#include <iostream>
using namespace std;

const int kill0h = 100;
enum
{
	STATE = 1,
	EUROPE
};

int main(void)
{
	//TO DO  : ������ �Ÿ��� ����, �Һ��� �ֹ��� ���� �������� ����, ������ ���ϼ� ���� ���α׷� �ۼ�.
	//TO DO  : ������ �Ÿ��� ų�ι���, �Һ��� �ֹ��� ���� ���� ������, 100ų�ι��ʹ� ���ͼ� ���� ���α׷�
	int country {};
	cout << "����� ������ �����Ͻÿ�. \n 1. �̱�	2. ����\n";
	cin >> country;
	
	double mile = 0;
	double gallen = 0;

	double killo = 0;
	double liter = 0;
	double fresult = 0;

	switch (country)
	{
	case STATE:
		cout << "������ �Ÿ�(mile) �� �Һ��� �ֹ��� ��(gallen)�� �Է��Ͻÿ�. \n";
		cout << "������ �Ÿ� : ";
		cin >> mile;
		cout << "�Һ��� �ֹ��� �� : ";
		cin >> gallen;
		cout << "������ ���� ���� " << mile / gallen;
		break;
	case EUROPE:
		cout << "������ �Ÿ�(killo) �� �Һ��� �ֹ��� ��(liter)�� �Է��Ͻÿ�. \n";
		cout << "������ �Ÿ� : ";
		cin >> killo;
		cout << "�Һ��� �ֹ��� �� : ";
		cin >> liter;
		
		fresult = kill0h * liter / killo;
		cout << "100ų�ι��ʹ� ���ͼ��� " << fresult;
		break;
	}

	return 0;
}

