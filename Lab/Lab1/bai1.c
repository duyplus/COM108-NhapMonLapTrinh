#include <stdio.h>
int main(){
	int a,b,tong,hieu;
	printf("Nhap a: ");scanf("%d",&a);
    printf("Nhap b: ");scanf("%d",&b);
	tong = a + b; //tinh tong cua 2 so
	hieu = a - b; //tinh hieu cua 2 so
	printf("\nKet qua Tong la: %d\n",tong);
	printf("\nKet qua Hieu la: %d\n",hieu);
	return 0;
}
