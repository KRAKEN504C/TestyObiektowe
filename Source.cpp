#include <iostream>
#include <string>
#include "test.hpp"
#include "biblioteki.h"
#include "load_enemies.h"

using namespace std;

const float FPS = 60;

const int SCREEN_W = 640;
const int SCREEN_H = 480;
const int CURSOR_SIZE = 16;


class MyClass
{
public:
	int pole;

	string test;

	int Metoda();

private:

};


int MyClass::Metoda()
{
	return pole * pole;
}


int main()
{
	al_init();
	al_init_font_addon();
	al_init_ttf_addon();
	al_init_primitives_addon();
	al_install_mouse();
	al_install_keyboard();
	al_init_image_addon();


	ALLEGRO_DISPLAY* displayEn = al_create_display(SCREEN_W, SCREEN_H);
	ALLEGRO_EVENT_QUEUE *event_queue = NULL;
	ALLEGRO_TIMER *timerEn = NULL;
	ALLEGRO_COLOR White = al_map_rgb(255, 255, 255);

	timerEn = al_create_timer(1.0 / FPS);


	MyClass obiekt;

	obiekt.pole = 2;
	obiekt.Metoda();

	MyClass *wsk = new MyClass;

	wsk->pole = 8;
	wsk->Metoda();

	cout << "Pole Kwadratu wynosi : " << obiekt.Metoda();


	//al_draw_bitmap(enemy_1.bitmapa, 120, 120, 0);



	system("pause");

	return 0;
}