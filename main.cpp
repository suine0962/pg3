#include <stdio.h>


template<typename Type>

Type Min(Type a, Type b)
{
	if (a <= b)
	{
		return a;
	}
	if (a >= b)
	{
		return b;
	}
}

template<>
char Min<char>(char a, char b)
{
	return printf("�����ȊO�͑���ł��܂���");
}

int main()
{
	printf("%d\n", Min<int>(114, 514));
	printf("%f\n", Min<float>(11.4f, 51.4f));
	printf("%f\n", Min<double>(1.0f, 4.0f));
	printf("%c\n", Min<char>(1,3));


	return 0;
}