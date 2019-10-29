#pragma once
#include "Character.h"


//=================================
// キャラクターマネージャークラス
//=================================

/*
	キャラクタークラスから
	派生したクラスたちを管理する
*/
class CharacterManager {

public:
	//初期化処理
	void Initialize();

	//更新処理
	void Update();

	bool IsExit();

	void Release();

	//ゲッター
	Character* GetCharacter(int id){
		return m_Charas[id];
	}


private:
	Character* m_Charas[3];//キャラクターの配列
};

extern  CharacterManager g_Manager;