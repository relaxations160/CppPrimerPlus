#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <cstring>


int main(void)
{
	using namespace std;
	
	char charr1[20];
	char charr2[20] = "jaguar";
	string str1;
	string str2 = "panther";

	//string 객체 대입, 문자 배열 대입
	str1 = str2;
	strcpy(charr1, charr2);

	//string 객체 추가, 문자 배열 추가
	str1 += "paste";
	strcat(charr1, "juice");

	//string 객체 길이 구하기, c 스타일 문자열 길이 구하기
	int len1 = str1.size();
	int len2 = strlen(charr1);

	cout << str1 << "문자열에는 " << len1 << " 개의 문자가 들어 있다. \n";
	cout << charr1 << "문자열에는 " << len2 << "개의 문자가 들어 있다.\n";

	return 0;
}