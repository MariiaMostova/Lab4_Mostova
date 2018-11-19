#pragma once
#include "pch.h"
#include <iostream>
#include <string>

class Leash_for_an_animal
{
private:
	string manufactorer;
	int max_length;
	int max_masa;
	string color;
public:
	string getManufactorer();
	int getMax_length();
	int getMax_masa();
	string getColor();
	string getPetName();
	string getMatterial();
	double diametr;
	string pet;
	Leash_for_an_animal() {
		manufactorer = "Mary";
		max_length=4;
		max_masa = 15; 
		color="red";
		diametr = 15.2;
		pet="dog";
		petName = "Jony";
		matterial = "leather";
	};
	Leash_for_an_animal(string manufactorer, int max_length, int max_masa, string color, double diametr, string petName, string pet, string matterial);
	~Leash_for_an_animal();
protected:
	string petName;
	string matterial;
};