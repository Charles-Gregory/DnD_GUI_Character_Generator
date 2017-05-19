#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>
#include <vector>

using namespace std;

class Character
{
private:
	string firstName;
	string middleName;
	string lastName;
	string hairColour;
	string race;
	int height;
	int age;

	vector<vector<string>> firstNames = {
		//Deva [0]
		//Male
		{ "Manihn", "Zayek", "Ader", "Samahk", "Maneb", "Beras", "Eryal", "Gamar", "Tavin", "Nahem",
		//Female
		"Davaen", "Riyelle", "Navaen", "Darara", "Hanim", "Dania", "Renael", "Adael", "Tarana", "Tirah" },

		//Human [1]
		//Male
		{ "Colby", "Harlon", "Deverell", "Fremont", "Edmond", "Garvin", "Alfonse", "Abram", "Wallas", "Percy",
		//Female
		"Dajana", "Berte", "Yuliana", "Eulalie", "Vicky", "Lila", "Hollie", "Nesrin", "Gaetana", "Brielle" },

		//Dragonborn [2]
		//Male
		{ "Jinkax", "Hihandur", "Bhaturim", "Tazqrin", "Morwunax", "Alivroth", "Sarash", "Medbarum", "Ghedorim", "Faerhadur",
		//Female
		"Kanorae", "Zenshann", "Zenfyire", "Drysfyire", "Gurxora", "Amelia", "Fengil", "Belmyse", "Iriewyn", "Gurfyire" },

		//Drow [3]
		//Male
		{ "Tluthdyn", "Jarree", "Meromph", "Leszen", "Nimbal", "Tololil", "Drogath", "Kluthve", "Hatch'net", "Iymril",
		//Female
		"Akordriira", "Jhuliara", "Zesafae", "Vasdriira", "Jhadiira", "Zelzrym", "Gauslanna", "Thallyrr", "Greyanna", "Nathrae" },

		//Dwarf [4]
		//Male
		{ "Vonrus", "Tharkohn", "Brombrek", "Adthrum", "Gulduhr", "Muirrom", "Ammir", "Randan", "Bhaldrom", "Benmund",
		//Female
		"Nisdish", "Naerryn", "Dimnis", "Baerwynn", "Jenngwyn", "Brilledeth", "Ranlin", "Brannan", "Dearra", "Annis" }

		//
	};

	vector<vector<string>> lastNames = {
		//Deva [0]
		{ "Ebed", "Kerehr", "Ayahk", "Savahn", "Erek", "Elyihn", "Rahin", "Kerech", "Serahm", "Iannes", "Idranael", "Sadaraeh", "Anehl", "Nalahne", "Jenehl", "Hanima", "Isima", "Nomek", "Haneya", "Asha" },

		//Human [1]
		{ "Fahlar", "Ravengrip", "Titanshield", "Geenbloom", "Hazekeeper", "Autumnhorn", "Hustacas", "Ziao", "Darkblaze", "Cinderpeak", "Wheatvale", "Dawnwhirl", "Hung", "Rapidspell", "Woodentoe", "Chusk", "Mountainbelly", "Pissa", "Stask", "Horsepunch" },

		//Dragonborn [2]
		{ "Zrabroth", "Narlasar", "Caerqiroth", "Goratrin", "Grejurn", "Palasar", "Belvarax", "Sajhan", "Wukris", "Hijurn", "Grizita", "Thawyn", "Wrakaryn", "Oyassa", "Wlsirish", "Kaqwen", "Grigwen", "Xisxora", "Sopora", "Arirish" },

		//Drow [3]
		{ "Despzynge", "Hun'ep", "Oussund", "Freate", "Faertaerth", "Dhalmaen", "Jusztagh", "Abistyn", "Naerth", "Cormrael", "Mylyl", "Arkenndar", "Dear", "Claddghym", "Cobabban", "Yril'Lysael", "Oluae", "Ulala", "Philiom", "Khalazza" },

		//Dwarf [4]
		{ "Vonmond", "Thormyl", "Gremnum", "Ebkyl", "Hjoldur", "Hjulkohm", "Gimdahr", "Barkum", "Brumdahr", "Therdrak", "Kathsael", "Bellewin", "Einmura", "Brilri", "Barglian", "Tislen", "Rynnar", "Dearthel", "Nesmera", "Misleen" }
	};

	vector<string> hairColours = { "Black", "Brunette", "Dark brown", "Medium brown", "Light brown", "Chestnut brown", "Light chestnut brown", "Auburn", "Copper", "Red", "Titian", "Strawberry blond", "Light blond", "Dark blond", "Medium blond", "Grey", "White", "Red", "Blue", "Yellow", "Green" };

	vector<string> races = { "Deva", "Human", "Dragonborn", "Drow", "Dwarf", "Eladrin", "Elf", "Gnome", "Half-elf", "Half-orc", "Halfling", "Tiefling", "Githzerai", "Goliath", "Minotaur", "Shardmind", "Shifter", "Wilden" };

	void randomFirstName();
	void randomLastName();
	void randomHairColour();
	void randomRace();
	void randomHeight();
	void randomAge();

public:
	Character();
	~Character();

	void randomise();

	string getFirstName();
	void setFirstName(string firstName);

	string getLastName();
	void setLastName(string lastName);

	string getHairColour();
	void setHairColour(string hairColour);

	string getRace();
	void setRace(string race);

	int getHeight();
	void setHeight(int height);

	int getAge();
	void setAge(int age);
};

#endif