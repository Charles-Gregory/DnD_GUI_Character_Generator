#include <fstream>
#include <string>
#include <vector>
#include "Character.h"

//Character::Character()
//{
//	randomise();
//}

//Character::~Character() {}

void Character::randomise()
{
	randomHairColour();
	randomAge();
	randomRace();
	randomHeight();
	randomFirstName();
	randomLastName();
}

void Character::randomFirstName()
{
	if (race == "Deva")
		firstName = firstNames[0][(rand() % firstNames[0]->Length)];
	else if (race == "Human")
		firstName = firstNames[1][(rand() % firstNames[1]->Length)];
	else if (race == "Dragonborn")
		firstName = firstNames[2][(rand() % firstNames[2]->Length)];
	else if (race == "Drow")
		firstName = firstNames[3][(rand() % firstNames[3]->Length)];
	else if (race == "Dwarf")
		firstName = firstNames[4][(rand() % firstNames[4]->Length)];
	else
	{
		int i = (rand() % firstNames->Length);
		firstName = firstNames[i][(rand() % firstNames[i]->Length)];
	}
}

void Character::randomLastName()
{
	if (race == "Deva")
	{
		lastName = lastNames[0][(rand() % lastNames[0]->Length)];
	}
	else if (race == "Human")
	{
		lastName = lastNames[1][(rand() % lastNames[1]->Length)];
	}
	else if (race == "Dragonborn")
	{
		lastName = lastNames[2][(rand() % lastNames[2]->Length)];
	}
	else if (race == "Drow")
	{
		lastName = lastNames[3][(rand() % lastNames[3]->Length)];
	}
	else if (race == "Dwarf")
	{
		lastName = lastNames[4][(rand() % lastNames[4]->Length)];
	}
	else
	{
		int i = (rand() % lastNames->Length);
		lastName = lastNames[i][(rand() % lastNames[i]->Length)];
	}
}

void Character::randomHairColour()
{
	hairColour = hairColours[(rand() % hairColours->Length)];
}

void Character::randomRace()
{
	race = races[(rand() % races->Length)];
}

void Character::randomHeight()
{
	if (race == "Deva")
		height = Int16((rand() % 5) + 73);
	else if (race == "Human")
		height = Int16((rand() % 20) + 58);
	else if (race == "Dragonborn")
		height = Int16((rand() % 16) + 66);
	else if (race == "Drow")
		height = Int16((rand() % 8) + 64);
	else if (race == "Dwarf")
		height = Int16((rand() % 8) + 45);
	else if (race == "Eladrin")
		height = Int16((rand() % 8) + 65);
	else if (race == "Elf")
		height = Int16((rand() % 12) + 53);
	else if (race == "Gnome")
		height = Int16((rand() % 6) + 36);
	else if (race == "Half-elf")
		height = Int16((rand() % 16) + 62);
	else if (race == "Half-orc")
		height = Int16((rand() % 24) + 58);
	else if (race == "Halfling")
		height = Int16((rand() % 8) + 32);
	else if (race == "Tiefling")
		height = Int16((rand() % 20) + 58);
	else if (race == "Githzerai")
		height = Int16((rand() % 12) + 66);
	else if (race == "Goliath")
		height = Int16((rand() % 12) + 84);
	else if (race == "Minotaur")
		height = Int16((rand() % 20) + 74);
	else if (race == "Shardmind")
		height = Int16((rand() % 8) + 65);
	else if (race == "Shifter")
		height = Int16((rand() % 8) + 65);
	else if (race == "Wilden")
		height = Int16((rand() % 8) + 64);
	else
		height = Int16((rand() % 12) + 0);
}

void Character::randomAge()
{
	age = Int16((rand() % 50) + 20);
}

String^ Character::getFirstName() { return firstName; }
void Character::setFirstName(String^ firstName) { this->firstName = firstName; }

String^ Character::getLastName() { return lastName; }
void Character::setLastName(String^ lastName) { this->lastName = lastName; }

String^ Character::getHairColour() { return hairColour; }
void Character::setHairColour(String^ hairColour) { this->hairColour = hairColour; }

String^ Character::getRace() { return race; }
void Character::setRace(String^ race) { this->race = race; }

Int16^ Character::getHeight() { return height; }
void Character::setHeight(Int16^ height) { this->height = height; }

Int16^ Character::getAge() { return age; }
void Character::setAge(Int16^ age) { this->age = age; }