#pragma once

#include "Person.h"

//�f�B�[���[�N���X
class Dealer final : public Person
{
/*	Dealer();
public:
	Dealer(const char* const name);

	

protected:
	//�Q�[�����s
	void playBase(Shoe* shoe) ;
	*/

public:

	Dealer(const char* const name);
	Dealer();

	//�Q�[�����s
	void playBase(Shoe* shoe) override;

	

};