#include <stdio.h>
#include <time.h>


int post_count = 0;
// ユーザ構造体
typedef struct 
{
    int post_id;
    char name[20]; 
    char password[20]; 
}user;

// 投稿構造体
typedef struct 
{
    char user[20];
    time_t time;
}post;

//ファイルの行数を取得
//返り値 int
int get_line(char filename[])
{
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

// n行目の内容を表示
//void
void get_postn(char filename[], int n)
{
    int ch;
    FILE *fp;
    int count = 1;
    char post[300];
    if((fp = fopen(filename, "r")) == NULL)
    {
		printf("ファイルをオープンできません。");
    }else {
        while (fgets(post, 300, fp) != NULL)
	    {
            if(count++ == n)
            {
                printf("%s", post);
            }
        }
    }
    fclose(fp);
}

void select_post(char filename[])
{
    int n;
    printf("指定する数を入力してください\n");
    scanf("%d", &n);
    get_postn(filename, n);
}
// 内容表示処理
// void
void get_posts(char filename[]) 
{
    FILE *fp;
    int ch;
    int post_id;
    char text[200];
    char name[20];
    if((fp = fopen(filename, "r")) == NULL)
    {
		printf("ファイルをオープンできません。");
    }else {
        printf("投稿内容を表示します");
        printf("\n===============\n");
        while ((ch = fgetc(fp)) != EOF) 
        {
            putchar(ch);
        }
        printf("\n===============\n");
    }
	fclose(fp);
}

// 投稿書き込み処理
// void
void write_post(char filename[]) 
{
    int ch;
    FILE *fp;
    if((fp = fopen(filename, "a")) == NULL)
    {
		printf("ファイルをオープンできません。");
    }else {
        int post_id = get_line(filename)+1;
        char name[10];
        char text[200];
        printf("名前を入力してください(20文字以内)\n");
        scanf("%s", name);
        printf("投稿内容を入力してください(200文字以内,空白なし)\n");
        scanf("%s", text);
        fprintf(fp, "%d:%s >>> %s\n", post_id, name, text);
        printf("書き込みました\n");
    }
	fclose(fp);
}


int main(void)
{   
    int controller = 1;
    // 操作の繰り返し
    while(controller != 0)
    {
        int count = 0;
        printf("<<<操作を入力してください>>>\n");
        printf("0 -> 終了\n");
        printf("1 -> 内容を表示\n");
        printf("2 -> 投稿する\n");
        printf("3 -> 指定の番号の内容を表示\n");
        printf("4 -> \n");
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
            get_posts("post.txt");
            break;
        // 投稿する
        case 2:
            write_post("post.txt");
            break;
        case 3:
            select_post("post.txt");
            break;
        case 4:

            break;
        default:
            printf("正しい数字を入力してください\n");
            break;
        }
    }
	return 0;
}