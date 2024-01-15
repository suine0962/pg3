#include <stdio.h>

int Recursive(int h, int j, int m) {

	if (h <= 0) {
		//処理が成功した場合
		return j;
	}

	return Recursive(h - 1, j += m, m * 2 - 50);

}

int main() {
	int hour = 4;
	int money = 100;
	int total = 0;
	int normal = 1072;

	int result;

	result = Recursive(hour, total, money);

	printf("3時間働いた一般賃金体系 %d ： 再帰的な賃金体系 %d", normal * hour, result);

	return 0;
}