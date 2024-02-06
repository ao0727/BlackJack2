#pragma once

#include "common.h"

class Shoe;

class Person
{
private:
	int _hand[HAND_SIZE];	// ���_�ケ�ꂭ�炢���Ă�OK...�ɍ���͂����Ⴄ
	bool _calcUpdate;
	int _cardNum = 0;
	int _score = 0;
	char* _pName = NULL;
public:
	Person() = default;
	// �R���X�g���N�^
	Person(const char* const name);
	virtual ~Person();

	//�X�R�A�̎擾(hit���ꂽ���̂ݍČv�Z�����)
	int getScore();

	//�J�[�h�̒ǉ�
	void hit(Shoe shoe);

	//��D��\��
	void showHand();

	//=�̃I�[�o�[���[�h
	void operator=(const Person& p);

	//�^�[������
	bool play(Shoe* const shoe);

	// ���O���擾
	char* getName() const {return _pName;};

protected:
	virtual void playBase(Shoe* const shoe) = 0;

};

