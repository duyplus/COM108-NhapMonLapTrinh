#include <stdio.h>
int main(){
	const int n;
	printf("\tDiem < 3.5 \tNhap 3\n\tDiem >= 3.5 \tNhap 4\n\tDiem >= 5 \tNhap 6\n");
	printf("\tDiem >= 6.5 \tNhap 7\n\tDiem >= 8 \tNhap 8\n\tDiem > 9 \tNhap 9");
	printf("\nNhap diem: ");
	scanf("%d",&n);
	switch(n){
		case 10:
		case 9:
			printf("\nHoc luc xuat sac.");
			break;
		case 8:
			printf("\nHoc luc gioi.");
			break;
		case 7:
			printf("\nHoc luc kha.");
			break;
		case 6:
			printf("\nHoc luc trung binh.");
			break;
		case 4:
			printf("\nHoc luc yeu.");
			break;
		case 3:
			printf("\nHoc luc kem.");
			break;
		default:
			printf("\nNghi hoc di.");
			break;
	}
}
