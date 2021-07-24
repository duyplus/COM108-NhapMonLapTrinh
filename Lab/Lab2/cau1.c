#include <stdio.h>
int main(){
	float n;
	printf("Nhap diem: ");
	scanf("%f",&n);
	if(n>=9){
		printf("\nHoc luc xuat sac.");
	}else if(n<9 && n>=8){
		printf("\nHoc luc gioi.");
	}else if(n<8 && n>=6.5){
		printf("\nHoc luc kha.");
	}else if(n<6.5 && n>=5){
		printf("\nHoc luc trung binh.");
	}else if(n<5 && n>=3.5){
		printf("\nHoc luc yeu.");
	}else{
		printf("\nHoc luc kem.");
	}
	return 0;
}