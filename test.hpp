#pragma once
#include "biblioteki.h"

using namespace std;

class ladowanie_bitmap
{
public:
	int index;
	string name;

	const char *namechar = name.c_str();
	int inic_bitmapy();
	ALLEGRO_BITMAP *bitmapa = al_load_bitmap(namechar);

	int size;


private:

};

int ladowanie_bitmap::inic_bitmapy()
{
	ALLEGRO_BITMAP *Bitmapa = NULL;

	string sciezka = name;

	const char *sciezkachar = sciezka.c_str();

	Bitmapa = al_load_bitmap(sciezkachar);
	if (!Bitmapa)
	{
		cout << "failed to create bitmap!\n";
		return -1;
	}
	return 0;
}