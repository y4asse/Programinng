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

// ファイルオープン処理
// 返り値　成功なら1,失敗なら0
int read(char filename[]) {
    FILE *fp;
    int ch;
    if((fp = fopen(filename, "r")) == NULL){
		printf("ファイルをオープンできません。");
		return 0;
    }else {
        while((ch=fgetc(fp)) != EOF){
            
        }
    }
	fclose(fp);
    return 1;
}

// ファイル書き込み処理
// 返り値　成功なら1,失敗なら0
int write(char filename[]) {
    int ch;
    FILE *fp;
    if((fp = fopen(filename, "w")) == NULL){
		printf("ファイルをオープンできません。");
		return 0;
    }else {
        fprintf(fp, "hello");
    }
	fclose(fp);
    return 1;
}

int main(void)
{   
    int controller = 1;
    // 操作の繰り返し
    while(controller != 0){
        char filename[60];
        int count = 0;
        scanf("%d", &controller);
        printf("操作を入力してください\n内容を表示-> 1\n%d\n",controller);

	
    }
	return 0;
}