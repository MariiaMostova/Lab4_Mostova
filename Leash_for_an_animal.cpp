#include "pch.h"
#include <iostream>
#include <string>
using namespace std;
#include "Leash_for_an_animal.h"

string Leash_for_an_animal::getManufactorer()
{
	return manufactorer;
}
int Leash_for_an_animal::getMax_length()
{
	return max_length;
}
int Leash_for_an_animal::getMax_masa()
{
	return max_masa;
}
string Leash_for_an_animal::getColor()
{
	return color;
}
string Leash_for_an_animal:: getPetName()
{
	return petName;
}
string Leash_for_an_animal::getMatterial()
{
	return matterial;
}

Leash_for_an_animal::Leash_for_an_animal(string man, int ml, int mm, string col, double d, string p, string pn, string mat)
{
	manufactorer = man;
	max_length=ml;
	max_masa=mm; 
	color = col;
	diametr=d;
	pet=p;
	petName=pn;
	matterial=mat;
}
Leash_for_an_animal::~Leash_for_an_animal()
{
	cout << "All for your pet!" << endl;
}