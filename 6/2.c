#include <stdio.h>

void put_string(const char str[],int no)
{
	/* no回出力を繰り返す */

	/* ここにコードを追加 */
    while(no -- > 0)printf("%s", str);
}

int main(void)
{
	int x;
	char str[100];
	printf("文字列を入力：");
	scanf("%s",str);
	
	printf("繰り返す回数 : ");
	scanf("%d",&x);

	put_string(str,x);
	putchar('\n');

	return(0);
}