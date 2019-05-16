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
	 * @detail 引数にある現在のループ回数を確認し、出力内容を作成する関数。
	 */
	string makeOutput(int now);
	/**
	 * @detail 以下の処理を行う関数。
	 * ・1から15の数字を出力する。
	 * ・3の倍数のときは数値の代わりに「Fizz」を出力する。
	 * ・5の倍数のときは数値の代わりに「Buzz」を出力する。
	 * ・3の倍数、かつ5の倍数のときは数値の代わりに「FizzBuzz」を出力する。
	 */
	void run();
};

/**
 * @brief 出力内容作成
 * @detail 引数にある現在のループ回数を確認し、出力内容を作成する。
 * @param now 現在のループ回数
 * @return  出力内容
 */
string FizzBuzz::makeOutput(const int now) {
	// 返却用文字列初期化
	string result = "";
	// 現在のループ回数を result に格納する
	result = to_string(now);

	// ループ回数確認
	// 3の倍数のときはFizzを result に格納する
	if (now % 3 == 0) {
		result = "Fizz";
	}
	// 5の倍数のときはBuzzを result に格納する
	if (now % 5 == 0) {
		result = "Buzz";
	}
	// 3の倍数、かつ5の倍数のときはFizzBuzzを出力する result に格納する
	if (now % 15 == 0) {
		result = "FizzBuzz";
	}

	// 出力内容を返却
	return result;
}
/**
 * @detail 以下の処理を行う関数。
 * ・1から15の数字を出力する。
 * ・3の倍数のときは数値の代わりに「Fizz」を出力する。
 * ・5の倍数のときは数値の代わりに「Buzz」を出力する。
 * ・3の倍数、かつ5の倍数のときは数値の代わりに「FizzBuzz」を出力する。
 */
void FizzBuzz::run() {
	// 1から15までループする
	for (loop = 1; loop <= 15; loop++) {
		// 出力内容を作成する関数を呼び出す
		string result = makeOutput(loop);
		// 作成した出力内容をコンソールに出力する。
		cout << result.c_str() << endl;
	}
}

/**
 * @brief メイン関数
 */
int maina() {
	// FizzBuzzクラスを作成
	FizzBuzz obj;
	// FizzBuzzのrunを実行
	obj.run();

	// コンソールを閉じないようにする
	char buf[16];
	fgets(buf, 16, stdin);

	return 0;
}