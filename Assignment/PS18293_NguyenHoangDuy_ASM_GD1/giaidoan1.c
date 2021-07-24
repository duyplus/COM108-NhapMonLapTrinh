#include <stdio.h>
#include <math.h>
#include <stdbool.h>
//---------
void ktsn();
void ucln_bcln();
void karaoke();
void tiendien();
//---------
int UCLN(int a,int b);
int BCLN(int a,int b);
//---------
void ktsn(){
    printf("\nBan da chon Chuc nang 1\n");
    int x,i,count=0;
    printf("Nhap x: ");scanf("%d",&x);
    if(x==(int)x){
        printf("\n%d la so nguyen",x);
        if(x<2){
        	printf("\n%d khong phai so nguyen to",x);
    	}
        for(i=2;i<x;i++){
			if(x%i==0){
				count++;
			}
	    }
	    if(count==0){
	    	printf ("\n%d la so nguyen to",x);
	    }else{
	    	printf("\n%d khong phai so nguyen to",x);
	    }
	    for(i=1;i<x;i++){
			if(i*i==x){
				printf ("\n%d la so chinh phuong",x);
				break;
			}
    	}
    }
}
void ucln_bcln(){
    printf("\nBan da chon Chuc nang 2\n");
}
int UCLN(int a,int b){

}
int BCLN(int a,int b){
    
}
void karaoke(){
    printf("\nBan da chon Chuc nang 3\n");
}
void tiendien(){
    printf("\nBan da chon Chuc nang 4\n");
    float sd,sotien;
    float b1=1.678,b2=1.734,b3=2.014,b4=2.536,b5=2.834,b6=2.927;
    printf("\nNhap so dien (kWh): ");scanf("%f",&sd);
    if(sd<=50){
        sotien=sd*b1;
    }else if(sd<=100){
        sotien=50*b1+(sd-50)*b2;
    }else if(sd<=200){
        sotien=50*b1+50*b2+(sd-100)*b3;
    }else if(sd<=300){
        sotien=50*b1+50*b2+100*b3+(sd-200)*b4;
    }else if(sd<=400){
        sotien=50*b1+50*b2+100*b3+100*b4+(sd-300)*b5;
    }else{
        sotien=50*b1+50*b2+100*b3+100*b4+100*b5+(sd-400)*b6;
    }
    printf("\nSo tien can phai tra la: %.3f VND",sotien);
}

int main(){
	int ct=-1;
	printf("\n++-------------------------------------------------------------++");
    printf("\n| Chuc nang 1: Kiem tra so Nguyen, Nguyen To, Chinh Phuong \t|");
    printf("\n| Chuc nang 2: Tim UCLN va BCLN cua 2 so \t\t\t|");
    printf("\n| Chuc nang 3: Tinh tien Karaoke \t\t\t\t|");
    printf("\n| Chuc nang 4: Tinh tien Dien \t\t\t\t\t|");
    printf("\n| Chuc nang 5: Chuc nang Doi Tien \t\t\t\t|");
    printf("\n| Chuc nang 6: Tinh lai xuat vay \t\t\t\t|");
    printf("\n| Chuc nang 7: Vay tien mua xe \t\t\t\t\t|");
    printf("\n| Chuc nang 8: Sap xep thong tin sinh vien \t\t\t|");
    printf("\n| Chuc nang 9: Xay dung game FPOLY-LOTT \t\t\t|");
    printf("\n| Chuc nang 10: Tinh toan phan so \t\t\t\t|");
    printf("\n++-------------------------------------------------------------++");
    printf("\nNhap so chuc nang (1-10): ");
	scanf("%d",&ct);
	switch(ct){
		case 1:
			ktsn();
			break;
		case 2:
			ucln_bcln();
			break;
		case 3:
			karaoke();
			break;
		case 4:
			tiendien();
			break;
		case 5:
			printf("Chuc nang dang xay dung, quay lai sau!");
			break;
		case 6:
			printf("Chuc nang dang xay dung, quay lai sau!");
			break;
		case 7:
			printf("Chuc nang dang xay dung, quay lai sau!");
			break;
		case 8:
			printf("Chuc nang dang xay dung, quay lai sau!");
			break;
		case 9:
			printf("Chuc nang dang xay dung, quay lai sau!");
			break;
		case 10:
			printf("Chuc nang dang xay dung, quay lai sau!");
			break;
	}
	return 0;
}
