#include <iostream>
#include <d3d11.h>
#include "Skreen.h"

// конструктор класса
Screen::Screen(){}

// деструктор класса
Screen::~Screen(){}


int Screen::screen_get(int screen_heigt, int screen_width)
{

	return buffer_size = screen_heigt * screen_width * chastota_obnovlenia;
}