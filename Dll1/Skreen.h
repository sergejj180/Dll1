#pragma once

class Screen {
public:
	/* ���������� � ������� ������� �������� �� ��������� ������ */

	int screen_heigt;
	int screen_width;
	int chastota_obnovlenia;
	Screen();
	~Screen();

private:
	/* ���������� � ������� ������� �������� ������ ������ ������ */
	int buffer_size;

protected:
	/* ���������� � ������� ������� �������� ��� ������������ */

	int screen_get(int screen_heigt, int screen_width);

};