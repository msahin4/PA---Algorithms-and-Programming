#include <stdio.h>
int main() {
	int a;
	long long int fact=1;
	scanf("%d",&a);
	for (int i=1; i<=a ; i++){
		fact*=i;
	}
	printf("%lld",fact);
	return 0;
}
