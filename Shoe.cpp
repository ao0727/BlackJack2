#include "Shoe.h"
#include <iostream>
#include <random> //乱数生成

using namespace std;



Shoe::~Shoe() {
	
	
}


//シャッフル（フィッシャーイェーツ）
void Shoe::_shuffle()
{
	for (int i = _cardNum; i > 1; --i) {
		int a = i - 1;
		int b = rand() % i;
		swap(_cardShoe[a], _cardShoe[b]);
	}
}




//コンストラクタ

Shoe::Shoe() {
	int index = 0;
	// カードの数字を1から13までループ
	for (int num = 1; num <= 13; ++num) {
		// カードのマークを4回繰り返す
		for (int suit = 0; suit < 4; ++suit) {
			_cardShoe[index] = num + suit * 13; // カードを生成 (マークごとに13ずつずらす)
			++index;
			
			
		}
	}
	
	
	_cardNum = CARD_NUM; //カード枚数の設定
	// シャッフル
	_shuffle();
}



//カードシューを表示(デバッグ用)
void Shoe::showShoe(SHOW_TYPE type) const 
{
	int roopCnt = NUM;
	if (type == CARD_ONLY) {	//カード枚数分表示
		//カードのみ表示にする。
		roopCnt = _cardNum;
	}

	for (int i = 0; i < roopCnt; i++) {
		cout << _cardShoe[i] << ' ';
	}
	cout << endl;
}

int Shoe::takeCard() {
	_cardNum--; // カード枚数を減らす

	// カード枚数が0以下だった場合、エラーとして出力
	if (_cardNum <= 0) {
		cout << "シューにカードがありません。" << endl;
		return -1;
	}

	int card = _cardShoe[_cardNum - 1]; // 最後のカードを取得
	

	return card;
}

