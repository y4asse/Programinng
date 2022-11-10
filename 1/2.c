#include <stdio.h>

int main(void)
{
	int a,b;

	printf("整数aを入力してください：");

	/* ここにコードを追加 */
    scanf("%d", &a);

	printf("整数bを入力してください：");

	/* ここにコードを追加 */
    scanf("%d", &b);

	/* ここにコードを追加 */
    printf("aの値はbの値の%.3f%%です。\n", ((double)a / (double)b * 100));
	printf("%f",(double)(a/b));
	return(0);
}