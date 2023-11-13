#include"Car.h"
#include"bicycle.h"
#include"vehicle.h"

int main()
{
	vehicle* vehiCle[3];

	//生成フェーズ
	for (int i = 0; i < 2; i++)
	{
		if (i < 1)
		{
			vehiCle[i] = new bicycle;
		}
		else
			vehiCle[i] = new Car;
	}


	//移動フェーズ
	for (int i = 0; i < 2; i++)
	{
		vehiCle[i]->Activate();
	}
	for (int i = 0; i < 2; i++) 
	{
		vehiCle[i]->move();
	}

	for (int i = 0; i < 2; i++)
	{
		delete vehiCle[i];
	}

	return 0;
}