#include <iostream>
#include <string>
#include <cstring>

int main(void)
{
	using namespace std;
	
	char charr[20];
	string str;

	cout << "�Է� ������ charr  �� �ִ� ���ڿ� ���� " << strlen(charr) << endl;
	cout << "�Է� ������ str �� �ִ� ���ڿ� ����" << str.length() << endl;

	cout << "�ؽ�Ʈ �� ���� �Է��Ͻÿ� : \n";
	cin.getline(charr, 20); 
	cout << "�� �ٸ� �׽�Ʈ �� ���� �Է��Ͻÿ� : ";
	getline(cin, str); 
	cout << "�Է��� �׽�Ʈ : " << str << endl;
	cout << "�Է� ���Ŀ� charr �� �ִ� ���ڿ� ����  : " << strlen(charr) << endl;
	cout << "�Է� ���Ŀ� str �� �ִ� ���ڿ� ���� :  " << str.size() << endl;

	return 0;
}