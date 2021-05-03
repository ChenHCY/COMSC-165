#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;
/*
   This program was provides functions such as add, search, and staff registration for the merchandise system. The 
   system uses a linked list structure to manipulate data, improving the efficiency of data processing.
   Lab2: a patr of the Lab5
   Author: Chenyu Yang    ID:1670203
   Date: July 1,2018
*/
struct itemMarket
  {
     char item_name[100];////the name of item
     string item_type;//the type of item
     int item_quantity;//the quantity of item
     int item_price;//the price of item
     int i;//Defining variables
     void input();//enter the item imformation 
  };// an object type about commodity

struct store_staff
  {
   char staff_name[100];//the name of staff
   int staff_password;//the password of staff
  };//an object type about staff


void itemMarket::input()
{
  int j;
  cout << "Please enter the name of item: " << endl;
  cin >> item_name[100];
  cout << "Please enter the type of item: " << endl;
  cin >> item_type;
  cout << "Please enter the quantity of item: " << endl;
  cin >> item_quantity;
  cout << "Please enter the price of item: " << endl;
  cin >> item_price;
  i = j++;
}//the fuction about add the item information


string searchItem(char item_name[100], char itemName[100])
{
	if(item_name == itemName)
	{
		return item_name + item_type + item_quantity + item_price;    
  }
	else
	{
		return "Unavailble.";
	}
}//the fuction about the searchitem;

string newStaff(string staffName, string staffPassword)
{
  cout << "Enter the new staff name: " << endl;
  cin >> staffName;
  staff_name = staffName;

  cout << "Enter the new staff password: " << endl;
  cin >> staffPassword;
  staff_password = staffPassword;
}//use the function about new staff register

void showMenu()
{
	cout << "This is a online store, please choose a option: " << endl;
	cout << "1. Add the items information." << endl;
	cout << "2. Search for an item." << endl;
	cout << "3. Show the options menu again" << endl;
	cout << "4. New staff register" << endl;
	cout << "5. Quit" << endl; 
}//the Menu

int mian(void)
{
	int userChoice;//getting user choice

	char item_name[100];////the name of item
  string item_type;//the type of item
  int item_quantity;//the quantity of item
  int item_price;//the price of item
  int i;//Defining variables

  char staff_name[100];//the name of staff
  int staff_password;//the password of staff

  string itemName;

  showMenu();

  while(true)
  {
    cout << "Enter your choice: " << endl;
    cin >> userChoice;
    if(userChoice == 1 || userChoice == 2 || userChoice == 3|| userChoice == 4 || userChoice == 5 || userChoice == 6)
     {
       if(userChoice == 1)
       {
         //use the function about add the item information
       }
       if(userChoice == 2)
       {
         //use the function about the search items;
       }
       if(userChoice == 3)
       {
          showMenu();   
       }
       if(userChoice == 4)
       {
        //use the function about new staff register;
       }
       if(userChoice == 5)
       {
         break; 
       }
     }
  }
}



