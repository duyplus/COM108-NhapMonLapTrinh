#include <stdio.h>
int main(){
	int r;
	float c,s;
	printf("Nhap r: ");scanf("%d",&r);
	c = 2*r*3.14; //tinh chu vi hinh tron
	s = r*r*3.14; //tinh dien tich hinh tron
	printf("\nChu vi Hinh Tron la: %.2f\n",c);
	printf("Dien tich Hinh Tron la: %.2f\n",s);
	return 0;
}
