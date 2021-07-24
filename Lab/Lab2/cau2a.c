#include <stdio.h>
int main(){
	float a,b;
	printf("Nhap he so a va b: ");
	scanf("%f%f",&a,&b);
	if(a==0){
		if(b==0){
			printf("\nPhuong trinh vo so nghiem.");
		}
		else{
			printf("\nPhuong trinh vo nghiem.");
		}
	}else{
		printf("\nPhuong trinh co nghiem x = %.2f",-b/a);
	}
	return 0;
}
