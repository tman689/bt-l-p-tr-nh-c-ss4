#include<stdio.h>

int main(){
	int number;
	printf("Nhap vao mot so nguyen: ");
	scanf("%d",&number);
	
	if(number < 0){
		printf("So %d ban nhap là so am: \n", number);
	} else if (number > 0){
		printf("so %d ban nhap la so duong: \n", number);
	} else {
		printf("so ban nhap vao la 0 , thi khong là so am hay duong: \n");
	}
	return 0;
}
