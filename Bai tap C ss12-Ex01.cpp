#include<stdio.h>
	int sum(int firstNumber, int secondNumber){
	return firstNumber+secondNumber;
	}
	int main(){
		int fNumber, sNumber, tong;
		printf("Hay nhap vao so thu nhat: \n");
		scanf("%d", fNumber);
		printf("Hay nhap vao so thu hai: \n");
		scanf("%d", sNumber);
		tong = sum(fNumber,sNumber);
		printf("Tong cua %d va %d la: %d\n", fNumber, sNumber, tong);

    return 0;
	}
	
