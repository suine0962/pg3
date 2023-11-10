#include "Enemy.h"

void (Enemy::* Enemy::EnemyAction[])() =
{
	&Enemy::CloseCombat,//‹ßÚUŒ‚
	&Enemy::Shooting,//ŽËŒ‚
	&Enemy::Retreat//—£’E
};

void Enemy::CloseCombat()
{
	printf("“G‚Ì‹ßÚUŒ‚II\n");
}

void Enemy::Shooting()
{
	printf("“G‚ÌŽËŒ‚\n");
}

void Enemy::Retreat()
{
	printf("“G‚ª—£’E‚·‚éII\n");
}

void Enemy::Uodata()
{
	CloseCombat();
	this->EnemyAction[0];
	Shooting();
	this->EnemyAction[1];
	Retreat();
	this->EnemyAction[2];
}
