/*The player class will handle the name of the player, their jersey
number, the number of recipient, the names of all recipients*/
#include<iostream>
#include<string>
#include<vector>

using namespace std;

class player
{
private:
	string nameOfPlayer;//the name of the player
	int jerseyNumber;// the jersey number of the player
	int numberOfRecipients;//the number of a player's recipients to ensure that he/she does not go over the limit 
	vector<string> recipientNames; //a vector that temporarely stores the names of recipients
	player(string nameOfPlayer, int jerseyNumber, vector<string> recipientNames);//private constructor
	void download();//downloads the files from the server into the software
	void upload();//uploads files from the software to the server 

public:
	player();//public constructor
	string getNameOfPlayer(); //getter method that returns the name of the player
	int getJerseyNumber();//getter method that returns the jersey number of the player
	int getNumberOfRecipients();//getter method that returns the number of recipients entered for the player so far
	vector<string> getRecipientNames();//getter method that returns the names of recipients 
	void addRecipientNames();//setter method that updates/adds the list of recipients
	

};