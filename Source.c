#include<stdio.h>

int main() {

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
	//b�y�k ve k���k say�y� belirledik dizinin 2. indisi yani dizi[2] gecici degerleri tutmak i�indir

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



















