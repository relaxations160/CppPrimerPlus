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

	//string ��ü ����, ���� �迭 ����
	str1 = str2;
	strcpy(charr1, charr2);

	//string ��ü �߰�, ���� �迭 �߰�
	str1 += "paste";
	strcat(charr1, "juice");

	//string ��ü ���� ���ϱ�, c ��Ÿ�� ���ڿ� ���� ���ϱ�
	int len1 = str1.size();
	int len2 = strlen(charr1);

	cout << str1 << "���ڿ����� " << len1 << " ���� ���ڰ� ��� �ִ�. \n";
	cout << charr1 << "���ڿ����� " << len2 << "���� ���ڰ� ��� �ִ�.\n";

	return 0;
}