#include "Enemy.h"

void (Enemy::* Enemy::EnemyAction[])() =
{
	&Enemy::CloseCombat,//�ߐڍU��
	&Enemy::Shooting,//�ˌ�
	&Enemy::Retreat//���E
};

void Enemy::CloseCombat()
{
	printf("�G�̋ߐڍU���I�I\n");
}

void Enemy::Shooting()
{
	printf("�G�̎ˌ�\n");
}

void Enemy::Retreat()
{
	printf("�G�����E����I�I\n");
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
