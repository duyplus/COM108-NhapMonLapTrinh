#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct SinhVien{
	char mssv[50];
	char ten[50];
	char nganh[50];
	float diem;
};
void danhsach();
void danhsach(){
    int i,n;
    struct SinhVien SV[50];
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
    float svTemp;
    char name[50];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(SV[i].diem<SV[j].diem){
                svTemp = SV[i].diem;
                SV[i].diem = SV[j].diem;
                SV[j].diem = svTemp;
                strcpy(name,SV[i].ten);
                strcpy(SV[i].ten,SV[j].ten);
                strcpy(SV[j].ten,name);
            }
        }
    }
    for(i=0;i<n;i++){
    	printf("\n\nThong tin SV thu %d",i);
        printf("\nMSSV: %s",SV[i].mssv);
        printf("\nHo Ten: %s",SV[i].ten);
        printf("\nNganh: %s",SV[i].nganh);
        printf("\nDiem TB: %.1f",SV[i].diem);
    }
    char masv[10];
	for(int i=0;i<n;i++){
		printf("\n===========================================");
		printf("\nNhap mssv can tim: ");
		scanf("%s",&SV[i].mssv);
		if(strcmp(SV[i].mssv,masv)){
			printf("\nMSSV: %s",SV[i].mssv);
	        printf("\nHo Ten: %s",SV[i].ten);
	        printf("\nNganh: %s",SV[i].nganh);
	        printf("\nDiem TB: %.1f",SV[i].diem);
		}
	}
}
int main(){
	int n;
	danhsach();
	return 0;
}
