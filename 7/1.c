#include <stdio.h>

struct xyz{		/* xyzはタグ名 */
	/* メンバ */	
	int x;
	long y;
	double z;
};

/* pが指す構造体xyzに値を代入 */
void set_xyz(struct xyz *p, int x, long y, double z)
{
	/* ここにコードを追加*/
	p->x = x;
	p->y = y
	p->z = z;
}

int main(void)
{
	/* saはstruct xyz型のオブジェクト */
	struct xyz sa;

	int x=0;
	long y=0;
	double z=0.f;

	/* 値の代入*/	
	scanf("%d",&x);
	scanf("%ld",&y);
	scanf("%lf",&z);
	
	set_xyz(&sa,x,y,z);

	/* メンバの値を表示 */	
	printf("sa.x = %d\n", sa.x);
	printf("sa.y = %ld\n", sa.y);
	printf("sa.z = %f\n", sa.z);
	
	return (0);
}
