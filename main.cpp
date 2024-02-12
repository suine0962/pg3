#include<stdio.h>

int  RecursiveSalary(int wage, int workingTime)
{
	if (workingTime <= 1) {
		return wage;
	}
	return wage + RecursiveSalary(wage * 2 - 50, workingTime - 1);
}

int main()
{
	const int workingTime = 8;
	const int hourlyWage = 1072;

	int NormalTotalWage = hourlyWage * workingTime;
	int RecursiveTotalWage = RecursiveSalary(100, workingTime);

	printf("%d時間働いたときの給料\n", workingTime);
	printf("一般的賃金体系の給料 : %d\n", NormalTotalWage);
	printf("再起的賃金体系の給料 : %d\n", RecursiveTotalWage);

	return  0;
}