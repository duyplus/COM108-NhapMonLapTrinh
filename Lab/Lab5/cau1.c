#include <stdio.h>
int gtln(int so1,int so2,int so3){
	int max;
	max = so1;
	if(max<so2){
		max = so2;
	}
	if(max<so3){
		max = so3;
	}
	return max;
}
int main(){
	int so1,so2,so3;
	int soMax;
	printf("Nhap so 1: ");scanf("%d",&so1);
	printf("Nhap so 2: ");scanf("%d",&so2);
	printf("Nhap so 3: ");scanf("%d",&so3);
	soMax = gtln(so1,so2,so3);
	printf("Gia tri lon nhat la: %d",soMax);
    return 0;
}
