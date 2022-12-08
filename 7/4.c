#include <time.h>
#include <stdio.h>

/*--- 現在の年月日と午前か午後かを表示する ---*/
void put_time(void)
{
	/* ここにコードを追加*/
	time_t timer = time(NULL);
	struct tm * local = localtime(&timer);
	int year = local->tm_year + 1900; 
	int month = local->tm_mon + 1;
	int day = local->tm_mday;
	int hour = local->tm_hour;

	printf("%d年%d月%d日%s", year, month, day, hour > 11 ? "午後" : "午前");
}

int main(void)
{
	printf("現在は");
	put_time();
	printf("です\n");

	return(0);
}