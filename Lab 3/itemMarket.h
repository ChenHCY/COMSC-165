#include<iostream>
#include<string>
#include"item.h"

using namespace std;

class itemMarket
{
	item items[10];
	int currentNumber;

	string searchItemFromMarket(string itemName);

public:
	itemMarket()
	{
		currentNumber = 0;
	}
	void input();//enter the item imformation 
	void searchItem();

};// an object ty


