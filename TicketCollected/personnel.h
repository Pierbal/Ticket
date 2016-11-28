#include<iostream>
#include<vector>
#include<string>

using namespace std;


class personnel
{
	
private:
	string nameOfpersonnel;//name of the personnel
	string password;//password of the personnel
	string getPassword();//getter method that returns the password of the personnel
	bool checkPasswordStrength(string temp);//checks to see if the password meets our security criteria
	vector<string> games;//stores all the upcoming game in this vector.

public:
	personnel(string name, string password);//private constructor
	personnel();
	string getNameOfpersonnel();//getter method that returns the name of the personnel
	void changePassword(); //allows the personnel to changer her/his password
	void addGame();//adds a new game day


};
