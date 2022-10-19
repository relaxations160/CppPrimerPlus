#include <iostream>
using namespace std;

int main(void)
{
	long long worldPopulation = 0;
	long long americaPopulation = 0;

	//cout.setf(ios_base::fixed, ios_base::floatfield);
	cout << "세계 인구수를 입력하시오 : ";
	cin >> worldPopulation;

	cout << "미국의 인구수를 입력하시오 : ";
	cin >> americaPopulation;

	cout << "세계 인구수에서 미국이 차지하는 비중은 " << (double)americaPopulation / (double)worldPopulation * 100 << "%이다.\n";

	return 0;
}