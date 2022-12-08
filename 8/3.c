#include<stdio.h>

int main(void)
{
	int ch;
	FILE *sfp;	/* コピー元ファイル */
	FILE *dfp; 	/* コピー先ファイル */
	char sname[64];	/* コピー元ファイル名 */
	char dname[64];	/* コピー先ファイル名 */
	int count=0;/*大文字のカウント*/
	int line=1;/*行数番号*/

	printf("コピー元ファイル名を入力してください：");
	scanf("%s",sname);
	printf("コピー先ファイル名を入力してください：");
	scanf("%s",dname);

    	/* ここにコードを追加  */
        if(ここから)
		printf("コピー元ファイルをオープンできません。\n");
	else{
		/* ここにコードを追加  */
			printf("コピー先ファイルをオープンできません。\n");
		else{	
			while((ch = fgetc(sfp)) != EOF){
				/*各行の大文字の数をカウントし小文字に変換*/
				/* ここにコードを追加  */

				/*各行の終わりにきたら行番号と大文字の数を表示*/
	                		if(ch == '\n'){
					printf("line%d = %d\n", line, count);
					line++; 
					count=0;
				}
				/*コピー先ファイルにコピー*/
				/* ここにコードを追加  */
			}
			fclose(dfp);
		}
		fclose(sfp);

		/* コピー後, コピー先のファイルの内容を表示 */
		/* コピー先ファイルをオープン */
		/* ここにコードを追加  */
			printf("コピー先ファイルをオープンできません。\n");
		}
		else{
			printf("コピー実行後\n");
			while((ch = fgetc(dfp)) != EOF){
				printf("%c",ch);
			}
			fclose(dfp);
		}
	}
	return (0);
}