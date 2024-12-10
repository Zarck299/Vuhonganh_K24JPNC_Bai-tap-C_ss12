#include <stdio.h>

int choice,size;
int array[100];

int main(){
	do{
		int displayMenu();
		displayMenu();
		printf("Lua chon cua ban : ");
		scanf("%d",&choice);
		
		switch(choice){
			case 1:
				int menu1();
				menu1();
				break;
			case 2:
				int menu2();
				menu2();
				break;
			case 3: 
				int menu3();
				menu3();
				break;
			case 4: 
				int menu4();
				menu4();
				break;
			case 5:
				int menu5();
				menu5();
				break;
			case 6: 
				int menu6();
				menu6();
				
				break;
			case 7: 
				int menu7();
				menu7();
				break;
			case 8:
				printf("Thoat.\n");
				printf("Hen gap lai ban !!!");
				break;							
		}
	}while(choice!=8);
	return 0;
}

void displayMenu(){
	int choice;
	printf("MENU\n");
	printf("1.Nhap so phan tu can nhap va gia tri ca phan tu\n");
	printf("2.In ra gia tri cac phan tu dang quan ly\n");
	printf("3.Them mot phan tu vao vi tri chi dinh\n");
	printf("4.Sua mot phan tu o vi tri chi dinh\n");
	printf("5.Xoa phan tu o vi tri chi dinh\n");
	printf("6.Sap xep cac phan tu\n");
	printf("7.Tim kiem phan tu nhap vao\n");
	printf("8.Thoat\n");	
}
void menu1(){
			printf("Hay nhap so phan tu cua mang : ");
			scanf("%d",&size);
			for(int i=0;i<size;i++){
				printf("arr[%d] = ",i);
				scanf("%d",&array[i]);
			}
}
void menu2(){
	printf("Cac gia tri ma ban dang quan li : ");
	for(int i=0;i<size;i++){
		printf("\tarr[%d] = %d",i,array[i]);
	}
}
void menu3(){
	int addNumber;
	int addIndex;
	printf("Ban muon them gia tri nao : ");
	scanf("%d",&addNumber);
	printf("Ban muon them gia tri do vao vi tri nao : ");
	scanf("%d",&addIndex);
	for(int i=size;i>addIndex;i--){
		array[i]=array[i-1];
	}
	array[addNumber]=addIndex;
	printf("Mang sau khi duoc them gia tri : ");
	for(int i=0;i<size+1;i++){
		printf("\t%d",array[i]);
	}
}
void menu4(){
	int fixNumber;
	int fixIndex;
	printf("Ban muon sua phan tu o vi tri nao (0 -> %d) : ",size);
	scanf("%d",&fixIndex);
	while(fixIndex<0 || fixIndex>size){
		printf("Vi tri khong hop le vui long nhap lai : ");
		scanf("%d",&fixIndex);
	}
	printf("Ban muon sua phan tu do thanh gia tri nao : ");
	scanf("%d",&fixNumber);
	
	array[fixIndex]=fixNumber;
	
	printf("Mang sau khi duoc sua : ");
	for(int i=0;i<size;i++){
		printf("\t%d",array[i]);
	}
}
void menu5(){
	int deleteIndex;
	printf("Ban muon xoa phan tu o vi tri nao : ");
	scanf("%d",&deleteIndex);
	while(deleteIndex<0 || deleteIndex>size){
		printf("Vi tri khong hop le vui long nhap lai : ");
		scanf("%d",&deleteIndex);
	}
	for(int i=deleteIndex;i<size;i++){
		array[i] = array[i+1];
	}
	for(int i=0; i<size-1; i++){
		printf("%3d",array[i]);
	}
}
void menu6(){
	char choicemin;
	printf("a, Sap xep tang dan.\n");
	printf("b, Sap xep giam dan.\n");
	printf("Ban muon sap xep theo kieu nao : ");
	scanf("%s",&choicemin);
	if(choicemin == 'a'){
		for(int i=0;i<size-1;i++){
			for(int j=0;j<size-i-1;j++){
				if(array[j]>array[j+1]){
					int temp = array[j];
					array[j] = array[j+1];
					array[j+1] = temp;
				}
			}
		}
		for(int i=0; i<size; i++){
			printf("%3d",array[i]);
		}
	}else if(choicemin == 'b'){
			for(int i=0; i<size-1 ; i++ ){
				for(int j=0; j<size-i-1 ; j++){
					if(array[j]<array[j+1]){
						int temp = array[j];
						array[j] = array[j+1];
						array[j+1] = temp;
					}
				}
			}
		for(int i=0; i<size; i++){
			printf("%3d",array[i]);
		}
	}
}
void menu7(){
	int checkNumber,inSize=-1;
	printf("Ban muon tim kiem phan tu nao : ");
	scanf("%d",&checkNumber);
	for(int i=0; i<size; i++){
		if(array[i]==checkNumber){
			inSize = i;
		}
	}
	if(inSize >= 0){
		printf("\nPhan tu ban dang tim o vi tri : %d",inSize);
	}else if(inSize == -1){
		printf("\nKhong ton tai phan tu do trong mang");
	}
}



