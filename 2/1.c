#include <stdio.h>

int main(void)
{
	int i;
	/* ここにコードを追加 （宣言） */
  int v[5] ;
  v[0] = 5;
  v[1] = 4;
  v[2] = 3;
  v[3] = 2;
  v[4] = 1;
	printf("初期値：\n");

	/* ここにコードを追加 （表示） */
  for(int i=0;i<5;i++){
    printf("vc[%d] = %d\n", i, v[i]);

  }
	printf("代入する整数を5個入力してください\n");

	/* ここにコードを追加（代入）  */
	for(int i=0;i<5;i++){
    scanf("%d", &v[i]);
  }
	/* ここにコードを追加 （表示） */
	for(int i=0;i<5;i++){
    printf("vc[%d] = %d\n", i, v[i]);

  }
	return (0);
}