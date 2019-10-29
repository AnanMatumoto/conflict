#include "Enemy.h"

//--------------------------
//初期化
void Enemy::Init() {

	m_Name = "敵";

	printf("	【%s】　初期化処理\n\n", m_Name.c_str());
}

//--------------------------
//更新
void Enemy::Update() {

	printf("	【%s】　更新処理\n\n", m_Name.c_str());
}
