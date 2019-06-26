#pragma once

class door
{
public:
	door();
	~door();

	bool door_state;

	bool door_activate(bool door_state);

private:
	bool door_open();
	bool door_close();
protected:


};