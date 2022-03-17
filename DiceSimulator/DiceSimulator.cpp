#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
	int roll = 1;
	char choice;
	unsigned dice;
	dice = time(0);
	srand(dice);
	do
	{
		cout << "Roll #" << roll++ << " - "<< rand() % 6 + 1 << endl;
		cout << "Roll again? Y/N ";
		cin >> choice;
		system("cls");
	}
	while (tolower(choice) == 'y');
	system("pause");
	return 0;
}