
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

void guessCallback(int diceResult)
{
	char userGuess;
	printf("サイコロの出目は %d です。奇数か偶数かを当ててください  (o/e):", diceResult);
	scanf_s(" %c ", &userGuess,sizeof(userGuess));

	if ((diceResult % 2 == 0 && userGuess == 'e') || (diceResult % 2 != 0 && userGuess == 'o'))
	{
		printf("当たり!!\n");
	}
	else {
		printf("はずれ...残念...w\n");
	}


}




int main()
{
	//関数ポインタを用意してコールバック関数を指定
	CallBack callback = guessCallback;

	//ゲームスタート
	playGame(callback);


	return 0;
}