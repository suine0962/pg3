#pragma once
#include<stdio.h>
class Enemy
{
public:
	//自作メンバ関数
	void CloseCombat();
	void Shooting();
	void Retreat();
	void Uodata();
private:
	static void (Enemy::* EnemyAction[])();

};