#include <iostream>
using namespace std;
int main(void)
{
	const int ArSize = 20;
	char name[ArSize];
	char dessert[ArSize];

	cout << "�̸��� �Է��Ͻʽÿ� : \n";
	cin.get(name, ArSize).get();
	cout << "�����ϴ� ����Ʈ�� �Է��Ͻʽÿ� : \n";
	cin.get(dessert, ArSize).get();
	cout << "���ִ� " << dessert;
	cout << "����Ʈ�� �غ��ϰڽ��ϴ�. " << name << "�� !";


	return 0;
}