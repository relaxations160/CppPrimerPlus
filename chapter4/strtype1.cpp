#include <iostream>
#include <string>

int main(void)
{
	using namespace std;
	char charr1[20];
	char charr2[20] = "jaguar";
	string str1;
	string str2 = "panther";

	cout << "����̰� ���� �� ���� �Է��Ͻÿ� : ";
	cin >> charr1;
	cout << "����̰� ���� �Ǵٸ� �� ���� �Է��Ͻÿ� : ";
	cin >> str1;
	cout << "�Ʒ� �������� ��� ����̰��Դϴ� : \n";
	cout << charr1 << " " << charr2 << " " << str1 << " " << str2 << endl;

	cout << charr2 << "���� �� ��° ���� : " << charr2[2] << endl;
	cout << str2 << "���� �� ��° ���� : " << str2[2] << endl;

	return 0;
}