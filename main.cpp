#include<iostream>
#include<cstdlib>
#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#include<Windows.h>
//サイコロを振る関数
int RollDice()
{
	srand(time(NULL));
	return rand() % 6 + 1;
}

//コールバック関数の型定義
typedef void (*CallBack)(int);


//待ち時間
void delay(int seconds)
{
	int milli_seconds = 1000 * seconds;
	clock_t start_time = clock();
	while (clock() < start_time + milli_seconds);
}


void playGame(CallBack callback)
{
	int diceResult = RollDice();

	//もったいつけて3秒待つ
	printf("3秒待っています...");
	delay(3);

	//コールバック関数呼び出し
	callback(diceResult);
}




int main()
{
	//ラムダ式を使ってコールバック関数を定義
	auto guessCallback = [](int diceResult)
	{
		char userGuess;
		std::cout << "サイコロの出目は" << diceResult << "です奇数か偶数かを当ててください(o/e)";
		std::cin >> userGuess;

		if ((diceResult % 2 == 0 && userGuess == 'e') || (diceResult % 2 != 0 && userGuess == 'o'))
		{
			std::cout << "当たり！！" << std::endl;
		}
		else
		{
			std::cout << "はずれ。。。残念．．．" << std::endl;
		}
	};


	//ゲームスタート
	playGame(guessCallback);


	return 0;
}