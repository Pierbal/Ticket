#include "player.h"
#include <iostream>



player:: player(string name, int jerseyNum, vector<string> nameRecipient)
{

	nameOfPlayer = name;
	jerseyNumber = jerseyNum;
	recipientNames = nameRecipient;

};

int player::getJerseyNumber()
{
	return jerseyNumber;
};

vector<string> player::getRecipientNames()
{
	return recipientNames;
};

string player::getNameOfPlayer()
{
	return nameOfPlayer;
}

int player::getNumberOfRecipients()
{
	return numberOfRecipients;
}