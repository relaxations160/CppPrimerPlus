#include <iostream>

int main(void)
{
	using namespace std;
	char ch = 'M'; //M�� �ش��ϴ� ASCII �ڵ带  char �� ���� ch�� ����
	int i = ch;
	cout << ch << "�� ascii �ڵ�� " << i << "�Դϴ�." << endl;

	cout << "�� ���� �ڵ忡 1�� ���غ��ڽ��ϴ�." << endl;
	ch = ch + 1;
	i = ch;
	cout << ch << "�� ASCII �ڵ�� " << i << "�Դϴ�. " << endl;

	//cout.put() ��� �Լ��� ����Ͽ� char�� ���� ch�� ���
	cout << "cout.put(ch)�� ����Ͽ� char�� ���� ch�� ȭ�鿡 ���: ";
	cout.put(ch);

	// cout.put() �� ����Ͽ� ���� ����� ���
	cout.put('!');

	cout << endl << "����" << endl;

	return 0;
}