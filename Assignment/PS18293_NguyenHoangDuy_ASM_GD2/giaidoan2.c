#include <stdio.h>
#include <math.h>
//---------
void ktsn();
void ucln_bcln();
void karaoke();
void tiendien();
void doitien();
void vaynganhang();
//CHUC NANG 1
void ktsn(){
    printf("\nBan da chon Chuc nang 1\n");
    int x,i,count=0;
    printf("Nhap x: ");
	scanf("%d",&x);
    if(x==(int)x){
        printf("\n%d la so nguyen",x);
        for(i=2;i<x;i++){
			if(x%i==0){
				count++;
			}
	    }
	    if(count==0){
	    	printf("\n%d la so nguyen to",x);
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
//CHUC NANG 2
int UCLN(int a,int b);
int BCLN(int a,int b);

int UCLN(int a,int b){
    if(b==0){
        return a;
    }else{
        return UCLN(b,a%b);
    }
}
int BCLN(int a,int b){
    return (a*b)/UCLN(a,b);
}
void ucln_bcln(int a,int b){
    printf("\nBan da chon Chuc nang 2\n");
    printf("\nNhap a va b: ");
	scanf("%d%d",&a,&b);
    printf("UCLN cua %d va %d la %d",a,b,UCLN(a,b));
    printf("\nBCLN cua %d va %d la %d",a,b,BCLN(a,b));
}
//CHUC NANG 3
void karaoke(){
    printf("\nBan da chon Chuc nang 3\n");
    int bd,kt,time,addt;
    float pay,addm;
    printf("\nNhap gio bat dau: ");
	scanf("%d",&bd);
    printf("Nhap gio ket thuc: ");
	scanf("%d",&kt);
    time = kt-bd;
    if(time<=3){
        pay = time*150000;
    }else{
        addt = time-3;
        addm = addt*150000*0.7;
        pay = 3*150000+addm;
    }
    if (bd>=14 && bd<=17){
        pay = pay*0.9;
    }
    printf("Tong so tien can thanh toan la: %.2f",pay);
}
//CHUC NANG 4
void tiendien(){
    printf("\nBan da chon Chuc nang 4\n");
    float sd,sotien;
    float b1=1.678,b2=1.734,b3=2.014,b4=2.536,b5=2.834,b6=2.927;
    printf("\nNhap so dien (kWh): ");
	scanf("%f",&sd);
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
//CHUC NANG 5
#define MAX 9
void doitien(){
    printf("\nBan da chon Chuc nang 5\n");
    int ltien[MAX] = {500,200,100,50,20,10,5,2,1};
    int vnd,soluong;
    printf("\nNhap menh gia tien can doi: ");
	scanf("%d",&vnd);
    for(int i=0;i<MAX;i++){
        soluong = vnd/ltien[i];
        printf("\nCo %d loai tien %d dong",soluong,ltien[i]);
        vnd = vnd%ltien[i];
    }
}
//CHUC NANG 6
void vaynganhang(){
    printf("\nBan da chon Chuc nang 6\n");
    int i,kyhan = 12;
    float sotien,tong,ls;
    float gochangthang,laihangthang,tienhangthang;
    printf("\nBan muon vay bao nhieu: ");
	scanf("%f",&sotien);
    ls = 0.05;
    gochangthang = sotien/kyhan;
    for(i=1;i<=kyhan;i++){
        laihangthang = sotien*ls;
        tienhangthang = laihangthang+gochangthang;
        tong += tienhangthang;
        sotien = sotien-gochangthang;
        printf("\n\nSo tien can tra trong thang %d",i);
        printf("\nLai phai tra: %.0f",laihangthang);
    	printf("\nGoc phai tra: %.0f",gochangthang);
    	printf("\nTien phai tra: %.0f",tienhangthang);
    	printf("\nTien con lai: %.0f",sotien);
	}
    printf("\nTong tien ban tra sau 12 thang la: %.0f VND",tong);
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
			doitien();
			break;
		case 6:
			vaynganhang();
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
