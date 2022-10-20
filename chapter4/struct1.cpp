#include <iostream>
#include <string>
using namespace std;
struct coffe
{
	char name[20];
	float flavor;
	double price;
};

int main(void)
{
	using namespace std;
	coffe guest =
	{
		"Evening Star",
		3.33,
		5.5
	};

	coffe pal1 =
	{
		"Windy Snow",
		1.65,
		6.0
	};

	cout << "지금 판매하는 재료는 \n" << guest.name;
	cout << "와 " << pal1.name << "입니다. \n";

	cout << "두 제품을 $";
	cout << guest.price + pal1.price << "에 드리겠습니다.! \n";

	return 0;
}