#include <stdio.h>
int main(){
    int ch,q=0;   //neu q!=0 chuong trinh ket thuc
    while(!q){ //chua thoat chuong trinh
    	printf("\n++-------------------------------------------------------------++");
        printf("\n| 1. TINH TRUNG BINH TONG CUA CAC SO TU NHIEN CHIA HET CHO 2\t|");
        printf("\n| 2. XAY DUNG CHUONG TRINH XAC DINH SO NGUYEN TO\t\t|");
        printf("\n| 3. XAY DUNG CHUONG TRINH SO CHINH PHUONG\t\t\t|");
        printf("\n| 4. THOAT CHUONG TRINH\t\t\t\t\t\t|");
        printf("\n++-------------------------------------------------------------++");
        printf("\nNhap so (1-4): ");
        scanf("%d", &ch);
        switch(ch){
	        case 1: {
				int min,max;
			    int i=min;
				float tong,dem,tb;
				printf("Nhap min: ");scanf("%d",&min);
				printf("Nhap max: ");scanf("%d",&max);
			    while(i<=max){
					if(i%2==0){
						printf("\n%d",i);
			      		tong += i;
			      		dem++;
					}
					++i;
				}
				tb = tong/dem;
				printf("\nKet qua: %.0f",tb);
	        } break;
	        case 2: {
			    int x,i,count=0;
			    printf ("Nhap x: ");
				scanf("%d",&x);
			    for(i=2;i<x;i++){
					if(x%i==0){
						count++;
					}
			    }
			    if(count==0){
			    	printf ("%d la so nguyen to",x);
			    }else{
			    	printf("%d khong phai so nguyen to",x);
			    }
	        } break;
	        case 3: {
			    int x,i,count=0;
			    printf("Nhap x: ");
				scanf("%d",&x);
			    for(i=1;i<x;i++){
			       if(i*i == x){
						printf ("%d la so chinh phuong",x);
						break;
			       }
			    }
	        } break;
        	case 4: return 1; //ket thuc chuong trinh
        }
    }
}
