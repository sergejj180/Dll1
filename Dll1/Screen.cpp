#include <iostream>
#include <d3d11.h>
#include "Skreen.h"

// ����������� ������
Screen::Screen(){}

// ���������� ������
Screen::~Screen(){}


int Screen::screen_get(int screen_heigt, int screen_width)
{

	return buffer_size = screen_heigt * screen_width * chastota_obnovlenia;
}