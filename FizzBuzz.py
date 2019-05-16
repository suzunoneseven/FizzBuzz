#!/usr/bin/env python3


"""
Python
"""

__author__ = "Starry Bellsound"
__status__ = "production"
__version__ = "1.0.0"


class FizzBuzz:
    """
    FizzBuzzクラス
    """

    def makeOutput(self, now):
        """
        引数にある現在のループ回数を確認し、出力内容を作成する。
        :param now: 現在のループ回数
        :return: 出力内容
        """

        # 現在のループ回数を result に格納する
        result = now
        # ループ回数確認
        # 3の倍数のときはFizzを result に格納する
        if (now % 3) == 0:
            result = "Fizz"
        # 5の倍数のときはBuzzを result に格納する
        if (now % 5) == 0:
            result = "Buzz"
        # 3の倍数、かつ5の倍数のときはFizzBuzzを出力する result に格納する
        if (now % 15) == 0:
            result = "FizzBuzz"

        # result を返却する
        return result

    def run(self):
        """
        以下の処理を行う関数。
        ・1から15の数字を出力する。
        ・3の倍数のときは数値の代わりに「Fizz」を出力する。
        ・5の倍数のときは数値の代わりに「Buzz」を出力する。
        ・3の倍数、かつ5の倍数のときは数値の代わりに「FizzBuzz」を出力する。
        :return: void
        """

        # 1から15までループする
        for loop in range(1, 16):
            # 出力内容を作成する関数を呼び出す
            result = self.makeOutput(loop)
            # 作成した出力内容をコンソールに出力する。
            print(result)


def main():
    """
    メイン関数
    :return: void
    """
    # FizzBuzzクラスを作成する
    obj = FizzBuzz()
    # FizzBuzzのrunを実行する
    obj.run()


if __name__ == '__main__':
    # メイン関数を呼び出す
    main()
