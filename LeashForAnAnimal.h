#pragma once
#include "pch.h"
#include <string>

class LeashForAnAnimal
{
private:
	string manufactorer;
	int maxLenght;
	int maxMasa;
	string color;
public:
	string getManufactorer();
	int getMaxLenght();
	int getMaxMasa();
	string getColor();
	string getPetName();
	string getMatterial();
	double diametr;
	string pet;
	LeashForAnAnimal() {
		manufactorer = "Mary";
		maxLenght=4;
		maxMasa = 15; 
		color="red";
		diametr = 15.2;
		pet="dog";
		petName = "Jony";
		matterial = "leather";
	};
	LeashForAnAnimal(string manufactorer, int maxLenght, int maxMasa, string color, double diametr, string petName, string pet, string matterial);
	~LeashForAnAnimal();
protected:
	string petName;
	string matterial;
};