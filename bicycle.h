#pragma once
#include"vehicle.h"
class bicycle :public vehicle
{
public:
	bicycle();

	~bicycle();
	
	void move()override;
private:
};