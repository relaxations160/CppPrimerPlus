#include <iostream>
using namespace std;

struct coffe
{
	char name[20];
	string flavor;
	double price;
};

int main(void)
{
	coffe some_guy =
	{
		"midnight_story",
		"rich",
		7.0
	};

	coffe some_girl;

	cout << "some guy : " << some_guy.name << "for $";
	cout << some_guy.price << endl;

	some_girl = some_guy;
	cout << "some girl : " << some_girl.name << "for $";
	cout << some_girl.price << endl;
	return 0;
}