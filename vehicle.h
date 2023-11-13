#pragma once
class vehicle
{
public:
	virtual void Activate();
		virtual void move();
		
	protected:
		const char *name;
};

