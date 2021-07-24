#include <stdio.h>
#include <math.h>
int main(){
	float a,b,c,delta,r1,r2;
	printf("Nhap he so a va b va c: ");
	scanf("%f%f%f",&a,&b,&c);
	delta = b*b-4*a*c;
	if(a==0){
		printf("\nPhuong trinh la: %.2fx + %.2f = 0",b,c);
	}else if(a!=0){
		printf("\nDelta la: %.2f",delta);
		if(delta<0){
			printf("\n\nPhuong trinh vo nghiem.");
		}else if(delta==0){
			printf("\n\nPhuong trinh co nghiem kep: x = %.2f",-b/(2*a));
		}else if(delta>0){
			r1 = (-b+sqrt(delta))/(2*a);
			r2 = (-b-sqrt(delta))/(2*a);
			printf("\n\nPhuong trinh co 2 nghiem rieng biet: r1 = %.2f , r2 = %.2f",r1,r2);
		}
	}
	return 0;
}
