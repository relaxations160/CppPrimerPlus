#include <iostream>
#include <climits>
using namespace std;
int main()
{
	int n_int = INT_MAX;
	short n_short = SHRT_MAX;
	long n_long = LONG_MAX;
	long long n_llong = LLONG_MAX;
	
	cout << "int ��" << sizeof(int) << " ����Ʈ�̴�." << endl;
	cout << "short ��" << sizeof(n_short) << " ����Ʈ�̴�." << endl;
	cout << "long ��" << sizeof(n_long) << " ����Ʈ�̴�." << endl;
	cout << "long long ��" << sizeof(n_llong) << " ����Ʈ�̴�." << endl;

	cout << "�ִ밪 : " << endl;
	cout << "int : " << n_int << endl;
	cout << "short : " << n_short << endl;
	cout << "long : " << n_long << endl;
	cout << "long long : " << n_llong << endl;
	cout << "int�� �ּڰ� = " << INT_MIN << endl;
	cout << "����Ʈ�� ��Ʈ �� = " << CHAR_BIT << endl;
	return 0;
}
