// DllCall.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <stdio.h>

#include "DllTest.h"

int main()
{
	int a = 10;
	int b = 33;
	int c = Mutiply(a, b);
	printf("%d Time %d = %d\n", a, b, c);
}

