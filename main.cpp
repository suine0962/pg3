#include <stdio.h>
#include <thread>

void ParallelProcess(int num)
{
	printf("thread1\n");
}

void ParallelProcess2(int num)
{
	printf("thread2\n");
}

void ParallelProcess3(int num)
{
	printf("thread3\n");
}

int main()
{
	int num;

	std::thread th1(ParallelProcess, num);
	th1.join();

	std::thread th2(ParallelProcess2, num);
	th2.join();

	std::thread th3(ParallelProcess3, num);
	th3.join();
	
	
	

	return 0;
}