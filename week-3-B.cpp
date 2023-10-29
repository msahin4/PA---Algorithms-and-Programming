#include <stdio.h>

int main() {
	
	int a;
	scanf("%d",&a);
	
	if(a>=90 && a<=100)
		printf("A1");
	else if(a>=80 && a<90)
		printf("A2"); 
	else if(a>=75 && a<80)
		printf("B1");
	else if(a>=70 && a<75)
		printf("B2");
	else if(a>=65 && a<70)
		printf("C1"); 
	else if(a>=60 && a<65)
		printf("C2"); 
	else if(a>=55 && a<60)
		printf("D1"); 
	else if(a>=50 && a<55)
		printf("D2"); 
	else if(a>=40 && a<50)
		printf("E"); 
	else if(a>=0 && a<40)
		printf("F1"); 
	else 
		printf("Hatali bir sayi girdiniz."); 
}
