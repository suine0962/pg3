#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <functional>

int main() {
	//ランダム関数
	srand((unsigned int)time(NULL));
	//newType calc;

	//calc = Lottery;


	int num;
	int select = 0;

	printf("半か丁を選んでください\n");
	printf("1と入力すると半、2と入力すると丁になります\n");
	scanf_s("%d", &select);
	num = 1 + rand() % 6;

	std::function<void(void)> lottery = [=]() {
		printf("サイコロの目は%dでした。\n", num);

		if (select == 1) {
			if (num == 1 || num == 3 || num == 5) {
				printf("半です");
			}
			else {
				printf("丁です");
			}
		}

		if (select == 2) {
			if (num == 0 || num == 2 || num == 4 || num == 6) {
				printf("丁です");
			}
			else {
				printf("半です");
			}
		}

	};

	std::function<void(int)> setTimeout = [=](int second) {
		Sleep(second * 1000);

		lottery();

	};

	setTimeout(3);

	return 0;

}