#include "Enemy.h"

void (Enemy::* Enemy::EnemyAction[])() =
{
	&Enemy::CloseCombat,//近接攻撃
	&Enemy::Shooting,//射撃
	&Enemy::Retreat//離脱
};

void Enemy::CloseCombat()
{
	printf("敵の近接攻撃！！\n");
}

void Enemy::Shooting()
{
	printf("敵の射撃\n");
}

void Enemy::Retreat()
{
	printf("敵が離脱する！！\n");
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
