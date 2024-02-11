#include <stdio.h>
#include <iostream>
#include<vector>
#include<thread>

using namespace std;

int main() {

	const int TextSize = 100000;
	string TextA(TextSize, 'a');
	cout << TextSize << "文字のコピーと移動を比較\n";

	chrono::steady_clock::time_point now;
	chrono::steady_clock::time_point end;

	///copy
	now = chrono::steady_clock::now();
	string CopyTextA = TextA;
	end = chrono::steady_clock::now();

	int copy = chrono::duration_cast<chrono::microseconds>(end - now).count();

	cout << "コピーの場合" << "\n";
	cout << copy << "\n";

	///move
	now = chrono::steady_clock::now();
	string MoveText_A = move(TextA);
	end = chrono::steady_clock::now();

	int Move = chrono::duration_cast<chrono::microseconds>(end - now).count();

	cout << "移動の場合" << "\n";
	cout << Move << " \n";

	return 0;
}