#include <stdio.h>
int main(){
	int a,b,c,d,i,rg;
	int x1,x2,x3,x4,y1,y2,y3,y4;
	printf("Nhap phan so thu 1: ");
	scanf("%d%d",&a,&b);
	printf("Nhap phan so thu 2: ");
	scanf("%d%d",&c,&d);
	x1 = (a*d)+(b*c);
	y1 = b*d;
	x2 = (a*d)-(b*c);
	y2 = b*d;
	x3 = a*c;
	y3 = b*d;
	x4 = a*d;
	y4 = b*c;
	for(i=1;i<=x1 && i<=y1;i++){
		if(x1%i==0 && y1%i==0){
			rg = i;
		}
	}
	printf("\nTong 2 phan so la: %d/%d ",x1,y1);
	printf("\nHieu 2 phan so la: %d/%d ",x2,y2);
	printf("\nTich 2 phan so la: %d/%d ",x3,y3);
	printf("\nThuong 2 phan so la: %d/%d ",x4,y4);
	printf("\n\nRut gon phan so:");
	printf("\nTong la: %d/%d ",x1/rg,y1/rg);
	printf("\nHieu la: %d/%d ",x2/rg,y2/rg);
	printf("\nTich la: %d/%d ",x3/rg,y3/rg);
	printf("\nThuong la: %d/%d ",x4/rg,y4/rg);
	
	return 0;
}
