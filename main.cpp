#include <stdio.h>


template<typename Type>

Type Min(Type a, Type b)
{
	if (a <= b)
	{
		return static_cast<Type>(a);
	}
	if (a >= b)
	{
		return static_cast<Type>(b);
	}
}

template<>

char Min<char>(char a, char b)
{
	 printf("数字以外は代入できません");
	 return 0;
}

int GenerallySalary(int hours)
{
	int RegularRate = 1072;
	return RegularRate * hours;
}

int RecursiveSalary(int hours)
{
	int InitialHourlyRate = 100;
	int TotalSalary = 0;

	for (int i = 0; i < hours; ++i)
	{
		TotalSalary += InitialHourlyRate;
		//次の時給を計算
		InitialHourlyRate = (TotalSalary * 2) - 50;
	}
	return TotalSalary;
}


int main()
{

	int hoursWorks;
	printf("働いた時間を入力してください: ");
	scanf_s("%d",&hoursWorks);

	int reguLarSalary = GenerallySalary(hoursWorks);
	int recursiveSalary = RecursiveSalary(hoursWorks);
	
	printf("通常の賃金体系での給料:%d円\n", reguLarSalary);
	printf("再帰的な賃金体系での給料:%d円\n", recursiveSalary);
	/*printf("%d\n",Min<int>(114, 514));
	printf("%f\n", Min<float>(11.4f, 51.4f));
	printf("%f\n", Min<double>(1.0f, 4.0f));
	Min<char>(1, 3);*/


	return 0;
}