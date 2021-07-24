#include <stdio.h>
int main(){
	float sd,sotien;
	int b1=1.678,b2=1.734,b3=2.014,b4=2.536,b5=2.834,b6=2.927;
	printf("Nhap so dien (kWh): ");
	scanf("%f",&sd);
	if(sd<0){
		printf("\nVui long nhap lai!\nSo dien khong duoc nho hon 0\n");
	}else if(sd<=50){
		sotien=sd*b1;
		printf("\nSo tien can phai tra la: %.3f VND",sotien);
	}else if(sd<=100){
		sotien=50*b1+((sd-50)*b2);
		printf("\nSo tien can phai tra la: %.3f VND",sotien);
	}else if(sd<=200){
		sotien=50*b1+(50*b2)+((sd-100)*b3);
		printf("\nSo tien can phai tra la: %.3f VND",sotien);
	}else if(sd<=300){
		sotien=50*b1+(50*b2)+(100*b3)+((sd-200)*b4);
		printf("\nSo tien can phai tra la: %.3f VND",sotien);
	}else if(sd<=400){
		sotien=50*b1+(50*b2)+(100*b3)+(100*b4)+((sd-300)*b5);
		printf("\nSo tien can phai tra la: %.3f VND",sotien);
	}else if(sd>400){
		sotien=50*b1+(50*b2)+(100*b3)+(100*b4)+(100*b5)+((sd-400)*b6);
		printf("\nSo tien can phai tra la: %.3f VND",sotien);
	}
	return 0;
}
