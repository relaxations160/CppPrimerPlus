#include <iostream>
using namespace std;

int main(void)
{
	long long worldPopulation = 0;
	long long americaPopulation = 0;

	//cout.setf(ios_base::fixed, ios_base::floatfield);
	cout << "���� �α����� �Է��Ͻÿ� : ";
	cin >> worldPopulation;

	cout << "�̱��� �α����� �Է��Ͻÿ� : ";
	cin >> americaPopulation;

	cout << "���� �α������� �̱��� �����ϴ� ������ " << (double)americaPopulation / (double)worldPopulation * 100 << "%�̴�.\n";

	return 0;
}