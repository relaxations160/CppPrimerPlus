#include <iostream>
using namespace std;

const int kill0h = 100;
enum
{
	STATE = 1,
	EUROPE
};

int main(void)
{
	//TO DO  : 주행한 거리는 마일, 소비한 휘발유 양은 갤런으로 묻고, 갤런당 마일수 보고 프로그램 작성.
	//TO DO  : 주행한 거리를 킬로미터, 소비한 휘발유 양을 리터 단위로, 100킬로미터당 리터수 보고 프로그램
	int country {};
	cout << "당신의 국적을 선택하시오. \n 1. 미국	2. 유럽\n";
	cin >> country;
	
	double mile = 0;
	double gallen = 0;

	double killo = 0;
	double liter = 0;
	double fresult = 0;

	switch (country)
	{
	case STATE:
		cout << "주행한 거리(mile) 와 소비한 휘발유 양(gallen)을 입력하시오. \n";
		cout << "주행한 거리 : ";
		cin >> mile;
		cout << "소비한 휘발유 양 : ";
		cin >> gallen;
		cout << "갤런당 마일 수는 " << mile / gallen;
		break;
	case EUROPE:
		cout << "주행한 거리(killo) 와 소비한 휘발유 양(liter)을 입력하시오. \n";
		cout << "주행한 거리 : ";
		cin >> killo;
		cout << "소비한 휘발유 양 : ";
		cin >> liter;
		
		fresult = kill0h * liter / killo;
		cout << "100킬로미터당 리터수는 " << fresult;
		break;
	}

	return 0;
}

