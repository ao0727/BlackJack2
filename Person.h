#pragma once

#include "common.h"

class Shoe;

class Person
{
private:
	int _hand[HAND_SIZE];	// 理論上これくらい持てばOK...に今回はしちゃう
	bool _calcUpdate;
	int _cardNum = 0;
	int _score = 0;
	char* _pName = NULL;
public:
	Person() = default;
	// コンストラクタ
	Person(const char* const name);
	virtual ~Person();

	//スコアの取得(hitされた時のみ再計算される)
	int getScore();

	//カードの追加
	void hit(Shoe shoe);

	//手札を表示
	void showHand();

	//=のオーバーロード
	void operator=(const Person& p);

	//ターン処理
	bool play(Shoe* const shoe);

	// 名前を取得
	char* getName() const {return _pName;};

protected:
	virtual void playBase(Shoe* const shoe) = 0;

};

