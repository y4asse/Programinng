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
	int minute = local->tm_min;
	int second = local->tm_sec;
	printf("%d年%d月%d日 %d時%d分%d秒です\n", year, month, day, hour, minute, second);
}

int main(void)
{
	printf("現在は");
	put_time();
	printf("です\n");

	return(0);
}