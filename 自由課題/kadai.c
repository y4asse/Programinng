#include <stdio.h>
#include <time.h>


int post_count = 0;
// ユーザ構造体
//char name
//int gender(男->0,女->1,不明->その他)
typedef struct 
{
    char name[20]; 
    int gender;
}user;

//ファイルの行数を取得
//返り値 int
int get_line(char filename[])
{
    int line=0;
    FILE *fp;
    int ch;
    char text[200];
    fp = fopen(filename, "r");
    while ((ch = fgetc(fp)) != EOF) 
    {
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
    }
    else
    {
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

//行を指定して内容を表示
//void
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
    }
    else
    {
        printf("投稿内容を表示します");
        printf("\n===============\n");
        while ((ch = fgetc(fp)) != EOF) 
        {
            putchar(ch);
        }
        printf("\n===============\n");
        printf("投稿内容を表示しました");
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
    }
    else 
    {
        const char *days[] = {"日", "月", "火", "水", "木", "金", "土"};
        time_t t   = time(NULL);
        struct tm *tm = localtime(&t); 
        int post_id = get_line(filename)+1;
        char name[20];
        char text[200];
        printf("名前を入力してください(20文字以内)\n");
        scanf("%s", name);
        printf("投稿内容を入力してください(200文字以内,空白なし)\n");
        scanf("%s", text);
        fprintf(fp, "%d:%s %04d年%02d月%02d日(%s)%02d時%02d分%02d秒 >>> %s\n", 
        post_id, name, tm->tm_year + 1900, tm->tm_mon + 1, tm->tm_mday,
        days[tm->tm_wday], tm->tm_hour, tm->tm_min, tm->tm_sec, text
        );
        printf("書き込みました\n");
    }
	fclose(fp);
}

// 投稿書き込み処理(userflg=1のとき)
// void
void write_post_user(char filename[], user user) 
{
    int ch;
    FILE *fp;
    if((fp = fopen(filename, "a")) == NULL)
    {
		printf("ファイルをオープンできません。");
    }
    else 
    {
        const char *days[] = {"日", "月", "火", "水", "木", "金", "土"};
        time_t t   = time(NULL);
        struct tm *tm = localtime(&t); 
        int post_id = get_line(filename)+1;
        char text[200];
        printf("投稿内容を入力してください(200文字以内,空白なし)\n");
        scanf("%s", text);
        fprintf(fp, "%d:%s(%s) %04d年%02d月%02d日(%s)%02d時%02d分%02d秒 >>> %s\n", 
        post_id, user.name, user.gender == 1 ? "女" : (user.gender == 0 ? "男" : "不明"),
        tm->tm_year + 1900, tm->tm_mon + 1, tm->tm_mday, days[tm->tm_wday], tm->tm_hour, tm->tm_min, tm->tm_sec, text
        );
        printf("書き込みました\n");
    }
	fclose(fp);
}

int main(void)
{   
    int controller = 1;

    // 名前が設定されているかどうか
    // 設定されている場合は1,されていない場合は0
    int userflg = 0;
    user user = {};
    // ユーザの設定
    //void
    void default_user()
    {
        printf("名前を入力してください(20文字以内)\n");
        scanf("%s", user.name);
        printf("性別を入力してください(男->0,女->1,不明->その他)\n");
        scanf("%d", &user.gender);
        userflg = 1;
    }

    void logout()
    {   
        int t;
        printf("ログアウトしますか？(0->はい,1->いいえ)\n");
        scanf("%d", &t);
        if(t == 0)
        {
            userflg = 0;
            printf("ログアウトしました\n");
        }

    }

    // 操作の繰り返し(userflg=0のとき)
    while(controller != 0)
    {
        int count = 0;
        if(userflg == 1)
        {
            printf("<<<こんにちは%sさん!>>>\n", user.name);
        }
        printf("<<<操作を入力してください>>>\n");
        printf("0 -> 終了\n");
        printf("1 -> 内容を表示\n");
        printf("2 -> 投稿する\n");
        printf("3 -> 指定の番号の内容を表示\n");
        if(userflg == 0)
        {
            printf("4 -> ユーザの設定\n");
        }
        if(userflg == 1)
        {
            printf("4 -> ログアウト\n");
        }
        scanf("%d", &controller);
        if(userflg == 0)
        {
            // 操作の選択(userflg=0のとき)
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
                // 指定の行の内容の表示
                case 3:
                    select_post("post.txt");
                    break;
                //ユーザの設定(userflg=0のときだけ)
                case 4:
                    default_user();
                    break;
                default:
                    printf("正しい数字を入力してください\n");
                    break;
            }
        }
        else if(userflg == 1)
        {
            // 操作の選択(userflg=1のとき)
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
                    write_post_user("post.txt", user);
                    break;
                // 指定の行の内容の表示
                case 3:
                    select_post("post.txt");
                    break;
                case 4:
                    logout();
                    break;
                default:
                    printf("正しい数字を入力してください\n");
                    break;
            }
        }
    }
	return 0;
}