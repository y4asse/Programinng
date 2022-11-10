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
    if (a % b == 0)
        puts("bはaの約数です。");
    else 
        puts("bはaの約数ではありません");
	return(0);
}