#include <stdio.h>
int main(){
	int t;
	printf("Nhap thang ban muon xem ngay: ");
	scanf("%d",&t);
	switch(t){
		case 1:
			printf("31 ngay");
			break;
		case 2:
			printf("28 ngay");
			break;
		case 3:
			printf("31 ngay");
			break;
		case 4:
			printf("30 ngay");
			break;
		case 5:
			printf("31 ngay");
			break;
		case 6:
			printf("30 ngay");
			break;
		case 7:
			printf("31 ngay");
			break;
		case 8:
			printf("30 ngay");
			break;
		case 9:
			printf("31 ngay");
			break;
		case 10:
			printf("30 ngay");
			break;
		case 11:
			printf("31 ngay");
			break;
		case 12:
			printf("30 ngay");
			break;
		default:
			printf("Nhap sai thang roi! Nhap lai di thang ngu.");
	}
}
