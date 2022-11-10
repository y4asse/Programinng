#include <stdio.h>

/* 整数ｘ中のセットされたビット数を返す */
int count_bits(unsigned x)
{
	int count = 0;
	
	while (x) {
		if(x & 1U) count++;
		x >>= 1;
	}
	
	return (count);
}

/* unsigned型のビット数を返す */
int int_bits(void)
{
	return (count_bits(~0U));
}

/* unsigned型のビット内容を表示 */
void print_bits(unsigned x)
{
	int i;
	
	for(i=int_bits()-1;i>=0;i--)
		putchar(((x >> i) & 1U) ? '1' : '0');
}

 /* ここにコードを追加  */
 unsigned rrotate(unsigned x, int n)
{
    n %= int_bits();
    return n ? (x >> n) | (x << (int_bits() - n)) : x;
}

int main(void)
{
	unsigned nx,no;
	
	printf("非負の整数を入力してください：");
	scanf("%u", &nx);
	printf("何ビット回転しますか：");
	scanf("%u", &no);
	printf("\n回転前＝");
	print_bits(nx);
	printf("\n回転後＝");
	print_bits(rrotate(nx,no));
	putchar('\n');

	return (0);
}