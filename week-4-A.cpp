#include <stdio.h>

int main() {
	int x,sayac=1,toplam=0;
	printf("Bir sayi giriniz\n");
	scanf("%d",&x);
	while(sayac<=x){
		toplam+=sayac;
		sayac++;
	}
	printf("%d",toplam);
	return 0;
}
