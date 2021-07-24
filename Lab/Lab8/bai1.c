#include <stdio.h>
#include <stdlib.h>
struct SinhVien{
	char mssv[50];
	char ten[50];
	char nganh[50];
	float diem;
} SV[50];
void danhsach(){
    int i,n;
    printf("Nhap so sinh vien moi them: ");
	scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("\nNhap Mssv thu %d la: ",i);
        scanf("%s",SV[i].mssv);
        printf("Nhap Ho Ten sv thu %d la: ",i);
        scanf("%s",SV[i].ten);
        printf("Nhap Nganh sv thu %d la: ",i);
        scanf("%s",SV[i].nganh);
        printf("Nhap Diem TB sv thu %d la: ",i);
        scanf("%f",&SV[i].diem);
        fflush(stdin);
    }
    for(i=0;i<n;i++){
    	printf("\n\nThong tin SV thu %d",i);
        printf("\nMSSV: %s",SV[i].mssv);
        printf("\nHo Ten: %s",SV[i].ten);
        printf("\nNganh: %s",SV[i].nganh);
        printf("\nDiem TB: %.1f",SV[i].diem);
    }
}
int main(){
	danhsach();
	return 0;
}
