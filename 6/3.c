#include <stdio.h>

/*---文字列の長さを返す関数---*/
unsigned str_length(const char str[])
{
	/* ここにコードを追加 */
    unsigned len = 0;
    while (str[len])
    len++;
    return len;
}

void put_rstring(const char str[])
{
	/* ここにコードを追加 */
    unsigned i = str_length(str);
    while (i-- > 0)
        putchar(str[i]);
}

int main(void)
{
	char str[100];
	printf("文字列を入力：");
	scanf("%s",str);
	
	printf("逆にすると次のようになります \n");
	put_rstring(str);
	putchar('\n');

	return(0);
}