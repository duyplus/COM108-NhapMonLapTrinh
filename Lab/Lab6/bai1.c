#include <stdio.h>
void nhap(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("Nhap phan tu thu %d la: ",i);
		scanf("%d",&arr[i]);
    }
}
float tinhtb(int arr[],int n){
	float tb,tong=0;
	int count=0;
	for(int i=0;i<n;i++){
		if(arr[i]%3==0){
			tong = tong + arr[i];
			count++;
		}
	}
	if(count==0){
		return 0;
	}else{
        tb=tong/count;
        return tb;
    }
}
int main(){
    int n;
	int arr[n];
	printf("Nhap n: ");
	scanf("%d",&n);
	nhap(arr,n);
	float kq = tinhtb(arr,n);
	printf("\nGia tri trung binh la: %0.2f",kq);   
    return 0;
}
