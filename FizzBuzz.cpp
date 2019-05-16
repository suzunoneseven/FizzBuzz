/**
 * @file FizzBuzz.cpp
 * @auther Starry Bellsound
 */

#include <iostream>
#include <string>

using namespace std;

class FizzBuzz {
private:
	int loop;

public:
	/**
	 * @detail �����ɂ��錻�݂̃��[�v�񐔂��m�F���A�o�͓��e���쐬����֐��B
	 */
	string makeOutput(int now);
	/**
	 * @detail �ȉ��̏������s���֐��B
	 * �E1����15�̐������o�͂���B
	 * �E3�̔{���̂Ƃ��͐��l�̑���ɁuFizz�v���o�͂���B
	 * �E5�̔{���̂Ƃ��͐��l�̑���ɁuBuzz�v���o�͂���B
	 * �E3�̔{���A����5�̔{���̂Ƃ��͐��l�̑���ɁuFizzBuzz�v���o�͂���B
	 */
	void run();
};

/**
 * @brief �o�͓��e�쐬
 * @detail �����ɂ��錻�݂̃��[�v�񐔂��m�F���A�o�͓��e���쐬����B
 * @param now ���݂̃��[�v��
 * @return  �o�͓��e
 */
string FizzBuzz::makeOutput(const int now) {
	// �ԋp�p�����񏉊���
	string result = "";
	// ���݂̃��[�v�񐔂� result �Ɋi�[����
	result = to_string(now);

	// ���[�v�񐔊m�F
	// 3�̔{���̂Ƃ���Fizz�� result �Ɋi�[����
	if (now % 3 == 0) {
		result = "Fizz";
	}
	// 5�̔{���̂Ƃ���Buzz�� result �Ɋi�[����
	if (now % 5 == 0) {
		result = "Buzz";
	}
	// 3�̔{���A����5�̔{���̂Ƃ���FizzBuzz���o�͂��� result �Ɋi�[����
	if (now % 15 == 0) {
		result = "FizzBuzz";
	}

	// �o�͓��e��ԋp
	return result;
}
/**
 * @detail �ȉ��̏������s���֐��B
 * �E1����15�̐������o�͂���B
 * �E3�̔{���̂Ƃ��͐��l�̑���ɁuFizz�v���o�͂���B
 * �E5�̔{���̂Ƃ��͐��l�̑���ɁuBuzz�v���o�͂���B
 * �E3�̔{���A����5�̔{���̂Ƃ��͐��l�̑���ɁuFizzBuzz�v���o�͂���B
 */
void FizzBuzz::run() {
	// 1����15�܂Ń��[�v����
	for (loop = 1; loop <= 15; loop++) {
		// �o�͓��e���쐬����֐����Ăяo��
		string result = makeOutput(loop);
		// �쐬�����o�͓��e���R���\�[���ɏo�͂���B
		cout << result.c_str() << endl;
	}
}

/**
 * @brief ���C���֐�
 */
int maina() {
	// FizzBuzz�N���X���쐬
	FizzBuzz obj;
	// FizzBuzz��run�����s
	obj.run();

	// �R���\�[������Ȃ��悤�ɂ���
	char buf[16];
	fgets(buf, 16, stdin);

	return 0;
}