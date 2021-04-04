#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void sayiToplamaP(int *pa, int *pb, int *ptoplam, int *pcarpim);		//prototype
int sayiToplama(int a, int b);






int main(int argc, char *argv[]) {
	
	int sayi1 =120;
	int sayi2 =60;
	int toplam = 0;
    int carpim = 0; 

	printf("oncekiler >> sayi1: %d sayi2:%d toplami:%d carpimi:%d\n",sayi1,sayi2, toplam, carpim);

	sayiToplamaP(&sayi1, &sayi2, &toplam, &carpim);
	
	printf("sonrakiler >> sayi1: %d sayi2:%d toplami:%d carpimi:%d\n",sayi1,sayi2, toplam, carpim);

sayiToplama(toplam,carpim);
printf("bolme :%d",sayiToplama(sayi1,sayi2));
	
	
	
	return 0;
}


	
	int sayiToplama(int a, int b)
	{
		
		return (a/b);
		
			
	}
	



void sayiToplamaP(int *pa, int *pb, int *ptoplam, int *pcarpim)		//*pa giris, *pb giris , *ptoplam cikis , *pcarpim cikis
{
	
	*ptoplam = (*pa) + (*pb);
	*pcarpim = (*pa) * (*pb);
	
	
	
}
