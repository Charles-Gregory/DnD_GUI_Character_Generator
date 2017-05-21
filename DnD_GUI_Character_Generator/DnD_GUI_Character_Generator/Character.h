#ifndef CHARACTER_H
#define CHARACTER_H

using namespace System;
using namespace System::Collections::Generic;

public ref class Character
{
private:
	static String^ firstName;
	static String^ middleName;
	static String^ lastName;
	static String^ hairColour;
	static String^ race;
	static Int16^ height;
	static Int16^ age;

	static array<array<String^>^>^ firstNames = gcnew array<array<String^>^> {
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

	static array<array<String^>^>^ lastNames = gcnew array<array<String^>^> {
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

	static array<String^>^ hairColours = gcnew array<String^> { "Black", "Brunette", "Dark brown", "Medium brown", "Light brown", "Chestnut brown", "Light chestnut brown", "Auburn", "Copper", "Red", "Titian", "Strawberry blond", "Light blonde", "Dark blonde", "Medium blonde", "Grey", "White", "Red", "Blue", "Yellow", "Green" };

	static array<String^>^ races = gcnew array<String^>{ "Deva", "Human", "Dragonborn", "Drow", "Dwarf", "Eladrin", "Elf", "Gnome", "Half-elf", "Half-orc", "Halfling", "Tiefling", "Githzerai", "Goliath", "Minotaur", "Shardmind", "Shifter", "Wilden" };

	static void randomFirstName();
	static void randomLastName();
	static void randomHairColour();
	static void randomRace();
	static void randomHeight();
	static void randomAge();

public:
	//Character();
	//~Character();

	static void randomise();
	static void customRandomise(Boolean isFirstName, Boolean isLastName, Boolean isHairColour, Boolean isRace);

	static String^ getFirstName();
	void setFirstName(String^ firstName);

	static String^ getLastName();
	void setLastName(String^ lastName);

	static String^ getHairColour();
	void setHairColour(String^ hairColour);

	static String^ getRace();
	void setRace(String^ race);

	Int16^ getHeight();
	void setHeight(Int16^ height);

	static Int16^ getAge();
	void setAge(Int16^ age);
};
#endif