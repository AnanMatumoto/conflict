#include "Player.h"
#include "CharacterManager.h"
#include "CharacterID.h"
#include <string.h>


//------------------------
//初期化
void Player::Init() {

	m_Name = "Player";
	m_Hp = 1000;
	printf("	【%s】 初期化処理\n\n", m_Name.c_str());
}

//-------------------------
//更新
void Player::Update() {
	
	//参照用の変数enemy_1を作る
	Character* enemy_1 = g_Manager.GetCharacter(ENEMY_01);
	Character* enemy_2 = g_Manager.GetCharacter(ENEMY_02);

	int total_attack = enemy_1->GetAttackPoint() + enemy_2->GetAttackPoint();
	m_Hp -= total_attack;

	printf("	【%s】 更新処理\n", m_Name.c_str());	
	printf("	　HP　・・・　%d％\n\n", m_Hp);
}
