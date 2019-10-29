#pragma once

#include "Character.h"

class Enemy;//前方宣言

//=============================================
//  キャラクタークラスを継承したプレイヤークラス
//=============================================
class Player : public Character {


public:

	//デストラクタ
	~Player()override {
	}

	//キャラクタークラスから約束されている関数
	void Init() override;//←オーバーライドキーワード（これでコンパイルが純仮想と判断する）

	//上に同じ
	void Update() override;

	int GetHp()override {
		return m_Hp;
	}


private:
	int m_Hp;

};