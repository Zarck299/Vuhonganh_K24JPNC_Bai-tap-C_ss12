#include<stdio.h>

int ucln(int a,int b){
	while (b != 0){
		int temp = b;
		b = a%b;
		temp = a;
	}
	return a;
}
int main(){
	int firstNumber,secondNumber;
	 printf("Hay nhap vao so thu nhat: \n");
	 scanf("%d", &firstNumber);
	 printf("Hay nhap vao so thu hai: \n");
	 scanf("%d", &secondNumber);
	 
	 int result = ucln(firstNumber,secondNumber);
	 printf("UCLN cua hai so da nhap la: %d\n", result);
	 scanf("%d", &result);
	 return 0;
	
}
