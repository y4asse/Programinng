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
        printf("投稿内容を表示します");
        printf("===============\n");
        while((ch=fgetc(fp)) != EOF){
            putchar(ch);
        }
        printf("\n===============\n");
    }
	fclose(fp);
}

// 投稿書き込み処理
// void
void write_post(char filename[]) {
    int ch;
    FILE *fp;
    if((fp = fopen(filename, "a")) == NULL){
		printf("ファイルをオープンできません。");
    }else {
        char text[200];
        printf("投稿内容を入力してください(200文字以内)\n");
        scanf("%s", text);
        fprintf(fp, "%s\n", text);
        printf("書き込みました\n");
    }
	fclose(fp);
}


int main(void)
{   
    int controller = 1;
    // 操作の繰り返し
    while(controller != 0){
        int count = 0;
        printf("<<<操作を入力してください>>>\n0 -> 終了\n1 -> 内容を表示\n2 -> 投稿する\n");
        scanf("%d", &controller);
        // 操作の選択
        switch (controller)
        {
        // 終了
        case 0:
            printf("終了します\n");
            break;
        // 内容の表示
        case 1:
            show_post("post.txt");
            break;
        // 投稿する
        case 2:
            write_post("post.txt");
            break;
        default:
            printf("正しい数字を入力してください\n");
            break;
        }
    }
	return 0;
}