#include "personnel.h"
#include <time.h>

using namespace std;

personnel::personnel(string name, string passwordInput)
{
	nameOfpersonnel = name;
	if (checkPasswordStrength(passwordInput))
		password = passwordInput;
	else 
		exit(1);

}

string personnel::getPassword()
{
	return password;
}

string personnel::getNameOfpersonnel()
{
	return nameOfpersonnel;
}

void personnel::addGame()
{

}

bool personnel:: checkPasswordStrength(string temp)
{
	bool ans = true;
	ans &= temp.length() <= 7;
	if (ans)
	{
		cout << "Your password must at least 8 characters" << endl;

	}
	ans &= (temp == "password");
	if (ans)
	{
		cout << "Are you serious!?!?!? Your password is password??? Come on, devs put in"
			<< " a lot of work in securing this system, and you are going to compromise it with "
			<< "a weak ass password like this?? Help us help you. "
			<< endl << "Sorry man, I didn't mean to off of you like that. It's just... it's just that"
			<< "I put in a lot work in this software and a weak password like yours would be would be a"
			<< " guaranteed security breach waiting to happen."
			<< endl << "All the best, from the devs :)" << endl;
	}
	return ans;
}

void personnel::changePassword()
{
	string temp, newPassword;
	cout << "Enter your current password: ";
	cin >> temp;
	if (temp == password)
	{
		cout << endl << "Enter your new password: ";
		cin >> temp;
		if (checkPasswordStrength(temp))
		{
			password = temp;
		}
	}
	else
	{
		cout << endl << "Incorrect password, try again" << endl;
		changePassword();
	}
}