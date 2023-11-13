#pragma once
#include"vehicle.h"

class Car : public vehicle
{
public:
	void Activate()override;
	void move() override;

private:
};