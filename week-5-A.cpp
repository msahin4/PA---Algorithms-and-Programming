#include <stdio.h>
int main() {
	int x;
	scanf("%d",&x);
	bool sonuc=false;
    for (int i = 2; i <= x / 2; i++) {
        if (x % i == 0) {
            sonuc = true;
            break;
        }
    }
	if(sonuc)
		printf("Asal degil");
	else
		printf("Asal");
		
	return 0;
}
