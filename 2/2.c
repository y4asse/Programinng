#include <stdio.h>

int main(void)
{
	int i;
	int tensu[5];           /* 5人の学生の点数 */
	int sum = 0;            /* 合計点 */
	double ave;            /* 平均点 */
	double var = 0.0;   /* 分散 */

	puts("点数を入力してください。");
	for (i = 0; i < 5; i++) {
		printf("%2d番;", i + 1);
		/* ここにコードを追加  */
		scanf("%d", &tensu[i]);
	 	/* 合計点を計算 */
		/* ここにコードを追加  */
		sum += tensu[i];
	}

	/* 平均を ave に格納 */
	/* ここにコードを追加  */
	ave = (double)sum / 5;
	/* 学生の点数と平均から分散を var に計算 */
	/* ここにコードを追加  */
	double x=0;
	for (int i = 0; i < 5; i++)
	{
		x += (((double)tensu[i] - ave)*((double)tensu[i] - ave));
	}
	
	var = x / 5; 

	printf("合計点：%5d\n", sum);
	printf("平均点：%5.1f\n", ave);
	printf("分　散：%5.1f\n", var);
}