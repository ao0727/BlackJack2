#pragma once

#include "Person.h"

//プレイヤークラス
class Player final : public Person
{
	Player();
protected:
	//ゲーム実行
	void playBase(Shoe* shoe);
public:
	Player(const char* const name);
	
	

};
