#include <stdio.h>

int str_char(const char str[],int moji)
{
	/* ここにコードを追加 */
    for(int i=0; str[i] != '\0'; i++){
        if(str[i] == moji)
            return i;
    }
    return -1;
}

int main(void)
{
    int no;
    char ch[10];
    printf("英⽂字を⼊⼒してください ：");
    scanf("%s",ch);
    no = str_char("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz",ch[0]);
    if(no >= 0 && no <= 25)
    printf("それは英⼤⽂字の%d番⽬です。¥n",no+1);
    else if (no >= 26 && no <= 51)
    printf("それは英⼩⽂字の%d番⽬です。¥n",no-25);
    else
    printf("それは英⽂字ではありません\n");
    return(0);
}