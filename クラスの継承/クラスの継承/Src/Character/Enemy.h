#pragma once
#include "Character.h"

//=========================================
// キャラクタークラスを継承した敵クラス
//=========================================

class Enemy : public Character{

public:

	~Enemy()override
	{
	}

	//親クラスから約束されている関数
	void Init()override;

	//上に同じ
	void Update()override;


	int GetAttackPoint()override {
		return m_AttackPoint;
	}

	void SetAttackPoint(int atk)override {
		m_AttackPoint = atk;
	}

private:
	int m_AttackPoint;

};