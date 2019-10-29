#pragma once

#include <stdio.h>
#include <string>

//=======================================================
//  キャラクターの基盤となるクラス（基底クラスと呼ばれる）
//=======================================================

class Character {

public://他のモジュールに公開されるフィールド

	//コンストラクタ
	Character()
	{
	}

	//デストラクタ（仮想化されているのはなぜでしょうか？）
	virtual ~Character()
	{
	}

	//純仮想関数
	virtual void Init() = 0;

	virtual void Update() = 0;

	//仮想関数
	virtual int GetHp() {
		 return m_CharacterHp;
	}
	//仮想関数
	//攻撃力取得関数（ゲッターと呼ばれる関数）
	virtual int GetAttackPoint() {
		 return m_CharacterAttackPoint;
	}

	//攻撃力セット関数（上と対でセッターと呼ばれる）
	virtual void  SetAttackPoint(int atk) {}

	/*
		↑　Point　↑

		純仮想と仮想の違いを理解しておくと
		使い分けが出来るンゴ
	*/


	//通常関数
	std::string GetName(){
		return m_Name;
	}

public:
	std::string m_Name;//キャラクターの名前(ｍ＿はプレフィックスと呼ばれるタグのこと)


private:
	//これ以降の変数は派生先では使えない変数
	int m_CharacterHp;
	int m_CharacterAttackPoint;
};