#include"bicycle.h"
#include<stdio.h>

void bicycle::moveSpeed()
{
	int speed = 15;
	printf("自転車の速さ%d km\n",speed);
}

void bicycle::move()
{
	printf("自転車が移動中\n");
}