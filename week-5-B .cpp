#include <stdio.h>
int main() {

	for (int i=2 ; i<=100 ; i++){
		bool isPrime = true;
		for(int j=2; j<i ; j++){
			if(i%j==0){
				isPrime = false;
				break;
			}
		}
		
		if(isPrime){
			printf("%d\n",i);
		}
	}
	return 0;
}
