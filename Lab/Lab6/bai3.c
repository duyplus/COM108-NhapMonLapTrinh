#include <stdio.h>
void nhap(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("Nhap phan tu thu %d la: ",i);
		scanf("%d",&arr[i]);
    }
}
int check(int arr[],int n){
	int tmp=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(arr[i]>arr[j]){
				tmp=arr[i];
                arr[i]=arr[j];
                arr[j]=tmp;
			}
		}
	}
	return tmp;
}
int main(){
	int n,tmp;
	int arr[n];
	printf("Nhap n: ");
	scanf("%d",&n);
	nhap(arr,n);
	check(arr,n);
	printf("\nMang sau khi sap xep:");
	for(int i=0;i<n;i++){
		printf("\nVi tri thu mang [%d] la: %d",i,arr[i]);
	}
    return 0;
}
