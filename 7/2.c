#include <stdio.h>

/*--- typedef宣言を用いた構造体 ---*/
typedef struct{ 
	int x;		/* メンバ */
	long y;		/* メンバ */
	double z;	/* メンバ */
} XYZ;		 /* 構造体は"XYZ"型 */

/*--- 値を代入した構造体XYZを返す関数 ---*/
XYZ XYZof(int x, long y, double z)
{
	/* ここにコードを追加*/
<<<<<<< HEAD
	XYZ p = {x, y, z};
	return p;
=======
	XYZ temp;
	temp.x = x;
	temp.y = y;
	temp.z = z;
	return temp;
>>>>>>> ff40b1f40badad90756abd66a00f061b89bd279b
}

int main(void)
{
	XYZ sa; /* saはXYZ型のオブジェクト */

	int x=0;
	long y=0;
	double z=0.f;

	/* 値の代入*/
	scanf("%d",&x);
	scanf("%ld",&y);
	scanf("%lf",&z);

	sa = XYZof(x, y, z);

	printf("sa.x = %d\n",  sa.x);  /* メンバの値を表示 */
	printf("sa.y = %ld\n", sa.y);  /* メンバの値を表示 */
	printf("sa.z = %f\n",  sa.z);  /* メンバの値を表示 */

	return(0);
}