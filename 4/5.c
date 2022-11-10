#include <stdio.h>

int main(void)
{
	int i,ch;
	int cnt[10] = {0};

	/* ここにコードを追加  */
  while(1){
    ch = getchar();
    if(ch == EOF) break;
    if(ch >= '0' && ch <= '9') cnt[ch - '0']++;
  }

	puts("数字文字の出現回数");
	for(i=0;i<10;i++)
		printf("’%d’：%d\n",i,cnt[i]);
	
	return(0);
}