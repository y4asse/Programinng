#include <stdio.h>
#include <time.h>

// ユーザ構造体
typedef struct {
    int user_id;
    char name[20]; 
    char password[20]; 
}user;

// 投稿構造体
typedef struct {
    int post_id;
    char user[20];
    time_t time;
}post;

int get_line(char filename[]){
    int line=0;
    FILE *fp;
    int ch;
    char text[200];
    fp = fopen(filename, "r");
    while ((ch = fgetc(fp)) != EOF) {
        if (ch == '\n') line++;
    }
	fclose(fp);
    return line;
}

// 内容表示処理
// 返り値　post[]
post get_post(char filename[]) {
    FILE *fp;
    int ch;
    int line;
    if((fp = fopen(filename, "r")) == NULL){
		printf("ファイルをオープンできません。");
    }else {
        printf("投稿内容を表示します");
        printf("===============\n");
        // for(fscanf(fp, "%[^,],%d,%s\n", post_id, &name, text) != EOF) {
        //     printf("%d.%s 2022-02-25\n%s", post_)
        // }
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
        char name[10];
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
            // show_post("post.txt");
            break;
        // 投稿する
        case 2:
            // write_post("post.txt");
            break;
        default:
            printf("正しい数字を入力してください\n");
            break;
        }
    }
	return 0;
}