#include <iostream>
using namespace std;

int main(void)
{
	const int Size = 15;
	char name1[Size];
	char name2[Size] = "C++owBoy";
	
	cout << "�ȳ��ϼ���! ���� " << name2 << "�Դϴ�!. �Ƿ����� ������? ";
	cin >> name1;
	cout << "��, " << name1 << " ��! ����� �̸��� ";
	cout << strlen(name1) << " �� �Դϴٸ� \n";
	cout << sizeof(name1) << "����Ʈ ũ���� �迭�� ����Ǿ����ϴ�. \n";
	cout << "�̸��� " << name1[0] << "�ڷ� �����ϴ� ����. \n";
	name2[3] = '\0';
	cout << "�� �̸��� ó�� �� ���ڴ� ������ �����ϴ�: ";
	cout << name2 << endl;


	return 0;
}