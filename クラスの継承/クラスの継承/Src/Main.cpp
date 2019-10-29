#include <stdio.h>
#include "Character/CharacterManager.h"

int main(void) {

	int timer = 1000;
	//初期化処理
	g_Manager.Initialize();
	
	while (timer>=0)
	{

		printf("==================================\n");
		g_Manager.Update();
		
		//終了に差し掛かった場合ブレイクで抜ける
		if (g_Manager.IsExit()) {
			break;
		}
		printf("==================================\n");
	}
	//解放
	g_Manager.Release();

	getchar();
	return 0;

}