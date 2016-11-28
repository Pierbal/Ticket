#include <iostream>
#include <string>
#include "personnel.h"
#include "player.h"
#include <iomanip>
#include <vector>
#include <Windows.h>
using namespace std;

void menu();// Displays all menu choices of the user
void read();//Downloads all files in the software by calling the download() methods
			//of all objects
void save();//Uploads all files from the software by calling the upload() methods
			//of all objects
void quit();//ends the software
void secure(string pass);

int main()
{
	/*string name, pass;
	cout << "Enter you name: ";s
	getline(cin, name);
	cout << "Enter your password: ";
	getline(cin, pass);
	secure(pass);
	getline(cin, pass);
	*/
}
void secure(string pass)
{
	if (pass == "password")
	{
		cout << "Are you serious!?!?!? Your password is password??? Come on, devs put in"
			<< " a lot of work in securing this system, and you are going to compromise it with "
			<< "a weak ass password like this?? Help us help you. "
			<< endl << "Sorry man, I didn't mean to go off of you like that. It's just... it's just that"
			<< "I put in a lot work in this software and a weak password like yours would be would be a"
			<< " guaranteed security breach waiting to happen."
			<< endl << "All the best, from the devs :)" << endl;
	}
}