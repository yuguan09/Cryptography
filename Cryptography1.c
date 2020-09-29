#include <stdio.h>
#include<math.h>
#define N 10000
#define shift 2

int main(void)
{
	int i;
	char input[N];
	char output[N];

	for (i = 0; i < N; i++)
	{
		input[i] = getchar();
		output[i] = input[i] + shift;
		//printf("%c,%c\n",input[i],output[i]);
		//printf("%d,%d\n",input[i],output[i]);
		if (input[i] == '^')break;
	}
	//printf("%d\n",i);

	for (int k = 0;k < i;k++)
	{
		printf("%c", output[k]);
	}
}

	