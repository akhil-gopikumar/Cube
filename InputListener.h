#pragma once
#include "Point.h"

class InputListener
{
public:
	InputListener()
	{
	}
	~InputListener()
	{
	}
	
	//KEYBOARD pure virtual callback function
	virtual void onKeyDown(int key) = 0;
	virtual void onKeyUp(int key) = 0;

	//MOUSE pure virtual callback function
	virtual void onMOuseMove(const Point& delta_mouse_pos)
};



