#include"Car.h"
#include"bicycle.h"
#include"vehicle.h"

int main()
{
	Ivehicle* IvehiCle[3];

	//�����t�F�[�Y
	for (int i = 0; i < 2; i++)
	{
		if (i < 1)
		{
			IvehiCle[i] = new bicycle;
		}
		else
			IvehiCle[i] = new Car;
	}


	//�ړ��t�F�[�Y
	for (int i = 0; i < 2; i++) 
	{
		IvehiCle[i]->move();
	}
	for (int i = 0; i < 2; i++)
	{
		IvehiCle[i]->moveSpeed();
	}


	for (int i = 0; i < 2; i++)
	{
		delete IvehiCle[i];
	}

	return 0;
}