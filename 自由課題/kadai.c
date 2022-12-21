#include <stdio.h>
#include <time.h>
// ユーザ構造体
typedef struct {
    char name[20];  
    int user_id;
}user;

// 投稿構造体
typedef struct {
    user user;
    time_t time;
}post;

int main(void)
{   

	FILE *fp;
	int ch;
	char filename[60];
	
	int count = 0;
	scanf("%s",filename);
	printf("入力ファイル名：%s\n",filename);

	//ファイルオープン処理	
    if((fp = fopen(filename, "r")) == NULL){
		printf("ファイルをオープンできません。");
		return 0;
    }else {
        while((ch=fgetc(fp)) != EOF){
            
        }
    }

	
	printf("\nアルファベットの数は%d個です。\n", count);
	fclose(fp);
	
	return 0;
}