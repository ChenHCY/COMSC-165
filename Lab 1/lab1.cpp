#include <iostream>
#include<cmath>
using namespace std;
/*
   This program was determine whether a department-store customer has exceeded the 
   credit limit on a charge account. 

   Author: Chenyu Yang    ID:1670203
   Date: June 24,2018
*/
int main(void)
{
	int n; //the number of customers
	int accountNumber;//Account number
    double begBalance;//Balance at the beginning of the month
    double chargeMonth;//Total of all items charged by this customer this month
    double creditMonth;//Total of all credits applied to this customer’s account this month
    double creditLimit;//Allowed credit limit
    double newBalance;//the new Balance

    cout << "Enter number of customers: " << endl;
    cin >> n;

    while(n > 0)
    {
    	cout << "Enter account number" << endl;
    	cin >> accountNumber;

    	cout << "Balance at begining of month" << endl;
        cin >> begBalance;

        cout << "Enter total number of items charged by this customer this month" << endl; 
        cin >> chargeMonth;

        cout << "Enter total number of credits applied to this customer's account this month" << endl;
        cin >> creditMonth;

        cout << "Enter allowed credit limits" << endl;
        cin >> creditLimit;
     
        newBalance = begBalance + chargeMonth - creditMonth;

        if(newBalance > creditLimit)
          {
          	cout << "The account number is " << accountNumber << endl;
          	cout << "The credit limit is " << creditLimit << endl;
          	cout << "The new balance is " << newBalance << endl;
          	cout << "Credit Limit Exceeded." << endl;
          	cout << endl;
          }
         else
         {
         	cout << "The account number is " << accountNumber << endl;
          	cout << "The credit limit is " << creditLimit << endl;
          	cout << "The new balance is " << newBalance << endl;
          	cout << "No limit exceeded." << endl;
          	cout << endl;
         }
    }
  return 0;
}