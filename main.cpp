﻿#include "PGMath.h"
#include <iostream>

using namespace std;

int main(void)
{


	DataType<int, int, int> int_0(3, 7);
	DataType<int, float, float> int_1(9, 3.0f);
	DataType<int, double, double> int_2(12, 24.0);
	DataType<float, float, float> float_0(8.0f, 14.0f);
	DataType<float, double, double> float_1(10.0f, 23.0f);
	DataType<double, double, double> double_0(3.0, 11.0);


	cout << int_0.Min() << endl;
	cout << int_1.Min() << endl;
	cout << int_2.Min() << endl;
	cout << float_0.Min() << endl;
	cout << float_1.Min() << endl;
	cout << double_0.Min() << endl;

	return 0;
}