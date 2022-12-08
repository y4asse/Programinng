#include <stdio.h>

int main(void)
{
	int ch;
	FILE *sfp;	/* コピー元ファイル */
	FILE *dfp; 	/* コピー先ファイル */
	char sname[64];	/* コピー元ファイル名 */
	char dname[64];	/* コピー先ファイル名 */
	
	printf("コピー元ファイル名を入力してください：");
	scanf("%s",sname);
	printf("コピー先ファイル名を入力してください：");
	scanf("%s",dname);
	
	/* ここにコードを追加  */
    if((sfp = fopen(sname, "r")) == NULL){
		printf("コピー元ファイルをオープンできません。\n");
    }else{
		/* ここにコードを追加  */
        if((dfp = fopen(dname, "w")) == NULL){
			printf("コピー先ファイルをオープンできません。\n");
        }
		else{
			/* ここにコードを追加  */
            while((ch = fgetc(sfp)) != EOF){
                fputc(ch, dfp);
            }
            fclose(dfp);
		}
        fclose(sfp);
	}

	return (0);	
}
