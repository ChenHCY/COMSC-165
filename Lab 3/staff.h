#include<iostream>
#include<string>

using namespace std;

class storeStaff
{
private:
	char staff_name[100];//the name of staff
	int staff_password;//the password of staff

public:
	storeStaff()
	{
		staff_password = 123;
		strcpy(staff_name, "Bob");

	}
	void modifyPassword();
};//an object type about staff
