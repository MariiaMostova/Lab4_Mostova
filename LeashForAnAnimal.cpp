#include "pch.h"
#include <iostream>
#include <string>
using namespace std;
#include "LeashForAnAnimal.h"

string LeashForAnAnimal::getManufactorer()
{
	return manufactorer;
}
int LeashForAnAnimal::getMaxLenght()
{
	return maxLenght;
}
int LeashForAnAnimal::getmaxMasa()
{
	return maxMasa;
}
string LeashForAnAnimal::getColor()
{
	return color;
}
string LeashForAnAnimal:: getPetName()
{
	return petName;
}
string LeashForAnAnimal::getMatterial()
{
	return matterial;
}

LeashForAnAnimal::LeashForAnAnimal(string manufactorer, int maxLenght, int maxMasa, string color, double diametr, string pet, string petName, string matterial)
{
	manufactorer = manufactorer;
	maxLenght= maxLenght;
	maxMasa= maxMasa;
	color = color;
	diametr= diametr;
	pet=pet;
	petName= petName;
	matterial= matterial;
}
LeashForAnAnimal::~LeashForAnAnimal()
{
	cout << "All for your pet!" << endl;
}