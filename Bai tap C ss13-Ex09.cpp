#include <stdio.h>

void displaymenu(){
	printf("\n        ---Menu---\n");
	printf("1.Nhap so phan tu \n");
	printf("2.In ra mang vua nhap \n");
	printf("3.In ra phan tu goc theo ma tran \n");
	printf("4.In phan tu tren duong bien \n");
	printf("5.In ra cac phan tu duong cheo chinh va duong cheo phu \n");
	printf("6.In ra cac phan tu la so nguyen to \n");
	printf("7.Thoat \n");
}
void khaibao(int arr[100][100] , int *n,int *m){
	printf("Nhap so hang :");
	scanf("%d", n);
	printf("Nhap so cot:");
	scanf("%d", m);
	for(int i=0; i< *n; i++){
		for(int j=0; j< *m ;j++){
			printf("Nhap phan tu thu [%d][%d]: ",i+1,j+1);
			scanf("%d",&arr[i][j]);
		}
	}
}
void goc(int arr[100][100],int n,int m){
	printf("Phan tu ben tren goc trai: %d\n",arr[0][0]);
	printf("Phan tu ben tren goc phai: %d\n",arr[0][m-1]);
	printf("Phan tu ben duoi goc trai: %d\n",arr[n-1][0]);
	printf("Phan tu ben duoi goc phai: %d\n",arr[n-1][m-1]);
}

void bien(int arr[100][100],int n, int m ){
	for(int j =0; j<m ; j++){
		printf("%d",arr[0][j]);
	}
	for(int j=m-1;j>=0;j--){
		printf("%d",arr[n-1][j]);
	}
	for(int i=n-2; i>0;i--){
		printf("%d",arr[i][0]);
	} 
	for(int i=n; i<n-1;i++){
		printf("%d",arr[i][m-1]);
	}
}

void chinh(int arr[100][100],int n ,int m){
	printf("Duong cheo chinh cua mang la:");
	for(int i=0; i<n;i++){
		printf("%d\t",arr[i][i]);
	}
}
//cheo phu 
void phu(int arr[100][100], int n, int m){
	printf("Duong cheo phu cua mang la:");
	for(int i=0;i<n;i++){
		printf("%d\t",arr[i][n-1-i]);
	}
}
int isprime(int n) {
    if (n <= 1){
    	return 0;
	} 
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
        	return 0;
		}
    }
    return 1; 
}
void printprimes(int arr[100][100], int n, int m) {
    printf("Cac so nguyen to trong mang:\n");
    int found = 0;
	int is_prime; 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (is_prime(arr[i][j])) {
                printf("%d ", arr[i][j]);
                found = 1; 
            }
        }
    }
    if (!found) {
        printf("Khong co so nguyen to nao trong mang.\n");
    }
    printf("\n");
}
int main(){
	int choice;
	int n,m;
	int arr[100][100];
	
	do{
		displaymenu();
		printf("Lua chon cua ban la: ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				khaibao(arr,&n,&m);
				printf("\n");
				break;
			case 2:
				khaibao(arr,&n,&m);
				printf("Mang da nhap la :\n");
				for(int i=0; i<n ; i++){
					for(int j=0; j<m ; j++){
						printf("%d\t",arr[i][j]);
					}
					printf("\n");
				}
				printf("\n");
				break;
			case 3:
				khaibao(arr,&n,&m);
				goc(arr,n,m);
				printf("\n");
				break;
			case 4:
				khaibao(arr,&n,&m);
				bien(arr,n,m);
				printf("In ra bien : %d\n", bien);
				break;
			case 5: 
				khaibao(arr,&n,&m);
				chinh(arr,n,m);
				printf("\n");
				phu(arr,n,m);
				printf("\n");
				break;
			case 6:
				khaibao(arr,&n,&m);
				printprimes(arr,n,m);
				printf("\n");
				break;
			case 7:
				printf("Chuong trinh key thuc!");
				break;
			default:
				printf("ERROR. Vui long nhap lai!!\n");
		}
	}while(choice!=0);
	return 0;
}
