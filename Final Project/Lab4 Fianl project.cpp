#include<iostream>
#include<string>
#include<string.h>
#include<stdlib.h>
using namespace std;
/*
   This program was provides functions such as add, search, and staff registration for the merchandise system. The 
   system uses a linked list structure to manipulate data, improving the efficiency of data processing.
   Lab4: Fianl project
   Author: Chenyu Yang    ID:1670203
   Date: July 21,2018
*/
class item
{
public:
	string item_name;////the name of item
	string item_type;//the type of item
	int item_quantity;//the quantity of item
	int item_price;//the price of item
	int i;//Defining variables
};// an object of item

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

void itemMarket::input()
{   
    cout << "Please enter the name of item: " << endl;
	cin >> items[currentNumber].item_name;
	cout << "Please enter the type of item: " << endl;
	cin >> items[currentNumber].item_type;
	cout << "Please enter the quantity of item: " << endl;
	cin >> items[currentNumber].item_quantity;
	cout << "Please enter the price of item: " << endl;
	cin >> items[currentNumber].item_price;
    currentNumber++;
    cout << "Add the items information Success!" << endl;
    cout << endl;
}


class storeStaff
{
private:
	char staff_name[100];//the name of staff
	int staff_password;//the password of staff
public:
	storeStaff()
	{
		staff_password = 123456;
		strcpy(staff_name,"Bob");
    }
	void modifyPassword();
	void input();
};//an object type about staff

void storeStaff::modifyPassword()
{
	int originalPassword;
	int newPassword;
	int confirmPassword;
    cout << "Please enter the original password: " << endl;
	cin >> originalPassword;
    if (originalPassword != staff_password)
	{
		cout << "original password is wrong!" << endl;
		return;
	}
	else
	{
		cout << "Please enter a new password: " << endl;
		cin >> newPassword;
		cout << "Please enter the confirm password: " << endl;
		cin >> confirmPassword;

		if (newPassword != confirmPassword)
		{
			cout << "Inconsistent password entered twice" << endl;
			return;
		}
		else
		{
			staff_password = newPassword;
			cout << "Change the password success!" << endl;
		}
	}
}

void storeStaff::input()
{
  int password;
  cout << "Please enter your password: ";
  cin >> password;
  while(true)
  {
  	 if(password != staff_password)
  	{
     cout << "Your password was wrong." << endl;
     cout << "Please enter your password: ";
     cin >> password;
    }
    else
      break;
  }
}

void itemMarket::searchItem()
{
	string itemName;
	cout << "Please input the name of the item:" << endl;
	cin >> itemName;
	cout << searchItemFromMarket(itemName) << endl;
}
string itemMarket::searchItemFromMarket(string itemName)
{
	for (int i = 0; i < currentNumber; i++)
	{
		if (items[i].item_name == itemName)
		{    

			string itemString = "Name: " + items[i].item_name + "    Type: " + items[i].item_type;
			cout << "This is your search items imformation: " << endl;
            cout << itemString << endl;
            cout << "Quantity: " << items[i].item_quantity << endl;
            cout << "Price: " << items[i].item_price << endl;
		}
		if (items[i].item_name != itemName)
		{
			cout << "Soory. Did not find the search imformation." << endl;
		}
	}
	return "Thanks for your search.";
}

void showMenu()
{
	cout << "**************************************************************" << endl;
	cout << "** This is a online store, please choose a option:          **" << endl;
	cout << "**                                                          **" << endl;
	cout << "**             1. Add the items information.                **" << endl;
	cout << "**             2. Search for an item.                       **" << endl;
	cout << "**             3. Show the options menu again               **" << endl;
	cout << "**             4. staff change the password                 **" << endl;
	cout << "**             5. Quit                                      **" << endl;
	cout << "**                                                          **" << endl;
	cout << "**************************************************************" << endl;
}

void quit()
{
	cout << "Thank you so much. Good Bye!" << endl;
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
            staff.input();
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
			cout << "Bad input!" << endl;
			break;
		}
	}
	return 0;
}

