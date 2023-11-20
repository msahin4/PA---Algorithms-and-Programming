#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int paraAt();

int main () {
	srand(time(NULL));
	int sayacYazi = 0, sayacTura = 0;
	for(int i= 1 ; i<=100 ; i++) {
		int sonuc = paraAt();
		if(sonuc==0){
			printf("Yazi\n");
			sayacYazi++;
		}
		else{
			printf("Tura\n");
			sayacTura++;
		}
	}
	
	printf("Yazi = %d  Tura = %d ",sayacYazi, sayacTura);

	return 0;
}


int paraAt(){
	return rand()%2;
}
