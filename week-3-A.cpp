#include <stdio.h>

int main() {
	
	int a;
	scanf("%d",&a);
	if(a==0)
		printf("Sifir girdiniz...");
	else if(a<0)
		printf("%d",a);
	else
		printf("Pozitif bir sayi girdiniz!");
	return 0;
}
