#include "door.h"

// конструктор класса
door::door()
{
}

// деструктор класса
door::~door()
{
}


bool door::door_open() {

	/* door opening animation */
	// function door_opening

	return door_state = true;
}


bool door::door_close() {

	/* door closing animation */
	// function door_closing

	return door_state = false;
}


bool door::door_activate(bool door_state) {

	// if door open
	if (door_state == true) {

		door_close();
	
	// if door_close
	} else {

		door_open();
	}
}