#include "Shoe.h"
#include <iostream>
#include <random> //��������

using namespace std;



Shoe::~Shoe() {
	
	
}


//�V���b�t���i�t�B�b�V���[�C�F�[�c�j
void Shoe::_shuffle()
{
	for (int i = _cardNum; i > 1; --i) {
		int a = i - 1;
		int b = rand() % i;
		swap(_cardShoe[a], _cardShoe[b]);
	}
}




//�R���X�g���N�^

Shoe::Shoe() {
	int index = 0;
	// �J�[�h�̐�����1����13�܂Ń��[�v
	for (int num = 1; num <= 13; ++num) {
		// �J�[�h�̃}�[�N��4��J��Ԃ�
		for (int suit = 0; suit < 4; ++suit) {
			_cardShoe[index] = num + suit * 13; // �J�[�h�𐶐� (�}�[�N���Ƃ�13�����炷)
			++index;
			
			
		}
	}
	
	
	_cardNum = CARD_NUM; //�J�[�h�����̐ݒ�
	// �V���b�t��
	_shuffle();
}



//�J�[�h�V���[��\��(�f�o�b�O�p)
void Shoe::showShoe(SHOW_TYPE type) const 
{
	int roopCnt = NUM;
	if (type == CARD_ONLY) {	//�J�[�h�������\��
		//�J�[�h�̂ݕ\���ɂ���B
		roopCnt = _cardNum;
	}

	for (int i = 0; i < roopCnt; i++) {
		cout << _cardShoe[i] << ' ';
	}
	cout << endl;
}

int Shoe::takeCard() {
	_cardNum--; // �J�[�h���������炷

	// �J�[�h������0�ȉ��������ꍇ�A�G���[�Ƃ��ďo��
	if (_cardNum <= 0) {
		cout << "�V���[�ɃJ�[�h������܂���B" << endl;
		return -1;
	}

	int card = _cardShoe[_cardNum - 1]; // �Ō�̃J�[�h���擾
	

	return card;
}

