#include "pch.h"
#include <iostream>
using namespace std;
#include "LeashForAnAnimal.h"
#include "LeashForAnAnimal.cpp"

int main()
{
	LeashForAnAnimal StandartLeash;
	cout << "Manufactorer:" << endl << StandartLeash.getManufactorer() << endl;
	cout << "Max legth:" << endl << StandartLeash.getMaxLenght() << " metres" << endl;
	cout << "Max masa:" << endl << StandartLeash.getMaxMasa() << " kilograms"<< endl;
	cout << "Color:" << endl << StandartLeash.getColor() << endl;
	cout << "Diametr:" << endl << StandartLeash.diametr << endl;
	cout << "Pet:" << endl << StandartLeash.pet << endl;
	cout << "PetName:" << endl << StandartLeash.getPetName() << endl;
	cout << "Matterial:" << endl << StandartLeash.getMatterial() << endl;
	cout << endl;

	LeashForAnAnimal KittyLeash("PetLove", 2, 10, "yellow", 8.5, "cat", "Kitty", "eco-leather");
	cout << "Manufactorer:" << endl << KittyLeash.getManufactorer() << endl;
	cout << "Max legth:" << endl << KittyLeash.getMaxLenght() << " metres"<< endl;
	cout << "Max masa:" << endl << KittyLeash.getMaxMasa() << " kilograms" << endl;
	cout << "Color:" << endl << KittyLeash.getColor() << endl;
	cout << "Diametr:" << endl << KittyLeash.diametr << endl;
	cout << "Pet:" << endl << KittyLeash.pet << endl;
	cout << "PetName:" << endl << KittyLeash.getPetName() << endl;
	cout << "Matterial:" << endl << KittyLeash.getMatterial() << endl;
	cout << endl;

	LeashForAnAnimal TomyLeash("Best", 3, 25, "blue", 16.2, "dog", "Tomy", "chamois");
	cout << "Manufactorer:" << endl << TomyLeash.getManufactorer()<< endl;
	cout << "Max legth:" << endl << TomyLeash.getMaxLenght() << " metres" << endl;
	cout << "Max masa:" << endl << TomyLeash.getMaxMasa()<< " kilograms" << endl;
	cout << "Color:" << endl << TomyLeash.getColor() << endl;
	cout << "Diametr:" << endl << TomyLeash.diametr << endl;
	cout << "Pet:" << endl << TomyLeash.pet << endl;
	cout << "PetName:" << endl << TomyLeash.getPetName() << endl;
	cout << "Matterial:" << endl << TomyLeash.getMatterial() << endl;
	cout << endl;
}