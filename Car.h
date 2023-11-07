#pragma once
#include"vehicle.h"

class Car : public Ivehicle
{
public:
	
	void move() override;
	void moveSpeed()override;

private:
};