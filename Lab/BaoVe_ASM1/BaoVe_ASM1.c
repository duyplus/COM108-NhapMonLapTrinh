#include <stdio.h>
#include <string.h>

struct HocSinh{
    char hoten[50];
    float van;
    float toan;
    float tb;
};
void HS(){
    int n;
    float temp;
    char name[50];
    printf("\nNhap n: ");
    scanf("%d",&n);
    struct HocSinh SV[n];
    for(int i=0;i<n;i++){
        printf("\nNhap Ho Ten sv thu %d la: ",i);
        fflush(stdin);
        gets(SV[i].hoten);
        printf("Nhap Diem Toan sv thu %d la: ",i);
        scanf("%f",&SV[i].toan);
        printf("Nhap Diem Van sv thu %d la: ",i);
        scanf("%f",&SV[i].van);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(SV[i].tb>SV[j].tb){
            	//Hoan vi vi tri
                temp = SV[i].tb;
                SV[i].tb = SV[j].tb;
                SV[j].tb = temp;
                strcpy(name,SV[i].hoten);
                strcpy(SV[i].hoten,SV[j].hoten);
                strcpy(SV[j].hoten,name);
            }
        }
    }
    printf("\nCac sinh vien tren 8 diem.");
    for(int i=0;i<n;i++){
    	SV[i].tb = (SV[i].toan+SV[i].van)/2;
    	if(SV[i].tb>8){
        	printf("\nHo Ten: %s",SV[i].hoten);
        	printf("\nDiem TB: %.1f",SV[i].tb);
		}
    }
    printf("\n\nDANH SACH SINH VIEN!");
    for(int i=0;i<n;i++){
    	SV[i].tb = (SV[i].toan+SV[i].van)/2;
        printf("\nHo Ten: %s",SV[i].hoten);
        printf("\nDiem TB: %.1f",SV[i].tb);
        if(SV[i].tb>8){
            printf("\nHoc luc Gioi\n");
        }else if(SV[i].tb<8){
            printf("\nHoc luc Kha\n");
        }else if(SV[i].tb>5){
            printf("\nHoc luc Trung Binh\n");
        }else{
            printf("\nHoc luc Yeu\n");
        }
    }
}
int main(){
	HS();
	
	return 0;
}
