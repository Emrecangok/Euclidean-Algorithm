#include<stdio.h>

int main() {
	//acıklamalar websitemde:emrecangok.blogspot.com
	int sayilar[3];
	printf("sayiyi giriniz\n");
	scanf("%d",&sayilar[0]);
	printf("diger sayiyi giriniz\n");
	scanf("%d",&sayilar[1]);
	if (sayilar[0]<sayilar[1])
	{
		sayilar[2] = sayilar[0];
		sayilar[0] = sayilar[1];
		sayilar[1] = sayilar[2];

	}
	//büyük ve küçük sayıyı belirledik dizinin 2. indisi yani dizi[2] gecici degerleri tutmak içindir

	ihtar:
	if (sayilar[0]%sayilar[1]==0)
	{
		printf("EBOB=%d",sayilar[1]);

	}
	else
	{
		sayilar[2]=sayilar[0]%sayilar[1];
		sayilar[0] = sayilar[1];
		sayilar[1] = sayilar[2];
		goto ihtar;
	}




	





	return 0;
}



















