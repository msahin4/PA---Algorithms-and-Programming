#include <stdio.h>

int main() {
	int x,toplam=0;
	do {
		scanf ("%d",&x);
		toplam+=x;
	}while(x!=0);
	
	printf("toplam = %d\n",toplam);
	
	return 0;
}
