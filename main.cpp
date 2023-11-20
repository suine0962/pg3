#include<stdio.h>
#include<Windows.h>
int GenerallySalary(int hours)
{
	int RegularRate = 1072;
	return RegularRate * hours;
}

int RecursiveSalary(int hours,int time)
{
	if (hours == 0)
	{
		return 0;
	}
	else
	{
		float currenWage = time * 1;
		float nextHourlyRate = time * 2 - 50;

		return currenWage + RecursiveSalary(hours -1 ,nextHourlyRate);
	}

	
}


int main()
{

	int hoursWorks = 9;

	//一般的な賃金体系
	int reguLarSalary = GenerallySalary(hoursWorks);
	printf("一般的な賃金体系での給与:%d円\n",reguLarSalary);


	//再帰的な賃金体系
	int initilalHourlyRate = 100;
	int recursiveWage = RecursiveSalary(hoursWorks - 1, initilalHourlyRate);
	printf("再帰的な賃金体系での給料:%d円\n", recursiveWage);


	return 0;
}