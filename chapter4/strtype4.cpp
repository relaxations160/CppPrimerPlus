#include <iostream>
#include <string>
#include <cstring>

int main(void)
{
	using namespace std;
	
	char charr[20];
	string str;

	cout << "입력 이전에 charr  에 있는 문자열 길이 " << strlen(charr) << endl;
	cout << "입력 이전에 str 에 있는 문자열 길이" << str.length() << endl;

	cout << "텍스트 한 쌍을 입력하시오 : \n";
	cin.getline(charr, 20); 
	cout << "또 다른 테스트 한 행을 입력하시오 : ";
	getline(cin, str); 
	cout << "입력한 테스트 : " << str << endl;
	cout << "입력 이후에 charr 에 있는 문자열 길이  : " << strlen(charr) << endl;
	cout << "입력 이후에 str 에 있는 문자열 길이 :  " << str.size() << endl;

	return 0;
}