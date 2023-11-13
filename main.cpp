#include"Rectangle.h"
#include"Circle.h"
#include"IShape.h"

int main()
{
	IShape* iShape[3];
	//生成フェーズ
	for (int i = 0; i < 2; i++)
	{
		if (i < 1)
		{
			iShape[i] = new Circle;
		}
		else
			iShape[i] = new Rectangle;
	}


	for (int i = 0; i < 2; i++)
	{
		iShape[i]->Size();
	}
	for (int i = 0; i < 2; i++) 
	{
		iShape[i]->Draw();
	}


	for (int i = 0; i < 2; i++)
	{
		delete iShape[i];
	}

	return 0;
}