#include <iostream>
using namespace std;

int main(void)
{
	const int ArSize = 20;
	char name[ArSize];
	char dessert[ArSize];

	cout << "�̸��� �Է��Ͻʽÿ� : \n";
	cin.getline(name, ArSize);
	cout << "�����ϴ� ����Ʈ�� �Է��Ͻʽÿ� : \n";
	cin.getline(dessert, ArSize);
	cout << "���ִ� " << dessert;
	cout << " ����Ʈ�� �غ��ϰڽ��ϴ�. " << name << " ��! \n";

	return 0;
}