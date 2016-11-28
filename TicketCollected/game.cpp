#include "game.h"
#include <sstream>
#include <stdlib.h>
game::game(string name, string Day)
{
	teamName = name;

	if (isValidDate(Day))
		date = Day;

};

bool game::isValidDate(string gameDate)
{
	int month, day, year;

	//string tempDate = gameDate.c_str(),	monthString = tempDate.substr(0, tempDate.find(".")) , dayString, yearString, ;





};