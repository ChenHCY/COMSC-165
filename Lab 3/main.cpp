#include<iostream>
#include<string>

#include"itemMarket.h"
#include"staff.h"

using namespace std;

void showMenu()
{
	cout << "This is a online store, please choose a option: " << endl;
	cout << "1. Add the items information." << endl;
	cout << "2. Search for an item." << endl;
	cout << "3. Show the options menu again" << endl;
	cout << "4. staff change the password" << endl;
	cout << "5. Quit" << endl;
}

void quit()
{
	cout << "Good Bye!" << endl;
	exit(0);
}

int main()
{
	int choose = 1;
	itemMarket market;
	storeStaff staff;

	while (choose != 5)
	{
		showMenu();
		cin >> choose;
		switch (choose)
		{
		case 1:
			market.input();
			break;
		case 2:
			market.searchItem();
			break;
		case 3:
			//showMenu();
			break;
		case 4:
			staff.modifyPassword();
			break;
		case 5:
			quit();
			break;
		default:
			printf("Bad input!");
			break;
		}
	}
	return 0;
}