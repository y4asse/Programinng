/* 符号無し整数の任意のビットを操作 */
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
unsigned lsft(unsigned x, int n)
{
    return (n >= int_bits()) ? 0 : (x << n);
}

unsigned set_n(unsigned x, int pos, int n)
{
    return x | lsft(~lsft(~0, n), pos - 1);
}

int main(void)
{
	unsigned nx;
	int pos,no;
	
	puts("符号無し整数ｘのposビット目からno個のビットを操作します。");
	printf("非負の整数ｘを入力してください：");
	scanf("%u", &nx);
	printf("操作するビット位置posを入力してください：");
	scanf("%d", &pos);
	printf("操作するビット数noを入力してください：");
	scanf("%d", &no);
	
	printf("\nx＝");
	print_bits(nx);
	printf("\nset_n(x,pos,no)＝");
	print_bits(set_n(nx,pos,no));
	putchar('\n');

	return (0);
}
