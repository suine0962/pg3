#pragma once
class vehicle
{
public:
	vehicle();
		virtual ~vehicle();

		virtual void move();

	protected:
		const char *name;
};

