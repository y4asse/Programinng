#include <stdio.h>

int factorial(int n)
{
	/* ここにコードを追加  */
  if (n>0) return (n*factorial(n-1));
  else return 1;
}

int main(void)
{
	int num;
	
	printf("整数を入力してください：");
	scanf("%d",&num);
	
	printf("\nその数の階乗は%dです。\n",factorial(num));
	
	return (0);
}
