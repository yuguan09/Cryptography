#include <stdio.h>
#include<math.h>

#define N 10000　　　　//入力したい文字の数が事前確定できないので、なるべく大きく設定します。
#define shift 2         //シフト位数を確定する

int main(void)
{
	int i;
	char input[N];　　　//明文の部分
	char output[N];　　　//暗号化された部分

	for (i = 0; i < N; i++)　　
	{
		input[i] = getchar();　　　　　//getcharという関数を使って、入力した文字をchar型の配列として保存します。
		output[i] = input[i] + shift;　//ASCIIコードから、入力した文字をシフトし、新しい文字になります。
		//c言語のデータ構造で,char型の変量は実際int型の変量として保存されているので、
		if (input[i] == '^')break;　　　　　//“＾”という符号が入力終了という意味で設定します。　
	}　　　　　
	//printf("%d\n",i);

	for (int k = 0;k < i;k++)
	{
		printf("%c", output[k]);
	}
}

	