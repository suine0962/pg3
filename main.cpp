#include<iostream>
#include<functional>
#include<chrono>
#include<thread>
//サイコロを振る関数
int RollDice()
{
	return rand() % 6 + 1;
}


void SetTimeout(std::function<void(int)>callBack)
{
    // もったいつけるために3秒待つ
    std::this_thread::sleep_for(std::chrono::seconds(3));

}

void guessNumber(std::function<void(bool)> callback) {
    // サイコロを振る
    int diceResult = RollDice();

    // ユーザーに奇数か偶数を当ててもらう
    std::cout << "サイコロの出目は " << diceResult << " です。奇数(1)か偶数(2)を選んでください: ";
    int userGuess;
    std::cin >> userGuess;

    // ラムダ式を使って入力された値をキャプチャーしてコールバック関数を呼び出す
    callback(userGuess % 2 == diceResult % 2);

}

int main()
{




    // ゲームをプレイする
    guessNumber([](bool isCorrect) {
        if (isCorrect) {
            std::cout << "正解です！" << std::endl;
        }
        else {
            std::cout << "不正解です。" << std::endl;
        }

        }
    );



	return 0;
}