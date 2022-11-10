#include <stdio.h>

void del_digit(char str[])
{
	/* ここにコードを追加 */	
    int i = 0, idx = 0;
    
    while (str[i]) {
        if (str[i] < '0' || str[i] > '9')
            str[idx++] = str[i];
        i++;
    }
    str[idx] = '\0';
}

int main(void)
{
	char str[100];
	printf("文字列strを入力！：str = 　");
	scanf("%s",str);
	
	printf("数字の削除！\n");
	
	del_digit(str);
	
	printf("str = %s\n",str);
	
	return(0);
}
