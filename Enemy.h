#pragma once
#include<stdio.h>
class Enemy
{
public:
	//���상���o�֐�
	void CloseCombat();
	void Shooting();
	void Retreat();
	void Uodata();
private:
	static void (Enemy::* EnemyAction[])();

};