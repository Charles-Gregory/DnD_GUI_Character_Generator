//#include <fstream>
#include "Character.h"

Character::Character()
{
	randomise();
}

Character::~Character() {}

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
		firstName = firstNames[0][(rand() % firstNames[0].size())];
	else if (race == "Human")
		firstName = firstNames[1][(rand() % firstNames[1].size())];
	else if (race == "Dragonborn")
		firstName = firstNames[2][(rand() % firstNames[2].size())];
	else if (race == "Drow")
		firstName = firstNames[3][(rand() % firstNames[3].size())];
	else if (race == "Dwarf")
		firstName = firstNames[4][(rand() % firstNames[4].size())];
	else
	{
		int i = (rand() % firstNames.size());
		firstName = firstNames[i][(rand() % firstNames[i].size())];
	}
}

void Character::randomLastName()
{
	if (race == "Deva")
	{
		lastName = lastNames[0][(rand() % lastNames[0].size())];
	}
	else if (race == "Human")
	{
		lastName = lastNames[1][(rand() % lastNames[1].size())];
	}
	else if (race == "Dragonborn")
	{
		lastName = lastNames[2][(rand() % lastNames[2].size())];
	}
	else if (race == "Drow")
	{
		lastName = lastNames[3][(rand() % lastNames[3].size())];
	}
	else if (race == "Dwarf")
	{
		lastName = lastNames[4][(rand() % lastNames[4].size())];
	}
	else
	{
		int i = (rand() % lastNames.size());
		lastName = lastNames[i][(rand() % lastNames[i].size())];
	}
}

void Character::randomHairColour()
{
	hairColour = hairColours[(rand() % hairColours.size())];
}

void Character::randomRace()
{
	race = races[(rand() % races.size())];
}

void Character::randomHeight()
{
	if (race == "Deva")
		height = ((rand() % 5) + 73);
	else if (race == "Human")
		height = ((rand() % 20) + 58);
	else if (race == "Dragonborn")
		height = ((rand() % 16) + 66);
	else if (race == "Drow")
		height = ((rand() % 8) + 64);
	else if (race == "Dwarf")
		height = ((rand() % 8) + 45);
	else if (race == "Eladrin")
		height = ((rand() % 8) + 65);
	else if (race == "Elf")
		height = ((rand() % 12) + 53);
	else if (race == "Gnome")
		height = ((rand() % 6) + 36);
	else if (race == "Half-elf")
		height = ((rand() % 16) + 62);
	else if (race == "Half-orc")
		height = ((rand() % 24) + 58);
	else if (race == "Halfling")
		height = ((rand() % 8) + 32);
	else if (race == "Tiefling")
		height = ((rand() % 20) + 58);
	else if (race == "Githzerai")
		height = ((rand() % 12) + 66);
	else if (race == "Goliath")
		height = ((rand() % 12) + 84);
	else if (race == "Minotaur")
		height = ((rand() % 20) + 74);
	else if (race == "Shardmind")
		height = ((rand() % 8) + 65);
	else if (race == "Shifter")
		height = ((rand() % 8) + 65);
	else if (race == "Wilden")
		height = ((rand() % 8) + 64);
	else
		height = ((rand() % 12) + 0);
}

void Character::randomAge()
{
	age = ((rand() % 50) + 20);
}

std::string Character::getFirstName() { return firstName; }
void Character::setFirstName(std::string firstName) { this->firstName = firstName; }

std::string Character::getLastName() { return lastName; }
void Character::setLastName(std::string lastName) { this->lastName = lastName; }

std::string Character::getHairColour() { return hairColour; }
void Character::setHairColour(std::string hairColour) { this->hairColour = hairColour; }

std::string Character::getRace() { return race; }
void Character::setRace(std::string race) { this->race = race; }

int Character::getHeight() { return height; }
void Character::setHeight(int height) { this->height = height; }

int Character::getAge() { return age; }
void Character::setAge(int age) { this->age = age; }