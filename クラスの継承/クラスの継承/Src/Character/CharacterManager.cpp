#include "CharacterManager.h"
#include "Player.h"
#include "Enemy.h"
#include "CharacterID.h"

//定義のみ
CharacterManager g_Manager;

//----------------------------------
//初期化
void CharacterManager::Initialize() {

	//キャラクターの生成
	/*
	注意！
		この時、
		配列に入っているのはプレイヤーと敵のアドレスだが、
		親の型（Character）として認識されている
		
		★アップキャストと呼ばれる★
	*/
	m_Charas[PLAYER_01] = new Player;
	m_Charas[ENEMY_01]  = new Enemy;
	m_Charas[ENEMY_02]  = new Enemy;

	//キャラクターたちの初期化処理
	for (int i = 0; i < UNKNOWN; ++i) {
		m_Charas[i]->Init();
	}

	//敵の攻撃力をセットする
	m_Charas[ENEMY_01]->SetAttackPoint(10);
	m_Charas[ENEMY_02]->SetAttackPoint(5);
}

//-----------------------------------
//更新
void CharacterManager::Update() {

	//キャラクターたちの更新処理
	for (int i = 0; i < UNKNOWN; ++i) {
		m_Charas[i]->Update();
	}
}

//------------------------------------
//死亡後の処理
bool CharacterManager::IsExit() {

	//プレイヤーのHPが０以下になったらtureを返す
	return (m_Charas[PLAYER_01]->GetHp() <= 0);
}

//------------------------------------
//解放処理
void CharacterManager::Release() {

	for (int i = 0; i < UNKNOWN; ++i) {
		delete m_Charas[i];
		m_Charas[i] = nullptr;
	}
}