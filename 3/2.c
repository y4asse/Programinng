#include <stdio.h>
#define NUMBER 16

/* 整数ｘをｙで割った商を返す */
int get_div(unsigned x,int y)
{
	 /* ここにコードを追加  */
   return x / y;
}

/* 整数ｘをｙで割った余りを返す */
int get_mod(unsigned x,int y)
{
	 /* ここにコードを追加  */
   return x % y;
}

/* 整数ｘを16進数で表した時の桁数を返す */
/* 例 x=3→1, x=17→ 2, x=300 → 3 */
int count_digits(unsigned x)
{
	 /* ここにコードを追加  */
   int count = 0;
   while(x>0){
    x /= 16;
    count ++;
   }
   return count;
}

/* 整数baseのｘ乗の値を返す */
/* 例 base=2,x=3 → :8, base=5,x=5 → 3125 */
int get_pow(int base,int x)
{
	 /* ここにコードを追加  */
   int y =1;
   for(int i=0;i<x;i++){
    y *= base;
   }
   return y;
}

int main(void)
{
	unsigned nx;
	int lim,ny,nz;
	
	lim = NUMBER;
	printf("非負の整数を入力してください：");
	scanf("%u", &nx);
	putchar('\n');
	
	ny = count_digits(nx);
	while(get_div(nx,lim) || ny > 1){
		nz = get_pow(NUMBER,ny - 1);
		printf("%X",get_div(nx,nz));
		nx = get_mod(nx,nz);
		ny--;
	}
	printf("%X",get_mod(nx,lim));

	putchar('\n');

	return (0);
}