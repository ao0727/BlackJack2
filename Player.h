#pragma once

#include "Person.h"

//�v���C���[�N���X
class Player final : public Person
{
	Player();
protected:
	//�Q�[�����s
	void playBase(Shoe* shoe);
public:
	Player(const char* const name);
	
	

};
