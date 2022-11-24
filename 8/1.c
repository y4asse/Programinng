#include <stdio.h>

int main(void)
{
	FILE *fp;
	int ch;
	char filename[60];
	
	int count = 0;
	scanf("%s",filename);
	printf("入力ファイル名：%s\n",filename);

	//ファイルオープン処理	
	/* ここにコードを追加  */
		printf("ファイルをオープンできません。");
		return 0;
	}

	//文字数カウント処理
	/* ここにコードを追加  */
	
	printf(“アルファベットの数は%d個です。\n", count);
	fclose(fp);
	
	return 0;
}