#include<stdio.h>

int main(){
	int number;
	printf("Nhap so nguyen: ");
	scanf("%d", &number);
	
	if(number % 3 == 0 && number % 5 == 0){
		printf("%d la so chia het cho 3 va 5. \n", number);
	}else if(number % 3 == 0){
		printf("%d chia het cho 3. \n", number);
	}else if(number % 5 == 0){
		printf("%d chia het cho 5. \n", number);
	}else{
		printf("%d la so khong hcia het cho 3 va 5. \n");
	}
	return 0;
}
