#pragma once
#include"vehicle.h"
class bicycle :public Ivehicle
{
public:
	void move()override;
	void moveSpeed()override;
private:
};