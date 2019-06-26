#pragma once

class Screen {
public:
	/* переменные и функции которые доступны за пределами класса */

	int screen_heigt;
	int screen_width;
	int chastota_obnovlenia;
	Screen();
	~Screen();

private:
	/* переменные и функции которые доступны только внутри класса */
	int buffer_size;

protected:
	/* переменные и функции которые доступны при наследовании */

	int screen_get(int screen_heigt, int screen_width);

};