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

	cout << "���� �Ǹ��ϴ� ���� \n" << guest.name;
	cout << "�� " << pal1.name << "�Դϴ�. \n";

	cout << "�� ��ǰ�� $";
	cout << guest.price + pal1.price << "�� �帮�ڽ��ϴ�.! \n";

	return 0;
}