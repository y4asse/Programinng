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
    fp = fopen(filename, "r");
    if((fp = fopen("filename", "r")) == NULL){
		printf("ファイルをオープンできません。");
		return 0;
    }else {
            /* ここにコードを追加  */
            //文字数カウント処理
        while((ch=fgetc(fp)) != EOF){
            if(ch >='A' && ch <= 'z'){
                putchar(ch);
            }
        }
    }

	
	printf("\nアルファベットの数は%d個です。\n", count);
	fclose(fp);
	
	return 0;
}