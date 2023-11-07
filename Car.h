#pragma once
#include"vehicle.h"

class Car : public vehicle
{
public:
	Car();
	~Car();
	void move() override;

private:
};