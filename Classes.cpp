// Classes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;
#include "Leash_for_an_animal.h"
#include "Leash_for_an_animal.cpp"

int main()
{
	Leash_for_an_animal StandartLeash;
	cout << "Manufactorer:" << endl << StandartLeash.getManufactorer() << endl;
	cout << "Max legth:" << endl << StandartLeash.getMax_length() << " metres" << endl;
	cout << "Max masa:" << endl << StandartLeash.getMax_masa() << " kilograms"<< endl;
	cout << "Color:" << endl << StandartLeash.getColor() << endl;
	cout << "Diametr:" << endl << StandartLeash.diametr << endl;
	cout << "Pet:" << endl << StandartLeash.pet << endl;
	cout << "PetName:" << endl << StandartLeash.getPetName() << endl;
	cout << "Matterial:" << endl << StandartLeash.getMatterial() << endl;
	cout << endl;
	Leash_for_an_animal KittyLeash("PetLove", 2, 10, "yellow", 8.5, "cat", "Kitty", "eco-leather");
	cout << "Manufactorer:" << endl << KittyLeash.getManufactorer() << endl;
	cout << "Max legth:" << endl << KittyLeash.getMax_length() << " metres"<< endl;
	cout << "Max masa:" << endl << KittyLeash.getMax_masa() << " kilograms" << endl;
	cout << "Color:" << endl << KittyLeash.getColor() << endl;
	cout << "Diametr:" << endl << KittyLeash.diametr << endl;
	cout << "Pet:" << endl << KittyLeash.pet << endl;
	cout << "PetName:" << endl << KittyLeash.getPetName() << endl;
	cout << "Matterial:" << endl << KittyLeash.getMatterial() << endl;
	cout << endl;
	Leash_for_an_animal TomyLeash("Best", 3, 25, "blue", 16.2, "dog", "Tomy", "chamois");
	cout << "Manufactorer:" << endl << TomyLeash.getManufactorer()<< endl;
	cout << "Max legth:" << endl << TomyLeash.getMax_length() << " metres" << endl;
	cout << "Max masa:" << endl << TomyLeash.getMax_masa()<< " kilograms" << endl;
	cout << "Color:" << endl << TomyLeash.getColor() << endl;
	cout << "Diametr:" << endl << TomyLeash.diametr << endl;
	cout << "Pet:" << endl << TomyLeash.pet << endl;
	cout << "PetName:" << endl << TomyLeash.getPetName() << endl;
	cout << "Matterial:" << endl << TomyLeash.getMatterial() << endl;
	cout << endl;
}
	
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
