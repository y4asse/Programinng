#include<stdio.h>

/* ここにコードを追加  */
#define swap(type, x, y) do { type temp = x; x = y; y = temp; } while (0)

int main(void)
{
  int na,nb;
  
  puts("二つの整数を入力せよ．");
  printf("整数Ａ:"); scanf("%d", &na);
  printf("整数Ｂ:"); scanf("%d", &nb);

  swap(int, na, nb);
  puts("\nＡとＢの値を交換");
  printf("整数Ａ=%d\n", na);
  printf("整数Ｂ=%d\n", nb);
  
  return (0);
}