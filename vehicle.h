#pragma once
class Ivehicle
{
public:

	virtual void move() = 0;
	virtual void moveSpeed() = 0;
	
	protected:
		const char *name;
};

