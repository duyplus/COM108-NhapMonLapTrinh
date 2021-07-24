#include <stdio.h>
void nhap(int arr[][100],int m,int n){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("Nhap phan tu thu [%d][%d] la: ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
}
void xuat(int arr[][100],int m,int n){
	printf("\n");
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%d\t",arr[i][j]*arr[i][j]);
		}
	printf("\n");
   }
}
int main(){
    int n,m;
    int arr[n][m];
    printf("Nhap so n hang: ");
	scanf("%d",&n);
    printf("Nhap so m cot: ");
	scanf("%d",&m);
    nhap(arr,m,n);
    xuat(arr,m,n);
    return 0;
}
