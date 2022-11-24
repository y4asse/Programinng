#include <stdio.h>
#include <string.h>

/* 個人データ */
typedef struct{
	char name[100];
	double height;
	double weight;
}member;

/* double型の値交換（*xと*yの値を交換） */
void swap(double *x,double *y)
{
	/* ここにコードを追加  */
}

/* char[]の値交換（sx[]とsy[]の値を交換） */
void swaps(char sx[],char sy[])
{
	/* ここにコードを追加  */

}

int main(void)
{
	FILE *fp;
	member ma[10];
	char str[10];
	int i = 0;
	char filename[60];

	scanf("%s",filename);

	//ファイルを開く
	//ファイルがオープンできなかったらtrueとなる
	/* ここにコードを追加  */
		printf("ファイルをオープンできません。\n");
	else{
		//ファイルがオープンできた時の処理
		int j;
		int k;	
		
		while(fscanf(fp, "%s%lf%lf",ma[i].name,&(ma[i].height),&(ma[i].weight)) == 3){
			printf("%-10s %5.1f %5.1f\n",ma[i].name,ma[i].height,ma[i].weight);
			i++;
		}
		
		//ソートを行う
		/* ここにコードを追加  */
	
		//ソート結果を表示
		printf("----------SortResult----------\n");
		for(i=0;i<j;i++)
			printf("%-10s %5.1f %5.1f\n",ma[i].name,ma[i].height,ma[i].weight);
		fclose(fp);
	}

	return (0);
}