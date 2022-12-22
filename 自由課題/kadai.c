#include <stdio.h>
#include <time.h>

// ユーザ構造体
typedef struct {
    int user_id;
    char name[20];  
}user;

// 投稿構造体
typedef struct {
    int post_id;
    user user;
    time_t time;
}post;

// 内容表示処理
// void
void show_post(char filename[]) {
    FILE *fp;
    int ch;
    if((fp = fopen(filename, "r")) == NULL){
		printf("ファイルをオープンできません。");
    }else {
        printf("===============\n");
        while((ch=fgetc(fp)) != EOF){
            putchar(ch);
        }
        printf("\n===============\n");
    }
	fclose(fp);
}

// ファイル書き込み処理
// void
void write(char filename[]) {
    int ch;
    FILE *fp;
    if((fp = fopen(filename, "w")) == NULL){
		printf("ファイルをオープンできません。");
    }else {
        fprintf(fp, "hello");
    }
	fclose(fp);
}


int main(void)
{   
    int controller = 1;
    // 操作の繰り返し
    while(controller != 0){
        char filename[60];
        int count = 0;
        printf("<<<操作を入力してください>>>\n0 -> 終了\n1 -> 内容を表示\n");
        scanf("%d", &controller);
        // 操作の選択
        switch (controller)
        {
        // 内容の表示
        case 1:
            show_post("post.txt");
            break;
        // 投稿する
        case 2:
            
            break;
        default:
            printf("正しい数字を入力してください\n");
            break;
        }
    }
	return 0;
}