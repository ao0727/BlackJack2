#pragma once

#include "Person.h"

//ディーラークラス
class Dealer final : public Person
{
/*	Dealer();
public:
	Dealer(const char* const name);

	

protected:
	//ゲーム実行
	void playBase(Shoe* shoe) ;
	*/

public:

	Dealer(const char* const name);
	Dealer();

	//ゲーム実行
	void playBase(Shoe* shoe) override;

	

};