#include<stdio.h>

int main(){
	int a, b, c;
	printf("Nhap so nguyen so 1: ");
	scanf("%d", &a);
	printf("Nhap so nguyen so 2: ");
	scanf("%d", &b);
	printf("Nhap so nguyen so 3: ");
	scanf("%d", &c);
	
	if((c > a && c < b)  || (c > b && c < a)){
		printf("So %d nam giua so %d va %d.\n", c, a, b);
	}else{
		printf("So %d khong nam giua so %d va %d.\n", c, a, b);
	}
	return 0;
}
