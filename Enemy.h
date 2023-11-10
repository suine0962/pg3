#pragma once
#include<stdio.h>
class Enemy
{
public:
	//©ìƒƒ“ƒoŠÖ”
	void CloseCombat();
	void Shooting();
	void Retreat();
	void Uodata();
private:
	static void (Enemy::* EnemyAction[])();

};